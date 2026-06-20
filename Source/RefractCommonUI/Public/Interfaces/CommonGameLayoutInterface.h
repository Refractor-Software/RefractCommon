// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CommonGameLayoutInterface.generated.h"

#define UE_API REFRACTCOMMONUI_API

struct FGameplayTag;
class UCommonActivatableWidgetContainerBase;

UINTERFACE(MinimalAPI, NotBlueprintable)
class UCommonGameLayoutInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for the public API of a game user interface layout.
 */
class ICommonGameLayoutInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(Category = "Common UI | Game Layout", BlueprintCallable, BlueprintPure = false)
	UE_API virtual void RegisterLayer(const FGameplayTag& LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget);
};

#undef UE_API
