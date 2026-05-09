// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RefractCommonFunctionLibrary.generated.h"

#define UE_API REFRACTCOMMON_API

class UNiagaraSystem;

/**
 * Function library for common needs.
 */
UCLASS(MinimalAPI)
class URefractCommonFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * @return The non-localized name this product is using for publishing, as specified by the Project Settings.
	 */
	UFUNCTION(Category = "Text Resources | Product", BlueprintCallable, BlueprintPure = true)
	static UE_API FString GetProductName();

	/**
	 * @return The year this product was last built. This may be outdated if the project hasn't been recompiled in a while.
	 */
	UFUNCTION(Category = "Text Resources | Product", BlueprintCallable, BlueprintPure = true)
	static UE_API int32 GetProductBuildYear();

	/**
	 * @return The Unreal Engine attribution notice for this project, as specified by section 7a of the Unreal Engine EULA.
	 */
	UFUNCTION(Category = "Text Resources | Legal", BlueprintCallable, BlueprintPure = true)
	static UE_API FString GetUnrealEngineAttribution();

	/**
	 * @return Whether we are in the editor or a standalone game.
	 */
	UFUNCTION(Category = "Platform", BlueprintCallable, BlueprintPure = true)
	static UE_API bool IsInEditor();
};

#undef UE_API
