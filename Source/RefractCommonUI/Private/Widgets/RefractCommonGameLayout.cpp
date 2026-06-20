// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Widgets/RefractCommonGameLayout.h"

#include "CommonActivatableWidget.h"
#include "RefractCommonUI.h"
#include "RefractCommonUIFunctionLibrary.h"
#include "Engine/AssetManager.h"
#include "Interfaces/CommonTaggedActivatableWidgetContainerInterface.h"
#include "Utility/RefractLogging.h"
#include "Widgets/CommonActivatableWidgetContainer.h"

URefractCommonGameLayout::URefractCommonGameLayout(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URefractCommonGameLayout::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (!IsValid(WidgetTree))
	{
		return;
	}

	WidgetTree->ForEachWidget([this](UWidget* Widget)
	{
		if (UCommonActivatableWidgetContainerBase* Container = Cast<UCommonActivatableWidgetContainerBase>(Widget);
			IsValid(Container) && Container->Implements<UCommonTaggedActivatableWidgetContainerInterface>())
		{
			RegisterLayer(Container);
		}
	});
}

void URefractCommonGameLayout::RemoveWidgetFromLayer(UCommonActivatableWidget* Widget)
{
	for (const auto& Layer : Layers)
	{
		Layer.Value->RemoveWidget(*Widget);
	}
}

UCommonActivatableWidgetContainerBase* URefractCommonGameLayout::GetLayerWidget(const FGameplayTag Layer) const
{
	return Layers.FindRef(Layer);
}

void URefractCommonGameLayout::RegisterLayer(UCommonActivatableWidgetContainerBase* LayerWidget)
{
	if (IsDesignTime() || !IsValid(LayerWidget) || !LayerWidget->Implements<UCommonTaggedActivatableWidgetContainerInterface>())
	{
		return;
	}

	const FGameplayTag LayerTag = CastChecked<ICommonTaggedActivatableWidgetContainerInterface>(LayerWidget)->GetLayerTag();

	if (!LayerTag.IsValid())
	{
		REFRACT_LOG_UCLASS_ARGS(LogRefractCommonUI, Warning, "RegisterLayer: '%s' has an invalid layer tag; skipping.",
			*GetNameSafe(LayerWidget));
		return;
	}

	if (const TObjectPtr<UCommonActivatableWidgetContainerBase>* Existing = Layers.Find(LayerTag))
	{
		REFRACT_LOG_UCLASS_ARGS(LogRefractCommonUI, Warning, "RegisterLayer: tag '%s' already registered to '%s'; ignoring duplicate '%s'.",
			*LayerTag.ToString(),
			*GetNameSafe(*Existing),
			*GetNameSafe(LayerWidget));
		return;
	}

	LayerWidget->OnTransitioningChanged.AddUObject(this, &ThisClass::OnLayerTransitioning);
	Layers.Add(LayerTag, LayerWidget);
}

void URefractCommonGameLayout::OnLayerTransitioning(UCommonActivatableWidgetContainerBase*, const bool bIsTransitioning)
{
	if (bIsTransitioning)
	{
		const FName SuspendToken = URefractCommonUIFunctionLibrary::SuspendInput(GetOwningLocalPlayer(), TEXT("GlobalStackTransition"));
		SuspendInputTokens.Add(SuspendToken);
	}
	else
	{
		if (SuspendInputTokens.Num() > 0)
		{
			URefractCommonUIFunctionLibrary::ResumeInput(GetOwningLocalPlayer(), SuspendInputTokens.Pop());
		}
	}
}

TSharedPtr<FStreamableHandle> URefractCommonGameLayout::RequestAsyncLoadWidgetClass(
	TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass,
	FName SuspendInputToken,
	TFunction<void(UClass*)> OnLoaded,
	FStreamableDelegate OnCanceled) const
{
	FStreamableManager& Mgr = UAssetManager::Get().GetStreamableManager();
	TSharedPtr<FStreamableHandle> Handle = Mgr.RequestAsyncLoad(
		ActivatableWidgetClass.ToSoftObjectPath(),
		FStreamableDelegate::CreateWeakLambda(this,
			[this, ActivatableWidgetClass, SuspendInputToken, OnLoaded = MoveTemp(OnLoaded)]()
			{
				URefractCommonUIFunctionLibrary::ResumeInput(GetOwningLocalPlayer(), SuspendInputToken);
				OnLoaded(ActivatableWidgetClass.Get());
			}));

	if (Handle.IsValid())
	{
		Handle->BindCancelDelegate(MoveTemp(OnCanceled));
	}
	return Handle;
}

UCommonActivatableWidget* URefractCommonGameLayout::PushWidgetToLayerStackImpl(
	const FGameplayTag LayerName,
	UClass* ActivatableWidgetClass,
	const TFunctionRef<void(UCommonActivatableWidget&)>& InitInstanceFunc) const
{
	if (UCommonActivatableWidgetContainerBase* Layer = GetLayerWidget(LayerName))
	{
		return Layer->AddWidget<UCommonActivatableWidget>(ActivatableWidgetClass, InitInstanceFunc);
	}
	return nullptr;
}

TSharedPtr<FStreamableHandle> URefractCommonGameLayout::PushWidgetToLayerStackAsyncImpl(
	FGameplayTag LayerName,
	const bool bSuspendInputUntilComplete,
	const TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass,
	TFunction<void(ERefractAsyncWidgetLayerState, UCommonActivatableWidget*)> StateFunc) const
{
	static const FName NAME_PushingWidgetToLayer("PushingWidgetToLayer");
	const FName Token = bSuspendInputUntilComplete
		? URefractCommonUIFunctionLibrary::SuspendInput(GetOwningLocalPlayer(), NAME_PushingWidgetToLayer)
		: NAME_None;

	return RequestAsyncLoadWidgetClass(ActivatableWidgetClass, Token,
		[this, LayerName, StateFunc](UClass* LoadedClass)
		{
			UCommonActivatableWidget* Widget = PushWidgetToLayerStackImpl(
				LayerName, LoadedClass,
				[&StateFunc](UCommonActivatableWidget& W) { StateFunc(ERefractAsyncWidgetLayerState::Initialize, &W); });
			StateFunc(ERefractAsyncWidgetLayerState::AfterPush, Widget);
		},
		FStreamableDelegate::CreateWeakLambda(this,
			[this, StateFunc, Token]
			{
				URefractCommonUIFunctionLibrary::ResumeInput(GetOwningLocalPlayer(), Token);
				StateFunc(ERefractAsyncWidgetLayerState::Canceled, nullptr);
			}));
}
