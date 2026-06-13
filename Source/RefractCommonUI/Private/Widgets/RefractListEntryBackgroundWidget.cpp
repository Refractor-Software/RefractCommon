// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Widgets/RefractListEntryBackgroundWidget.h"

#include "RefractCommonUIFunctionLibrary.h"
#include "Animation/WidgetAnimation.h"
#include "Kismet/GameplayStatics.h"

URefractListEntryBackgroundWidget::URefractListEntryBackgroundWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URefractListEntryBackgroundWidget::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);

	if (URefractCommonUIFunctionLibrary::IsOwningPlayerUsingTouch(this))
	{
		return;
	}

	if (IsValid(OnHovered))
	{
		PlayAnimationForward(OnHovered);
	}

	OnMouseEnterChanged.Broadcast(true);

	if (IsValid(HoveredSound))
	{
		UGameplayStatics::PlaySound2D(this, HoveredSound);
	}
}

void URefractListEntryBackgroundWidget::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);

	if (URefractCommonUIFunctionLibrary::IsOwningPlayerUsingTouch(this))
	{
		return;
	}

	if (IsValid(OnHovered))
	{
		PlayAnimationReverse(OnHovered);
	}

	OnMouseEnterChanged.Broadcast(false);
}
