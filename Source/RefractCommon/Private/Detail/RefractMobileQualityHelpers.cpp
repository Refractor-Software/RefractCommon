// Copyright (C) William Pimentel-Tonche. All rights reserved.

#include "Detail/RefractMobileQualityHelpers.h"

#include "HAL/PlatformFramePacer.h"
#include "Misc/App.h"
#include "Settings/RefractPlatformSettings.h"

//////////////////////////////////////////////////////////////////////
// Mobile frame pacing CVars

static TAutoConsoleVariable<int32> CVarDeviceProfileDrivenMobileDefaultFrameRate(
	TEXT("Refract.DeviceProfile.Mobile.DefaultFrameRate"),
	30,
	TEXT("Default FPS when being driven by device profile"),
	ECVF_Default | ECVF_Preview);

static TAutoConsoleVariable<int32> CVarDeviceProfileDrivenMobileMaxFrameRate(
	TEXT("Refract.DeviceProfile.Mobile.MaxFrameRate"),
	30,
	TEXT("Max FPS when being driven by device profile"),
	ECVF_Default | ECVF_Preview);

static TAutoConsoleVariable<FString> CVarMobileQualityLimits(
	TEXT("Refract.DeviceProfile.Mobile.OverallQualityLimits"),
	TEXT(""),
	TEXT("List of overall quality limits of the form \"FPS:MaxQuality,FPS2:MaxQuality2,...\", applied when FPS is at or above each threshold."),
	ECVF_Default | ECVF_Preview);

static TAutoConsoleVariable<FString> CVarMobileResolutionQualityLimits(
	TEXT("Refract.DeviceProfile.Mobile.ResolutionQualityLimits"),
	TEXT(""),
	TEXT("List of resolution quality limits of the form \"FPS:MaxResQuality,FPS2:MaxResQuality2,...\", applied when FPS is at or above each threshold."),
	ECVF_Default | ECVF_Preview);

static TAutoConsoleVariable<FString> CVarMobileResolutionQualityRecommendation(
	TEXT("Refract.DeviceProfile.Mobile.ResolutionQualityRecommendation"),
	TEXT("0:75"),
	TEXT("List of resolution quality recommendations of the form \"FPS:Recommendation,FPS2:Recommendation2,...\", applied when FPS is at or above each threshold."),
	ECVF_Default | ECVF_Preview);

//////////////////////////////////////////////////////////////////////
// TMobileQualityWrapper
//
// Caches and parses a CVar string of the form "FPS:Value,FPS2:Value2,..."
// into a sorted threshold list, refreshing lazily when the CVar changes.

template<typename T>
class TMobileQualityWrapper
{
public:
	TMobileQualityWrapper(T InDefaultValue, TAutoConsoleVariable<FString>& InWatchedVar)
		: DefaultValue(InDefaultValue)
		, WatchedVar(InWatchedVar)
	{
	}

	T Query(int32 TestValue)
	{
		UpdateCache();
		for (const FLimitPair& Pair : Thresholds)
		{
			if (TestValue >= Pair.Limit)
			{
				return Pair.Value;
			}
		}
		return DefaultValue;
	}

	int32 GetFirstThreshold()
	{
		UpdateCache();
		return Thresholds.Num() > 0 ? Thresholds[0].Limit : INDEX_NONE;
	}

	T GetLowestValue(T DefaultIfNoPairs)
	{
		UpdateCache();

		T Result = DefaultIfNoPairs;
		bool bFirst = true;
		for (const FLimitPair& Pair : Thresholds)
		{
			Result = bFirst ? Pair.Value : FMath::Min(Result, Pair.Value);
			bFirst = false;
		}
		return Result;
	}

private:
	struct FLimitPair
	{
		int32 Limit = 0;
		T Value    = T(0);
	};

	void UpdateCache()
	{
		const FString Current = WatchedVar.GetValueOnGameThread();
		if (Current.Equals(LastSeenCVarString, ESearchCase::CaseSensitive))
		{
			return;
		}

		LastSeenCVarString = Current;
		Thresholds.Reset();

		int32 ScanIndex = 0;
		while (ScanIndex < LastSeenCVarString.Len())
		{
			const int32 ColonIndex = LastSeenCVarString.Find(TEXT(":"), ESearchCase::CaseSensitive, ESearchDir::FromStart, ScanIndex);
			if (ColonIndex <= 0)
			{
				UE_LOG(LogConsoleResponse, Error, TEXT("Malformed value for '%s'='%s', expected ':'"),
					*IConsoleManager::Get().FindConsoleObjectName(WatchedVar.AsVariable()),
					*LastSeenCVarString);
				Thresholds.Reset();
				break;
			}

			const int32 CommaIndex    = LastSeenCVarString.Find(TEXT(","), ESearchCase::CaseSensitive, ESearchDir::FromStart, ColonIndex);
			const int32 EndOfPairIndex = CommaIndex != INDEX_NONE ? CommaIndex : LastSeenCVarString.Len();

			FLimitPair Pair;
			LexFromString(Pair.Limit, *LastSeenCVarString.Mid(ScanIndex, ColonIndex - ScanIndex));
			LexFromString(Pair.Value, *LastSeenCVarString.Mid(ColonIndex + 1, EndOfPairIndex - ColonIndex - 1));
			Thresholds.Add(Pair);

			ScanIndex = EndOfPairIndex + 1;
		}

		Thresholds.Sort([](const FLimitPair& A, const FLimitPair& B) { return A.Limit < B.Limit; });
	}

	T DefaultValue;
	TAutoConsoleVariable<FString>& WatchedVar;
	FString LastSeenCVarString;
	TArray<FLimitPair> Thresholds;
};

//////////////////////////////////////////////////////////////////////
// Wrapper instances (file-scope, lazy-initialized)

static TMobileQualityWrapper<int32> OverallQualityLimits(-1, CVarMobileQualityLimits);
static TMobileQualityWrapper<float> ResolutionQualityLimits(100.0f, CVarMobileResolutionQualityLimits);
static TMobileQualityWrapper<float> ResolutionQualityRecommendations(75.0f, CVarMobileResolutionQualityRecommendation);

//////////////////////////////////////////////////////////////////////
// FRefractMobileQuality

int32 FRefractMobileQuality::GetDefaultFrameRate()
{
	return CVarDeviceProfileDrivenMobileDefaultFrameRate.GetValueOnGameThread();
}

int32 FRefractMobileQuality::GetMaxFrameRate()
{
	return CVarDeviceProfileDrivenMobileMaxFrameRate.GetValueOnGameThread();
}

bool FRefractMobileQuality::IsSupportedFramePace(const int32 TestFPS)
{
	const bool bIsDefault       = TestFPS == GetDefaultFrameRate();
	const bool bDoesNotExceedMax = TestFPS <= GetMaxFrameRate();
	const bool bIsSupportedPace = FPlatformRHIFramePacer::SupportsFramePace(TestFPS) || GIsEditor;

	return bIsDefault || (bDoesNotExceedMax && bIsSupportedPace);
}

int32 FRefractMobileQuality::GetApplicableOverallQualityLimit(const int32 FrameRate)
{
	return OverallQualityLimits.Query(FrameRate);
}

float FRefractMobileQuality::GetApplicableResolutionQualityLimit(const int32 FrameRate)
{
	return ResolutionQualityLimits.Query(FrameRate);
}

float FRefractMobileQuality::GetApplicableResolutionQualityRecommendation(const int32 FrameRate)
{
	return ResolutionQualityRecommendations.Query(FrameRate);
}

int32 FRefractMobileQuality::ConstrainFrameRateToBeCompatibleWithOverallQuality(const int32 FrameRate, const int32 OverallQuality)
{
	const URefractPlatformSettings* PlatformSettings = URefractPlatformSettings::Get();
	const TArray<int32>& PossibleRates = PlatformSettings->MobileFrameRateLimits;

	const int32 LimitIndex = PossibleRates.FindLastByPredicate([=](const int32& TestRate)
	{
		const bool bAtOrBelowDesired       = TestRate <= FrameRate;
		const int32 LimitQuality           = GetApplicableOverallQualityLimit(TestRate);
		const bool bQualityWithinLimit     = LimitQuality < 0 || OverallQuality <= LimitQuality;
		const bool bIsSupported            = IsSupportedFramePace(TestRate);
		return bAtOrBelowDesired && bQualityWithinLimit && bIsSupported;
	});

	return PossibleRates.IsValidIndex(LimitIndex) ? PossibleRates[LimitIndex] : GetDefaultFrameRate();
}

int32 FRefractMobileQuality::GetFirstFrameRateWithQualityLimit()
{
	return OverallQualityLimits.GetFirstThreshold();
}

int32 FRefractMobileQuality::GetLowestQualityWithFrameRateLimit()
{
	return OverallQualityLimits.GetLowestValue(-1);
}
