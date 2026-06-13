// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "Widgets/RefractRotatorBase.h"
#include "RefractNumericRotator.generated.h"

enum class ERotatorDirection : uint8;

#define UE_API REFRACTCOMMONUI_API

/** A rotator that selects any integer in a [min, max] range. */
UCLASS(MinimalAPI, Blueprintable, BlueprintType, meta = (Category = "Rotator", DisableNativeTick))
class URefractNumericRotator : public URefractRotatorBase
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNumericRotatedEvent, int32, Value, bool, bUserInitiated);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNumericRotatedWithDirection, int32, Value, ERotatorDirection, Direction);

public:
	UE_API URefractNumericRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = false, BlueprintCosmetic)
	UE_API void SetRange(int32 Min, int32 Max);

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic)
	UE_API FInt32Range GetRange() const;

	/** Sets the selected value, clamped to [min, max]. Does not broadcast OnRotatedEvent. */
	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = false, BlueprintCosmetic)
	UE_API void SetSelectedValue(int32 InValue);

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic)
	UE_API int32 GetSelectedValue() const { return CurrentValue; }
 
	UFUNCTION(Category = "Rotator", BlueprintNativeEvent)
	UE_API void OnOptionSelected(int32 Value);

	UPROPERTY(Category = "Events", BlueprintAssignable)
	FNumericRotatedEvent OnRotatedEvent;

	UPROPERTY(Category = "Events", BlueprintAssignable)
	FNumericRotatedWithDirection OnRotatedWithDirection;

protected:
	UE_API virtual void ShiftInternal(ERotatorDirection Direction, bool bFromNavigation) override;

private:
	int32 MinValue  = 0;
	int32 MaxValue  = 0;
	int32 CurrentValue = 0;
};

#undef UE_API