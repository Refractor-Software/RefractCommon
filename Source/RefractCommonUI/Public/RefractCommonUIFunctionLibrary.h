// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RefractCommonUIFunctionLibrary.generated.h"

#define UE_API REFRACTCOMMONUI_API

class UCommonButtonBase;
class UWidget;
class UCommonInputSubsystem;
enum class ECommonInputType : uint8;

/**
 * Static function library for common user interface needs.
 */
UCLASS(MinimalAPI, DisplayName = "Refract Common UI Function Library")
class URefractCommonUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	static UCommonInputSubsystem* GetCommonInputSubsystem(const UWidget* Context);

public:
	UFUNCTION(Category = "User Interface", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic, meta = (WorldContext = "Context"))
	static UE_API ECommonInputType GetOwningPlayerInputType(const UWidget* Context);

	UFUNCTION(Category = "User Interface", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic, meta = (WorldContext = "Context"))
	static UE_API bool IsOwningPlayerUsingTouch(const UWidget* Context);

	UFUNCTION(Category = "User Interface", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic, meta = (WorldContext = "Context"))
	static UE_API bool IsOwningPlayerUsingGamepad(const UWidget* Context);

	UFUNCTION(Category = "User Interface", BlueprintCallable, BlueprintPure = false, BlueprintCosmetic)
	static UE_API void PlayCommonButtonClickSound(const UCommonButtonBase* Button);
};

#undef UE_API
