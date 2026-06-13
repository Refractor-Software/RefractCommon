// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RefractListEntryBackgroundWidget.generated.h"

#define UE_API REFRACTCOMMONUI_API

/**
 * Base class for vertical list menu entry widgets.
 *
 * This is useful for things such as settings menus, crafting menus, really anywhere you need a vertically-scrolling list of
 * entry widgets and a consistent background widget type.
 */
UCLASS(Abstract, DisplayName = "Vertical List Entry Background Widget")
class URefractListEntryBackgroundWidget : public UUserWidget
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMouseEnterChanged, bool, bIsEnterEvent);

public:
	UE_API URefractListEntryBackgroundWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(Category = "Events", BlueprintAssignable)
	FOnMouseEnterChanged OnMouseEnterChanged;

protected:
	UE_API virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	UE_API virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;

private:
	UPROPERTY(meta = (BindWidget))
	UNamedSlot* Content;

	UPROPERTY(meta = (BindWidgetAnimOptional))
	UWidgetAnimation* OnHovered;

	/**
	 * Sound effect to use when this widget is hovered using the mouse.
	 */
	UPROPERTY(Category = "User Interface", EditAnywhere, meta = (AllowPrivateAccess = true))
	USoundBase* HoveredSound;
};

#undef UE_API
