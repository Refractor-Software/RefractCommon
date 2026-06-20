// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "Engine/StreamableManager.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "RefractCommonGameLayout.generated.h"

#define UE_API REFRACTCOMMONUI_API

class UCommonActivatableWidget;
struct FGameplayTag;
class UCommonActivatableWidgetContainerBase;

/**
 * The state of an async load operation for the UI.
 */
enum class ERefractAsyncWidgetLayerState : uint8
{
	Canceled,
	Initialize,
	AfterPush
};

/**
 * This defines the primary user interface layout for a game.
 */
UCLASS(MinimalAPI, Abstract, meta = (DisableNativeTick))
class URefractCommonGameLayout : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	UE_API URefractCommonGameLayout(const FObjectInitializer& ObjectInitializer);

	//~ BEGIN UUserWidget
	UE_API virtual void NativeOnInitialized() override;
	//~ END UUserWidget

	UE_API void RemoveWidgetFromLayer(UCommonActivatableWidget* Widget);
	UE_API UCommonActivatableWidgetContainerBase* GetLayerWidget(FGameplayTag Layer) const;

	template <typename T = UCommonActivatableWidget>
	T* PushWidgetToLayerStack(
		FGameplayTag LayerName,
		UClass* ActivatableWidgetClass);

	template <typename T = UCommonActivatableWidget>
	T* PushWidgetToLayerStack(
		FGameplayTag LayerName,
		UClass* ActivatableWidgetClass,
		TFunctionRef<void(T&)> InitInstanceFunc);

	template <typename T = UCommonActivatableWidget>
	TSharedPtr<FStreamableHandle> PushWidgetToLayerStackAsync(
		FGameplayTag LayerName,
		bool bSuspendInputUntilComplete,
		TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass);

	template <typename T = UCommonActivatableWidget>
	TSharedPtr<FStreamableHandle> PushWidgetToLayerStackAsync(
		FGameplayTag LayerName,
		bool bSuspendInputUntilComplete,
		TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass,
		TFunction<void(ERefractAsyncWidgetLayerState, T*)> StateFunc);

private:
	void RegisterLayer(UCommonActivatableWidgetContainerBase* LayerWidget);
	void OnLayerTransitioning(UCommonActivatableWidgetContainerBase* Layer, bool bIsTransitioning);

	UE_API TSharedPtr<FStreamableHandle> RequestAsyncLoadWidgetClass(
		TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass,
		FName SuspendInputToken,
		TFunction<void(UClass* /*LoadedClass*/)> OnLoaded,
		FStreamableDelegate OnCanceled) const;

	UE_API UCommonActivatableWidget* PushWidgetToLayerStackImpl(
		FGameplayTag LayerName, UClass* ActivatableWidgetClass,
		const TFunctionRef<void(UCommonActivatableWidget&)>& InitInstanceFunc) const;

	UE_API TSharedPtr<FStreamableHandle> PushWidgetToLayerStackAsyncImpl(
		FGameplayTag LayerName,
		bool bSuspendInputUntilComplete,
		TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass,
		TFunction<void(ERefractAsyncWidgetLayerState, UCommonActivatableWidget*)> StateFunc) const;

private:
	UPROPERTY(Transient)
	TArray<FName> SuspendInputTokens;

	UPROPERTY(Transient)
	TMap<FGameplayTag, TObjectPtr<UCommonActivatableWidgetContainerBase>> Layers;
};

template <typename T>
T* URefractCommonGameLayout::PushWidgetToLayerStack(
	FGameplayTag LayerName,
	UClass* ActivatableWidgetClass)
{
	return PushWidgetToLayerStack<T>(LayerName, ActivatableWidgetClass, [](T&) {});
}

template <typename T>
T* URefractCommonGameLayout::PushWidgetToLayerStack(
	FGameplayTag LayerName,
	UClass* ActivatableWidgetClass,
	TFunctionRef<void(T&)> InitInstanceFunc)
{
	static_assert(TIsDerivedFrom<T, UCommonActivatableWidget>::IsDerived, "T must derive from UCommonActivatableWidget");
	return Cast<T>(PushWidgetToLayerStackImpl(LayerName, ActivatableWidgetClass,
			[&InitInstanceFunc](UCommonActivatableWidget& W)
			{
				InitInstanceFunc(*CastChecked<T>(&W));
			}));
}

template <typename T>
TSharedPtr<FStreamableHandle> URefractCommonGameLayout::PushWidgetToLayerStackAsync(
	FGameplayTag LayerName,
	bool bSuspendInputUntilComplete,
	TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass)
{
	return PushWidgetToLayerStackAsync<T>(LayerName, bSuspendInputUntilComplete, ActivatableWidgetClass, [](ERefractAsyncWidgetLayerState, T*) {});
}

template <typename T>
TSharedPtr<FStreamableHandle> URefractCommonGameLayout::PushWidgetToLayerStackAsync(
	FGameplayTag LayerName,
	bool bSuspendInputUntilComplete,
	TSoftClassPtr<UCommonActivatableWidget> ActivatableWidgetClass,
	TFunction<void(ERefractAsyncWidgetLayerState, T*)> StateFunc)
{
	static_assert(TIsDerivedFrom<T, UCommonActivatableWidget>::IsDerived, "T must derive from UCommonActivatableWidget");
	return PushWidgetToLayerStackAsyncImpl(LayerName, bSuspendInputUntilComplete, ActivatableWidgetClass,
		[StateFunc](ERefractAsyncWidgetLayerState State, UCommonActivatableWidget* W)
		{
			StateFunc(State, CastChecked<T>(W, ECastCheckedType::NullAllowed));
		});
}

#undef UE_API
