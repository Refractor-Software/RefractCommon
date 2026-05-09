// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Scalability.h"
#include "RefractCommonScalabilityTypes.generated.h"

#define UE_API REFRACTCOMMON_API

/**
 * A snapshot of scalability quality levels, optionally with per-channel override flags.
 * Used to capture device profile defaults and apply or clamp them against live settings.
 */
USTRUCT()
struct FScalabilitySnapshot
{
	GENERATED_BODY()

	UE_API FScalabilitySnapshot();

	/**
	 * @return The highest value across all integer scalability channels (ignoring ResolutionQuality), or -1 if all channels are unset.
	 */
	UE_API int32 GetHighestLevelOfAnyScalabilityChannel() const;

	/**
	 * Fills this snapshot from the currently active device profile's scalability CVars.
	 * Optionally accepts a suffix (e.g. for experience or quality variant profiles).
	 * Resets the snapshot before filling, so previously set values are not preserved.
	 *
	 * @param Suffix Optional device profile suffix to append to CVar names when querying.
	 */
	UE_API void FillFromDeviceProfile(const FString& Suffix = FString());
 
	/**
	 * Applies this snapshot's quality levels to InOutLevels, overriding any channel
	 * whose snapshot value is valid (non-negative). Channels set to -1 are left unchanged.
	 *
	 * @param InOutLevels The quality levels to apply this snapshot's values into.
	 */
	UE_API void ApplyTo(Scalability::FQualityLevels& InOutLevels) const;
 
	/**
	 * Clamps InOutLevels to this snapshot's quality levels, taking the minimum of each
	 * channel where the snapshot value is valid (non-negative). Channels set to -1 are left unchanged.
	 *
	 * @param InOutLevels The quality levels to clamp using this snapshot's values.
	 */
	UE_API void ClampToThis(Scalability::FQualityLevels& InOutLevels) const;

	Scalability::FQualityLevels Qualities;
	bool bActive = false;
	bool bHasOverrides = false;

private:
	void Reset();
};

#undef UE_API