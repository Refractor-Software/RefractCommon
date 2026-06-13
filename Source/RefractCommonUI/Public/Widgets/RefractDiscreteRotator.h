// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "Widgets/RefractRotatorBase.h"
#include "RefractDiscreteRotator.generated.h"

enum class ERotatorDirection : uint8;

#define UE_API REFRACTCOMMONUI_API

/**
 * A rotator that cycles through a fixed array of text options.
 */
UCLASS(MinimalAPI, Blueprintable, BlueprintType, meta = (Category = "Rotator", DisableNativeTick))
class URefractDiscreteRotator : public URefractRotatorBase
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscreteRotatedEvent, int32, Index, bool, bUserInitiated);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDiscreteRotatedWithDirection, int32, Index, ERotatorDirection, Direction);

public:
	UE_API URefractDiscreteRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** Replaces the option list and resets selection to index 0. */
	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = false, BlueprintCosmetic)
	UE_API void SetOptions(const TArray<FText>& InOptions);

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic)
	UE_API const TArray<FText>& GetOptions() const { return Options; }

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic)
	UE_API int32 GetOptionsCount() const { return Options.Num(); }

	/** Sets the selected index, clamped to valid range. Does not broadcast OnRotatedEvent. */
	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = false, BlueprintCosmetic)
	UE_API void SetSelectedIndex(int32 InIndex);

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic)
	UE_API int32 GetSelectedIndex() const { return CurrentIndex; }

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = true, BlueprintCosmetic)
	UE_API FText GetSelectedOptionText() const;

	UFUNCTION(Category = "Rotator", BlueprintNativeEvent)
	UE_API void OnOptionSelected(int32 Index);

	UPROPERTY(Category = "Events", BlueprintAssignable)
	FDiscreteRotatedEvent OnRotatedEvent;

	UPROPERTY(Category = "Events", BlueprintAssignable)
	FDiscreteRotatedWithDirection OnRotatedWithDirection;

protected:
	UE_API virtual void ShiftInternal(ERotatorDirection Direction, bool bFromNavigation) override;

private:
	TArray<FText> Options;
	int32 CurrentIndex = 0;
};

#undef UE_API
