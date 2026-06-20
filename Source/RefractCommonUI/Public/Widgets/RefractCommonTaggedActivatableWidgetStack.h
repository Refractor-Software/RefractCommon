// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Interfaces/CommonTaggedActivatableWidgetContainerInterface.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "RefractCommonTaggedActivatableWidgetStack.generated.h"

#define UE_API REFRACTCOMMONUI_API

/**
 * A common activatable widget stack that can be marked with a Gameplay Tag.
 *
 * This enables the rest of the UI system to arbitrarily search for stack by tag, so you can have as many stacks as you want in your
 * primary layout without needing to change the underlying code.
 */
UCLASS(MinimalAPI)
class URefractCommonTaggedActivatableWidgetStack : public UCommonActivatableWidgetStack, public ICommonTaggedActivatableWidgetContainerInterface
{
	GENERATED_BODY()

	UPROPERTY(Category = "Tagged Activatable Widget Stack", EditAnywhere, meta = (AllowPrivateAccess = true))
	FGameplayTag LayerTag;

public:
	UE_API URefractCommonTaggedActivatableWidgetStack(const FObjectInitializer& ObjectInitializer);

	//~ BEGIN ICommonTaggedActivatableWidgetContainerInterface
	virtual FGameplayTag GetLayerTag() const override;
	//~ END ICommonTaggedActivatableWidgetContainerInterface
};

#undef UE_API
