// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CommonButtonTextInterface.generated.h"

UINTERFACE(Blueprintable)
class UCommonButtonTextInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Simple interface for buttons to expose a single text value that can be set.
 */
class REFRACTCOMMONUI_API ICommonButtonTextInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(Category = "Button", BlueprintCallable, BlueprintPure = false, BlueprintNativeEvent)
	void SetButtonText(const FText& InText);
};
