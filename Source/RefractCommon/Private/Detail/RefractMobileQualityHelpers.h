// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * Internal static helper for mobile frame rate and quality limit queries.
 * Not part of the public API — consumed only by URefractCommonLocalUserSettings.
 *
 * The underlying TMobileQualityWrapper instances and mobile CVars are defined
 * in RefractMobileQualityHelpers.cpp.
 */
class FRefractMobileQuality
{
public:
	FRefractMobileQuality() = delete;

	/** Returns the default mobile frame rate as driven by the device profile CVar. */
	static int32 GetDefaultFrameRate();

	/** Returns the maximum mobile frame rate as driven by the device profile CVar. */
	static int32 GetMaxFrameRate();

	/**
	 * Returns whether the given frame rate is a supported mobile frame pace.
	 * A rate is supported if it is the default, does not exceed the maximum, and the RHI supports it.
	 */
	static bool IsSupportedFramePace(int32 TestFPS);

	/** Returns the applicable overall quality limit for the given frame rate, or -1 if unlimited. */
	static int32 GetApplicableOverallQualityLimit(int32 FrameRate);

	/** Returns the applicable resolution quality limit for the given frame rate. */
	static float GetApplicableResolutionQualityLimit(int32 FrameRate);

	/** Returns the recommended resolution quality for the given frame rate. */
	static float GetApplicableResolutionQualityRecommendation(int32 FrameRate);

	/**
	 * Returns the closest supported frame rate at or below the desired rate
	 * that is also compatible with the given overall quality level.
	 */
	static int32 ConstrainFrameRateToBeCompatibleWithOverallQuality(int32 FrameRate, int32 OverallQuality);

	/** Returns the first frame rate threshold at which overall quality becomes limited, or INDEX_NONE. */
	static int32 GetFirstFrameRateWithQualityLimit();

	/** Returns the lowest quality value at which a frame rate limit applies, or -1 if none. */
	static int32 GetLowestQualityWithFrameRateLimit();
};
