// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CommonRotator.h"
#include "RefractCommonUITypes.generated.h"

#define UE_API REFRACTCOMMONUI_API

USTRUCT(BlueprintType, DisplayName = "Discrete Rotator Trigger Payload")
struct FRefractDiscreteRotatorTriggerPayload
{
	GENERATED_BODY()

	UE_API FRefractDiscreteRotatorTriggerPayload();

	UPROPERTY(Category = "Rotator", BlueprintReadOnly)
	ERotatorDirection Direction;

	UPROPERTY(Category = "Rotator", BlueprintReadOnly)
	int32 Index;

	UPROPERTY(Category = "Rotator", BlueprintReadOnly)
	int32 PreviousIndex;
};

USTRUCT(BlueprintType, DisplayName = "Slider Trigger Payload")
struct FRefractSliderTriggerPayload
{
	GENERATED_BODY()

	UE_API FRefractSliderTriggerPayload();

	UPROPERTY(Category = "Slider", BlueprintReadOnly)
	float Value;

	UPROPERTY(Category = "Slider", BlueprintReadOnly)
	float PreviousValue;
};

#undef UE_API
