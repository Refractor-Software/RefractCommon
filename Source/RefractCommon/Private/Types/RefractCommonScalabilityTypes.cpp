// Copyright (C) William Pimentel-Tonche. All rights reserved.

#include "Types/RefractCommonScalabilityTypes.h"

#include "DeviceProfiles/DeviceProfileManager.h"

static_assert(sizeof(Scalability::FQualityLevels) == 88, "FScalabilitySnapshot may need to be updated to account for new FQualityLevels members.");

FScalabilitySnapshot::FScalabilitySnapshot()
{
	Reset();
}

int32 FScalabilitySnapshot::GetHighestLevelOfAnyScalabilityChannel() const
{
	int32 Max = Qualities.ViewDistanceQuality;
	Max = FMath::Max(Max, Qualities.AntiAliasingQuality);
	Max = FMath::Max(Max, Qualities.ShadowQuality);
	Max = FMath::Max(Max, Qualities.GlobalIlluminationQuality);
	Max = FMath::Max(Max, Qualities.ReflectionQuality);
	Max = FMath::Max(Max, Qualities.PostProcessQuality);
	Max = FMath::Max(Max, Qualities.TextureQuality);
	Max = FMath::Max(Max, Qualities.EffectsQuality);
	Max = FMath::Max(Max, Qualities.FoliageQuality);
	Max = FMath::Max(Max, Qualities.ShadingQuality);

	return Max >= 0 ? Max : -1;
}

void FScalabilitySnapshot::FillFromDeviceProfile(const FString& Suffix)
{
	// Reset before filling so we correctly mark non-overridden channels.
	// Safe to call repeatedly (e.g. when device profile changes during testing).
	Reset();
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.ResolutionQuality%s"),         *Suffix), Qualities.ResolutionQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.ViewDistanceQuality%s"),       *Suffix), Qualities.ViewDistanceQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.AntiAliasingQuality%s"),       *Suffix), Qualities.AntiAliasingQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.ShadowQuality%s"),             *Suffix), Qualities.ShadowQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.GlobalIlluminationQuality%s"), *Suffix), Qualities.GlobalIlluminationQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.ReflectionQuality%s"),         *Suffix), Qualities.ReflectionQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.PostProcessQuality%s"),        *Suffix), Qualities.PostProcessQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.TextureQuality%s"),            *Suffix), Qualities.TextureQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.EffectsQuality%s"),            *Suffix), Qualities.EffectsQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.FoliageQuality%s"),            *Suffix), Qualities.FoliageQuality);
	bHasOverrides |= UDeviceProfileManager::GetScalabilityCVar(FString::Printf(TEXT("sg.ShadingQuality%s"),            *Suffix), Qualities.ShadingQuality);
}

void FScalabilitySnapshot::ApplyTo(Scalability::FQualityLevels& InOutLevels) const
{
	// Overrides any valid (non-negative) channel values from this snapshot
#define REFRACT_APPLY_QUALITY_CHANNEL(Channel) \
	InOutLevels.Channel = (Qualities.Channel >= 0) ? Qualities.Channel : InOutLevels.Channel

	REFRACT_APPLY_QUALITY_CHANNEL(ResolutionQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(ViewDistanceQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(AntiAliasingQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(ShadowQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(GlobalIlluminationQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(ReflectionQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(PostProcessQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(TextureQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(EffectsQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(FoliageQuality);
	REFRACT_APPLY_QUALITY_CHANNEL(ShadingQuality);

#undef REFRACT_APPLY_QUALITY_CHANNEL
}

void FScalabilitySnapshot::ClampToThis(Scalability::FQualityLevels& InOutLevels) const
{
	// Clamps any valid (non-negative) channel values using this snapshot as the upper bound
#define REFRACT_CLAMP_QUALITY_CHANNEL(Channel) \
	InOutLevels.Channel = (Qualities.Channel >= 0) ? FMath::Min(Qualities.Channel, InOutLevels.Channel) : InOutLevels.Channel

	REFRACT_CLAMP_QUALITY_CHANNEL(ResolutionQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(ViewDistanceQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(AntiAliasingQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(ShadowQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(GlobalIlluminationQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(ReflectionQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(PostProcessQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(TextureQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(EffectsQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(FoliageQuality);
	REFRACT_CLAMP_QUALITY_CHANNEL(ShadingQuality);

#undef REFRACT_CLAMP_QUALITY_CHANNEL
}

void FScalabilitySnapshot::Reset()
{
	Qualities.ResolutionQuality      = -1.0f;
	Qualities.ViewDistanceQuality    = -1;
	Qualities.AntiAliasingQuality    = -1;
	Qualities.ShadowQuality          = -1;
	Qualities.GlobalIlluminationQuality = -1;
	Qualities.ReflectionQuality      = -1;
	Qualities.PostProcessQuality     = -1;
	Qualities.TextureQuality         = -1;
	Qualities.EffectsQuality         = -1;
	Qualities.FoliageQuality         = -1;
	Qualities.ShadingQuality         = -1;
}
