// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Interface.h"
#include "CommonTaggedActivatableWidgetContainerInterface.generated.h"

#define UE_API REFRACTCOMMONUI_API

UINTERFACE(MinimalAPI, NotBlueprintable)
class UCommonTaggedActivatableWidgetContainerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for any Common Activatable Widget Container (stack, queue, or otherwise) that exposes a layer tag
 * for use with the user interface layout widget.
 */
class ICommonTaggedActivatableWidgetContainerInterface
{
	GENERATED_BODY()

public:
	UE_API virtual FGameplayTag GetLayerTag() const;
};

#undef UE_API
