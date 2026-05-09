// Copyright (C) William Pimentel-Tonche. All rights reserved.

#include "GameFramework/RefractCommonLocalUserSettings.h"

#include "AudioModulationStatics.h"
#include "CommonInputSubsystem.h"
#include "CommonUISettings.h"
#include "ICommonUIModule.h"
#include "NativeGameplayTags.h"
#include "RefractDefinitions.h"
#include "SoundControlBus.h"
#include "SoundControlBusMix.h"
#include "Detail/RefractMobileQualityHelpers.h"
#include "DeviceProfiles/DeviceProfile.h"
#include "DeviceProfiles/DeviceProfileManager.h"
#include "HAL/PlatformFramePacer.h"
#include "Settings/RefractCommonAudioSettings.h"
#include "Settings/RefractPlatformEmulationSettings.h"
#include "Settings/RefractPlatformSettings.h"
#include "Widgets/Layout/SSafeZone.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_BinauralSettingControlledByOS, "Platform.Trait.BinauralSettingControlledByOS");

//////////////////////////////////////////////////////////////////////

#if WITH_EDITOR
static TAutoConsoleVariable<bool> CVarApplyFrameRateSettingsInPIE(TEXT("Refract.Settings.ApplyFrameRateSettingsInPIE"),
	false,
	TEXT("Should we apply frame rate settings in PIE?"),
	ECVF_Default);

static TAutoConsoleVariable<bool> CVarApplyFrontEndPerformanceOptionsInPIE(TEXT("Refract.Settings.ApplyFrontEndPerformanceOptionsInPIE"),
	false,
	TEXT("Do we apply front-end specific performance options in PIE?"),
	ECVF_Default);

static TAutoConsoleVariable<bool> CVarApplyDeviceProfilesInPIE(TEXT("Refract.Settings.ApplyDeviceProfilesInPIE"),
	false,
	TEXT("Should we apply experience/platform emulated device profiles in PIE?"),
	ECVF_Default);
#endif

//////////////////////////////////////////////////////////////////////
// Console frame pacing

static TAutoConsoleVariable<int32> CVarDeviceProfileDrivenTargetFps(
	TEXT("Refract.DeviceProfile.Console.TargetFPS"),
	-1,
	TEXT("Target FPS when being driven by device profile"),
	ECVF_Default | ECVF_Preview);

static TAutoConsoleVariable<int32> CVarDeviceProfileDrivenFrameSyncType(
	TEXT("Refract.DeviceProfile.Console.FrameSyncType"),
	-1,
	TEXT("Sync type when being driven by device profile. Corresponds to r.GTSyncType"),
	ECVF_Default | ECVF_Preview);

//////////////////////////////////////////////////////////////////////

// Combines two frame rate limits, always preferring the more restrictive non-zero value.
static float CombineFrameRateLimits(const float Limit1, const float Limit2)
{
	if (Limit1 <= 0.0f)
	{
		return Limit2;
	}
	if (Limit2 <= 0.0f)
	{
		return Limit1;
	}
	return FMath::Min(Limit1, Limit2);
}

//////////////////////////////////////////////////////////////////////

bool URefractCommonLocalUserSettings::HasPlatformTrait(const FGameplayTag Tag)
{
	return ICommonUIModule::GetSettings().GetPlatformTraits().HasTag(Tag);
}

//////////////////////////////////////////////////////////////////////

URefractCommonLocalUserSettings::URefractCommonLocalUserSettings()
{
	if (!HasAnyFlags(RF_ClassDefaultObject) && FSlateApplication::IsInitialized())
	{
		OnApplicationActivationStateChangedHandle = FSlateApplication::Get().OnApplicationActivationStateChanged().AddUObject(this,
			&ThisClass::OnAppActivationStateChanged);
	}

	bEnableScalabilitySettings = GetPlatformSettings()->bSupportsGranularVideoQualitySettings;

	// ReSharper disable once CppVirtualFunctionCallInsideCtor
	// NOTE(will) We don't intend for this to be subclassed, nor for this to be relied upon by subclasses.
	SetToDefaults();
}

URefractCommonLocalUserSettings* URefractCommonLocalUserSettings::Get()
{
	return GEngine
		? CastChecked<URefractCommonLocalUserSettings>(GEngine->GetGameUserSettings())
		: nullptr;
}

void URefractCommonLocalUserSettings::BeginDestroy()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().OnApplicationActivationStateChanged().Remove(OnApplicationActivationStateChangedHandle);
	}
	Super::BeginDestroy();
}

void URefractCommonLocalUserSettings::SetToDefaults()
{
	Super::SetToDefaults();

	bUseHeadphoneMode = false;
	bUseHDRAudioMode = false;
	bSoundControlBusMixLoaded = false;

	const URefractPlatformSettings* PlatformSettings = GetPlatformSettings();
	UserChosenDeviceProfileSuffix = PlatformSettings->DefaultDeviceProfileSuffix;
	DesiredUserChosenDeviceProfileSuffix = UserChosenDeviceProfileSuffix;

	FrameRateLimit_InMenu = 120.f;
	FrameRateLimit_WhenBackground = 30.f;
	FrameRateLimit_OnBattery = 60.f;

	MobileFrameRateLimit = GetDefaultMobileFrameRate();
	DesiredMobileFrameRateLimit = MobileFrameRateLimit;
}

void URefractCommonLocalUserSettings::LoadSettings(const bool bForceReload)
{
	Super::LoadSettings(bForceReload);

	/* NOTE(will) Console uses rhi.SyncInterval to limit frame rate */
	if (GetFramePacingMode() == EFramePacingMode::Console)
	{
		FrameRateLimit = 0.f;
	}

	bDesiredHeadphoneMode = bUseHeadphoneMode;
	SetHeadphoneModeEnabled(bUseHeadphoneMode);

	DesiredUserChosenDeviceProfileSuffix = UserChosenDeviceProfileSuffix;

	DeviceDefaultScalabilitySettings.FillFromDeviceProfile();

	DesiredMobileFrameRateLimit = MobileFrameRateLimit;
	ClampMobileQuality();
}

void URefractCommonLocalUserSettings::ConfirmVideoMode()
{
	Super::ConfirmVideoMode();
	SetMobileFPSMode(DesiredMobileFrameRateLimit);
}

float URefractCommonLocalUserSettings::GetEffectiveFrameRateLimit()
{
	const URefractPlatformSettings* PlatformSettings = GetPlatformSettings();

#if WITH_EDITOR
	if (GIsEditor && !CVarApplyFrameRateSettingsInPIE.GetValueOnGameThread())
	{
		return Super::GetEffectiveFrameRateLimit();
	}
#endif

	if (PlatformSettings->FramePacingMode == EFramePacingMode::Console)
	{
		return 0.f;
	}

	double EffectiveLimit = Super::GetEffectiveFrameRateLimit();

	if (ShouldUseFrontendPerformanceSettings())
	{
		EffectiveLimit = CombineFrameRateLimits(EffectiveLimit, FrameRateLimit_InMenu);
	}

	if (PlatformSettings->FramePacingMode == EFramePacingMode::Desktop)
	{
		if (FPlatformMisc::IsRunningOnBattery())
		{
			EffectiveLimit = CombineFrameRateLimits(EffectiveLimit, FrameRateLimit_OnBattery);
		}
		if (FSlateApplication::IsInitialized() && !FSlateApplication::Get().IsActive())
		{
			EffectiveLimit = CombineFrameRateLimits(EffectiveLimit, FrameRateLimit_WhenBackground);
		}
	}

	return EffectiveLimit;
}

void URefractCommonLocalUserSettings::ResetToCurrentSettings()
{
	Super::ResetToCurrentSettings();
	bDesiredHeadphoneMode = bUseHeadphoneMode;
	UserChosenDeviceProfileSuffix = DesiredUserChosenDeviceProfileSuffix;
	MobileFrameRateLimit = DesiredMobileFrameRateLimit;
}

void URefractCommonLocalUserSettings::ApplyNonResolutionSettings()
{
	Super::ApplyNonResolutionSettings();

	// Ensure Control Bus Mix references are loaded before applying volumes.
	// May be false if applying without having gone through the settings UI setters.
	if (!bSoundControlBusMixLoaded)
	{
		LoadUserControlBusMix();
	}

	// Apply cached volume settings to each Control Bus
	{
		if (const TObjectPtr<USoundControlBus>* Bus = ControlBusMap.Find(TEXT("Overall")))
		{
			SetVolumeForControlBus(*Bus, OverallVolume);
		}
		if (const TObjectPtr<USoundControlBus>* Bus = ControlBusMap.Find(TEXT("Music")))
		{
			SetVolumeForControlBus(*Bus, MusicVolume);
		}
		if (const TObjectPtr<USoundControlBus>* Bus = ControlBusMap.Find(TEXT("SoundFX")))
		{
			SetVolumeForControlBus(*Bus, SoundFXVolume);
		}
		if (const TObjectPtr<USoundControlBus>* Bus = ControlBusMap.Find(TEXT("Dialogue")))
		{
			SetVolumeForControlBus(*Bus, DialogueVolume);
		}
		if (const TObjectPtr<USoundControlBus>* Bus = ControlBusMap.Find(TEXT("VoiceChat")))
		{
			SetVolumeForControlBus(*Bus, VoiceChatVolume);
		}
	}

	if (UCommonInputSubsystem* InputSubsystem = UCommonInputSubsystem::Get(GetTypedOuter<ULocalPlayer>()))
	{
		InputSubsystem->SetGamepadInputType(ControllerPlatform);
	}

	if (bUseHeadphoneMode != bDesiredHeadphoneMode)
	{
		SetHeadphoneModeEnabled(bDesiredHeadphoneMode);
	}

	if (DesiredUserChosenDeviceProfileSuffix != UserChosenDeviceProfileSuffix)
	{
		UserChosenDeviceProfileSuffix = DesiredUserChosenDeviceProfileSuffix;
	}

	if (FApp::CanEverRender())
	{
		ApplyDisplayGamma();
		ApplySafeZoneScale();
		UpdateGameModeDeviceProfileAndFps();
	}
}

int32 URefractCommonLocalUserSettings::GetOverallScalabilityLevel() const
{
	int32 Result = Super::GetOverallScalabilityLevel();

	if (GetFramePacingMode() == EFramePacingMode::Mobile)
	{
		Result = GetHighestLevelOfAnyScalabilityChannel();
	}

	return Result;
}

void URefractCommonLocalUserSettings::SetOverallScalabilityLevel(int32 Value)
{
	TGuardValue Guard(bSettingOverallQualityGuard, true);

	Value = FMath::Clamp(Value, 0, 3);

	const float CurrentMobileResQuality = ScalabilityQuality.ResolutionQuality;

	Super::SetOverallScalabilityLevel(Value);

	if (GetFramePacingMode() == EFramePacingMode::Mobile)
	{
		/* NOTE(epic) Mobile decouples resolution quality from overall quality */
		ScalabilityQuality.ResolutionQuality = CurrentMobileResQuality;

		const int32 ConstrainedFrameRateLimit = FRefractMobileQuality::ConstrainFrameRateToBeCompatibleWithOverallQuality(DesiredMobileFrameRateLimit,
			Value);
		if (ConstrainedFrameRateLimit != DesiredMobileFrameRateLimit)
		{
			SetDesiredMobileFrameRateLimit(ConstrainedFrameRateLimit);
		}
	}
}

void URefractCommonLocalUserSettings::SetDisplayGamma(const double InGamma)
{
	DisplayGamma = InGamma;
	ApplyDisplayGamma();
}

double URefractCommonLocalUserSettings::GetDisplayGamma() const
{
	return DisplayGamma;
}

void URefractCommonLocalUserSettings::SetSafeZone(const float Value)
{
	SafeZoneScale = Value;
	ApplySafeZoneScale();
}

float URefractCommonLocalUserSettings::GetSafeZone() const
{
	return SafeZoneScale >= 0.f
		? SafeZoneScale
		: 0.f;
}

bool URefractCommonLocalUserSettings::IsSafeZoneSet() const
{
	return SafeZoneScale != -1.f;
}

void URefractCommonLocalUserSettings::ApplySafeZoneScale() const
{
	SSafeZone::SetGlobalSafeZoneScale(GetSafeZone());
}

void URefractCommonLocalUserSettings::SetFrameRateLimit_OnBattery(const double NewLimitFPS)
{
	FrameRateLimit_OnBattery = NewLimitFPS;
	UpdateEffectiveFrameRateLimit();
}

double URefractCommonLocalUserSettings::GetFrameRateLimit_OnBattery() const
{
	return FrameRateLimit_OnBattery;
}

void URefractCommonLocalUserSettings::SetFrameRateLimit_InMenu(const double NewLimitFPS)
{
	FrameRateLimit_InMenu = NewLimitFPS;
	UpdateEffectiveFrameRateLimit();
}

double URefractCommonLocalUserSettings::GetFrameRateLimit_InMenu() const
{
	return FrameRateLimit_InMenu;
}

void URefractCommonLocalUserSettings::SetFrameRateLimit_WhenBackground(const double NewLimitFPS)
{
	FrameRateLimit_WhenBackground = NewLimitFPS;
	UpdateEffectiveFrameRateLimit();
}

double URefractCommonLocalUserSettings::GetFrameRateLimit_WhenBackground() const
{
	return FrameRateLimit_WhenBackground;
}

void URefractCommonLocalUserSettings::SetFrameRateLimit_Always(const double NewLimitFPS)
{
	SetFrameRateLimit(NewLimitFPS);
	UpdateEffectiveFrameRateLimit();
}

double URefractCommonLocalUserSettings::GetFrameRateLimit_Always() const
{
	return GetFrameRateLimit();
}

void URefractCommonLocalUserSettings::SetShouldUseFrontendPerformanceSettings(const bool bInFrontEnd)
{
	bInFrontEndForPerformancePurposes = bInFrontEnd;
}

bool URefractCommonLocalUserSettings::ShouldUseFrontendPerformanceSettings() const
{
#if WITH_EDITOR
	if (GIsEditor && !CVarApplyFrontEndPerformanceOptionsInPIE.GetValueOnGameThread())
	{
		return false;
	}
#endif
	return bInFrontEndForPerformancePurposes;
}

void URefractCommonLocalUserSettings::SetDesiredMobileFrameRateLimit(const int32 NewLimitFPS)
{
	const int32 OldLimitFPS = DesiredMobileFrameRateLimit;
	RemapMobileResolutionQuality(OldLimitFPS, NewLimitFPS);
	DesiredMobileFrameRateLimit = NewLimitFPS;
	ClampMobileFPSQualityLevels(false);
}

int32 URefractCommonLocalUserSettings::GetDesiredMobileFrameRateLimit() const
{
	return DesiredMobileFrameRateLimit;
}

int32 URefractCommonLocalUserSettings::GetDefaultMobileFrameRate()
{
	return FRefractMobileQuality::GetDefaultFrameRate();
}

int32 URefractCommonLocalUserSettings::GetMaxMobileFrameRate()
{
	return FRefractMobileQuality::GetMaxFrameRate();
}

bool URefractCommonLocalUserSettings::IsSupportedMobileFramePace(const int32 TestFPS)
{
	return FRefractMobileQuality::IsSupportedFramePace(TestFPS);
}

int32 URefractCommonLocalUserSettings::GetFirstFrameRateWithQualityLimit() const
{
	return FRefractMobileQuality::GetFirstFrameRateWithQualityLimit();
}

int32 URefractCommonLocalUserSettings::GetLowestQualityWithFrameRateLimit() const
{
	return FRefractMobileQuality::GetLowestQualityWithFrameRateLimit();
}

void URefractCommonLocalUserSettings::ResetToMobileDeviceDefaults()
{
	DesiredMobileFrameRateLimit = GetDefaultMobileFrameRate();
	MobileFrameRateLimit = DesiredMobileFrameRateLimit;

	Scalability::FQualityLevels DefaultLevels = Scalability::GetQualityLevels();
	DeviceDefaultScalabilitySettings.ApplyTo(DefaultLevels);
	ScalabilityQuality = DefaultLevels;

	UpdateGameModeDeviceProfileAndFps();
}

int32 URefractCommonLocalUserSettings::GetMaxSupportedOverallQualityLevel() const
{
	if (GetFramePacingMode() == EFramePacingMode::Mobile && DeviceDefaultScalabilitySettings.bHasOverrides)
	{
		return DeviceDefaultScalabilitySettings.GetHighestLevelOfAnyScalabilityChannel();
	}
	return 3;
}

void URefractCommonLocalUserSettings::ApplyScalabilitySettings() const
{
	Scalability::SetQualityLevels(ScalabilityQuality);
}

bool URefractCommonLocalUserSettings::CanRunAutoBenchmark() const
{
	return GetPlatformSettings()->bSupportsAutomaticVideoQualityBenchmark;
}

bool URefractCommonLocalUserSettings::ShouldRunAutoBenchmarkAtStartup() const
{
	if (!CanRunAutoBenchmark())
	{
		return false;
	}

	if (LastCPUBenchmarkResult != -1)
	{
		// Already run and loaded
		return false;
	}

	return true;
}

void URefractCommonLocalUserSettings::RunAutoBenchmark(const bool bSaveImmediately)
{
	RunHardwareBenchmark();

	// Always apply, optionally save
	ApplyScalabilitySettings();
	//ApplyLatencyTrackingStatSetting();

	if (bSaveImmediately)
	{
		SaveSettings();
	}
}

void URefractCommonLocalUserSettings::SetDesiredDeviceProfileQualitySuffix(const FString& InDesiredSuffix)
{
	DesiredUserChosenDeviceProfileSuffix = InDesiredSuffix;
}

FString URefractCommonLocalUserSettings::GetDesiredDeviceProfileQualitySuffix() const
{
	return DesiredUserChosenDeviceProfileSuffix;
}

FRefractCommonAudioDeviceChanged& URefractCommonLocalUserSettings::OnAudioOutputDeviceChanged()
{
	return AudioOutputDeviceChangedDelegate;
}

FRefractCommonAudioHDRModeChanged& URefractCommonLocalUserSettings::OnHDRAudioModeChanged()
{
	return HDRAudioModeChangedDelegate;
}

bool URefractCommonLocalUserSettings::IsHeadphoneModeEnabled() const
{
	return bUseHeadphoneMode;
}

void URefractCommonLocalUserSettings::SetHeadphoneModeEnabled(const bool bEnabled)
{
	if (CanModifyHeadphoneModeEnabled())
	{
		static IConsoleVariable* BinauralSpatializationDisabledCVar = IConsoleManager::Get().FindConsoleVariable(
			TEXT("au.DisableBinauralSpatialization"));
		if (BinauralSpatializationDisabledCVar)
		{
			BinauralSpatializationDisabledCVar->Set(!bEnabled, ECVF_SetByGameSetting);

			if (bUseHeadphoneMode != bEnabled)
			{
				bUseHeadphoneMode = bEnabled;
				SaveSettings();
			}
		}
	}
}

bool URefractCommonLocalUserSettings::CanModifyHeadphoneModeEnabled() const
{
	static IConsoleVariable* BinauralSpatializationDisabledCVar = IConsoleManager::Get().
		FindConsoleVariable(TEXT("au.DisableBinauralSpatialization"));
	const bool bHRTFOptionAvailable = BinauralSpatializationDisabledCVar && (BinauralSpatializationDisabledCVar->GetFlags() & ECVF_SetByMask) <=
		ECVF_SetByGameSetting;
	const bool bBinauralSettingControlledByOS = HasPlatformTrait(TAG_Platform_Trait_BinauralSettingControlledByOS);
	return bHRTFOptionAvailable && !bBinauralSettingControlledByOS;
}

bool URefractCommonLocalUserSettings::IsHDRAudioModeEnabled() const
{
	return bUseHDRAudioMode;
}

void URefractCommonLocalUserSettings::SetHDRAudioModeEnabled(const bool bEnabled)
{
	bUseHDRAudioMode = bEnabled;
	HDRAudioModeChangedDelegate.Broadcast(bEnabled);
}

float URefractCommonLocalUserSettings::GetOverallVolume() const
{
	return OverallVolume;
}

void URefractCommonLocalUserSettings::SetOverallVolume(const float InVolume)
{
	SetVolumeForChannel(OverallVolume, TEXT("Overall"), InVolume);
}

float URefractCommonLocalUserSettings::GetMusicVolume() const
{
	return MusicVolume;
}

void URefractCommonLocalUserSettings::SetMusicVolume(const float InVolume)
{
	SetVolumeForChannel(MusicVolume, TEXT("Music"), InVolume);
}

float URefractCommonLocalUserSettings::GetSoundFXVolume() const
{
	return SoundFXVolume;
}

void URefractCommonLocalUserSettings::SetSoundFXVolume(const float InVolume)
{
	SetVolumeForChannel(SoundFXVolume, TEXT("SoundFX"), InVolume);
}

float URefractCommonLocalUserSettings::GetDialogueVolume() const
{
	return DialogueVolume;
}

void URefractCommonLocalUserSettings::SetDialogueVolume(const float InVolume)
{
	SetVolumeForChannel(DialogueVolume, TEXT("Dialogue"), InVolume);
}

float URefractCommonLocalUserSettings::GetVoiceChatVolume() const
{
	return VoiceChatVolume;
}

void URefractCommonLocalUserSettings::SetVoiceChatVolume(const float InVolume)
{
	SetVolumeForChannel(VoiceChatVolume, TEXT("VoiceChat"), InVolume);
}

FString URefractCommonLocalUserSettings::GetAudioOutputDeviceId() const
{
	return AudioOutputDeviceId;
}

void URefractCommonLocalUserSettings::SetAudioOutputDeviceId(const FString& InAudioOutputDeviceId)
{
	AudioOutputDeviceId = InAudioOutputDeviceId;
	OnAudioOutputDeviceChanged().Broadcast(InAudioOutputDeviceId);
}

void URefractCommonLocalUserSettings::SetControllerPlatform(const FName InControllerPlatform)
{
	if (ControllerPlatform != InControllerPlatform)
	{
		ControllerPlatform = InControllerPlatform;

		// Apply the change to the common input subsystem so that we refresh any input icons we're using.
		if (UCommonInputSubsystem* InputSubsystem = UCommonInputSubsystem::Get(GetTypedOuter<ULocalPlayer>()))
		{
			InputSubsystem->SetGamepadInputType(ControllerPlatform);
		}
	}
}

FName URefractCommonLocalUserSettings::GetControllerPlatform() const
{
	return ControllerPlatform;
}

void URefractCommonLocalUserSettings::OnExperienceLoaded()
{
	ReapplyThingsDueToPossibleDeviceProfileChange();
}

void URefractCommonLocalUserSettings::OnHotfixDeviceProfileApplied()
{
	ReapplyThingsDueToPossibleDeviceProfileChange();
}

void URefractCommonLocalUserSettings::UpdateEffectiveFrameRateLimit()
{
	if (!IsRunningDedicatedServer())
	{
		SetFrameRateLimitCVar(GetEffectiveFrameRateLimit());
	}
}

void URefractCommonLocalUserSettings::UpdateGameModeDeviceProfileAndFps()
{
#if WITH_EDITOR
	if (GIsEditor && !CVarApplyDeviceProfilesInPIE.GetValueOnGameThread())
	{
		return;
	}
#endif

	UDeviceProfileManager& Manager = UDeviceProfileManager::Get();

	FString ActualProfileToApply;
	ResolveEffectiveDeviceProfileName(Manager, ActualProfileToApply);

	REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "UpdateGameModeDeviceProfileAndFps resolved profile: '%s'", *ActualProfileToApply);

	if (ActualProfileToApply != CurrentAppliedDeviceProfileOverrideSuffix)
	{
		if (Manager.GetActiveDeviceProfileName() != ActualProfileToApply)
		{
			ApplyDeviceProfileOverride(Manager, ActualProfileToApply);
		}
		CurrentAppliedDeviceProfileOverrideSuffix = ActualProfileToApply;
	}

	switch (GetPlatformSettings()->FramePacingMode)
	{
	case EFramePacingMode::Mobile:
		UpdateMobileFramePacing();
		break;
	case EFramePacingMode::Console:
		UpdateConsoleFramePacing();
		break;
	case EFramePacingMode::Desktop:
		UpdateDesktopFramePacing();
		break;
	}
}

void URefractCommonLocalUserSettings::ResolveEffectiveDeviceProfileName(UDeviceProfileManager& Manager, FString& OutProfileName) const
{
	const URefractPlatformSettings* PlatformSettings = GetPlatformSettings();
	const TArray<FQualityDeviceProfileVariant>& UserFacingVariants = PlatformSettings->UserFacingDeviceProfileOptions;

	//@TODO: Allow specific experiences to specify a suffix to attempt to use as well.
	const FString ExperienceSuffix;

	const int32 PlatformMaxRefreshRate = FPlatformMisc::GetMaxRefreshRate();

	// Walk down the variants list from the user's chosen suffix until we find one
	// whose minimum hardware refresh rate the platform can satisfy.
	int32 SuffixIndex = UserFacingVariants.IndexOfByPredicate([&](const FQualityDeviceProfileVariant& Data)
		{
			return Data.DeviceProfileSuffix == UserChosenDeviceProfileSuffix;
		});

	while (UserFacingVariants.IsValidIndex(SuffixIndex))
	{
		if (PlatformMaxRefreshRate >= UserFacingVariants[SuffixIndex].MinHardwareRefreshRate)
		{
			break;
		}
		--SuffixIndex;
	}

	const FString EffectiveUserSuffix = UserFacingVariants.IsValidIndex(SuffixIndex)
		? UserFacingVariants[SuffixIndex].DeviceProfileSuffix
		: PlatformSettings->DefaultDeviceProfileSuffix;

	const bool bHadUserSuffix = !EffectiveUserSuffix.IsEmpty();
	const bool bHadExperienceSuffix = !ExperienceSuffix.IsEmpty();

	FString BasePlatformName = UDeviceProfileManager::GetPlatformDeviceProfileName();
	FName PlatformName = FName(); // Default unless in editor

#if WITH_EDITOR
	if (GIsEditor)
	{
		const URefractPlatformEmulationSettings* Settings = GetDefault<URefractPlatformEmulationSettings>();
		const FName PretendBaseDeviceProfile = Settings->GetPretendBaseDeviceProfile();
		if (PretendBaseDeviceProfile != NAME_None)
		{
			BasePlatformName = PretendBaseDeviceProfile.ToString();
		}
		PlatformName = Settings->GetPretendPlatformName();
	}
#endif

	// Build candidate names in priority order: most specific (experience+user) to least (base only).
	TArray<FString> Candidates;
	if (bHadExperienceSuffix && bHadUserSuffix)
	{
		Candidates.Add(BasePlatformName + TEXT("_") + ExperienceSuffix + TEXT("_") + EffectiveUserSuffix);
	}
	if (bHadUserSuffix)
	{
		Candidates.Add(BasePlatformName + TEXT("_") + EffectiveUserSuffix);
	}
	if (bHadExperienceSuffix)
	{
		Candidates.Add(BasePlatformName + TEXT("_") + ExperienceSuffix);
	}
#if WITH_EDITOR
	if (GIsEditor)
	{
		Candidates.Add(BasePlatformName);
	}
#endif

	OutProfileName.Empty();

	for (const FString& Candidate : Candidates)
	{
		if (Manager.HasLoadableProfileName(Candidate, PlatformName))
		{
			OutProfileName = Candidate;

			// Ensure the profile object exists, creating it lazily if needed.
			const UDeviceProfile* Profile = Manager.FindProfile(Candidate, /*bCreateOnFail=*/false);
			if (!Profile)
			{
				Profile = Manager.CreateProfile(Candidate, TEXT(""), Candidate, *PlatformName.ToString());
			}
			REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Resolved device profile candidate: %s", *Profile->GetName());
			break;
		}
	}

	REFRACT_LOG_UCLASS_ARGS(LogRefract, Log,
		"ResolveEffectiveDeviceProfileName MaxRefreshRate=%d, ExperienceSuffix='%s', UserPicked='%s'->'%s', PlatformBase='%s', Resolved='%s'",
		PlatformMaxRefreshRate, *ExperienceSuffix, *UserChosenDeviceProfileSuffix, *EffectiveUserSuffix, *BasePlatformName, *OutProfileName);
}

void URefractCommonLocalUserSettings::ApplyDeviceProfileOverride(UDeviceProfileManager& Manager, const FString& ProfileName)
{
	// Restore whichever profile is currently active before applying the new one.
#if WITH_EDITOR
	if (GIsEditor)
	{
#if ALLOW_OTHER_PLATFORM_CONFIG
		Manager.RestorePreviewDeviceProfile();
#endif
	}
	else
#endif
	{
		Manager.RestoreDefaultDeviceProfile();
	}

	// Re-check after restore — if the active profile is already correct, nothing more to do.
	if (Manager.GetActiveDeviceProfileName() == ProfileName)
	{
		return;
	}

	UDeviceProfile* NewProfile = Manager.FindProfile(ProfileName);
	ensureMsgf(NewProfile, TEXT("DeviceProfile %s not found."), *ProfileName);
	if (!NewProfile)
	{
		return;
	}

#if WITH_EDITOR
	if (GIsEditor)
	{
#if ALLOW_OTHER_PLATFORM_CONFIG
		REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Overriding *preview* device profile to %s", *ProfileName);
		Manager.SetPreviewDeviceProfile(NewProfile);
		DeviceDefaultScalabilitySettings.FillFromDeviceProfile();
#endif
	}
	else
#endif
	{
		REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Overriding device profile to %s", *ProfileName);
		Manager.SetOverrideDeviceProfile(NewProfile);

		if (!bEnableScalabilitySettings)
		{
			ScalabilityQuality = Scalability::GetQualityLevels();
		}
	}
}

void URefractCommonLocalUserSettings::UpdateConsoleFramePacing() const
{
	const int32 FrameSyncType = CVarDeviceProfileDrivenFrameSyncType.GetValueOnGameThread();
	if (FrameSyncType != -1)
	{
		REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Setting frame sync mode to %d.", FrameSyncType);
		SetSyncTypeCVar(FrameSyncType);
	}

	const int32 TargetFPS = CVarDeviceProfileDrivenTargetFps.GetValueOnGameThread();
	if (TargetFPS != -1)
	{
		REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Setting frame pace to %d Hz.", TargetFPS);
		FPlatformRHIFramePacer::SetFramePace(TargetFPS);

#if CSV_PROFILER
		CSV_METADATA(TEXT("TargetFramerate"), *FString::Printf(TEXT("%d"), TargetFPS));
#endif
	}
}

void URefractCommonLocalUserSettings::UpdateDesktopFramePacing()
{
	// Desktop frame rate limiting is handled by the parent class via UpdateEffectiveFrameRateLimit().
	// This function handles only second-order effects of the desktop frame pacing preference.
	const float TargetFPS = GetEffectiveFrameRateLimit();
	const float ClampedFPS = TargetFPS <= 0.0f
		? 60.0f
		: FMath::Clamp(TargetFPS, 30.0f, 60.0f);
	UpdateDynamicResFrameTime(ClampedFPS);
}

void URefractCommonLocalUserSettings::UpdateMobileFramePacing()
{
	//@TODO: Handle different limits for in-front-end or low-battery mode on mobile

	const URefractPlatformSettings* PlatformSettings = GetPlatformSettings();
	const TArray<int32>& PossibleRates = PlatformSettings->MobileFrameRateLimits;
	const int32 LimitIndex = PossibleRates.FindLastByPredicate([this](const int32& TestRate)
		{
			return TestRate <= MobileFrameRateLimit && IsSupportedMobileFramePace(TestRate);
		});
	const int32 TargetFPS = PossibleRates.IsValidIndex(LimitIndex)
		? PossibleRates[LimitIndex]
		: GetDefaultMobileFrameRate();

	REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Setting frame pace to %d Hz.", TargetFPS);
	FPlatformRHIFramePacer::SetFramePace(TargetFPS);

	ClampMobileQuality();
	UpdateDynamicResFrameTime(static_cast<float>(TargetFPS));
}

void URefractCommonLocalUserSettings::UpdateDynamicResFrameTime(const float TargetFPS) const
{
	static IConsoleVariable* CVarDyResFrameTimeBudget = IConsoleManager::Get().FindConsoleVariable(TEXT("r.DynamicRes.FrameTimeBudget"));
	if (CVarDyResFrameTimeBudget)
	{
		if (ensure(TargetFPS > 0.0f))
		{
			CVarDyResFrameTimeBudget->Set(1000.0f / TargetFPS, ECVF_SetByGameSetting);
		}
	}
}

void URefractCommonLocalUserSettings::ApplyDisplayGamma() const
{
	if (GEngine)
	{
		GEngine->DisplayGamma = DisplayGamma;
	}
}

void URefractCommonLocalUserSettings::LoadUserControlBusMix()
{
	if (!GEngine)
	{
		return;
	}

	const UWorld* World = GEngine->GetCurrentPlayWorld();
	if (!World)
	{
		return;
	}

	const URefractCommonAudioSettings* AudioSettings = GetDefault<URefractCommonAudioSettings>();
	if (!AudioSettings)
	{
		return;
	}

	ControlBusMap.Empty();

	const auto TryLoadBus = [this](const TSoftObjectPtr<USoundControlBus>& SoftPtr, const FName& MapKey, const TCHAR* AssetName)
		{
			if (USoundControlBus* Bus = SoftPtr.LoadSynchronous())
			{
				ControlBusMap.Add(MapKey, Bus);
			}
			else
			{
				REFRACT_LOG_UCLASS_ARGS(LogRefract, Warning, "Control Bus reference missing or invalid in Audio Settings: %s", AssetName);
			}
		};

	TryLoadBus(AudioSettings->OverallVolumeControlBus, TEXT("Overall"), TEXT("Overall Control Bus"));
	TryLoadBus(AudioSettings->MusicVolumeControlBus, TEXT("Music"), TEXT("Music Control Bus"));
	TryLoadBus(AudioSettings->SoundFXVolumeControlBus, TEXT("SoundFX"), TEXT("SoundFX Control Bus"));
	TryLoadBus(AudioSettings->DialogueVolumeControlBus, TEXT("Dialogue"), TEXT("Dialogue Control Bus"));
	TryLoadBus(AudioSettings->VoiceChatVolumeControlBus, TEXT("VoiceChat"), TEXT("VoiceChat Control Bus"));

	if (USoundControlBusMix* Mix = AudioSettings->UserSettingsControlBusMix.LoadSynchronous())
	{
		ControlBusMix = Mix;

		TArray<FSoundControlBusMixStage> MixStages;
		MixStages.Reserve(ControlBusMap.Num());
		for (const auto& [ChannelName, Bus] : ControlBusMap)
		{
			// Volume members share the same name pattern as the map keys, but we retrieve
			// them via the public getters to stay decoupled from the field layout.
			// The buses were already validated during TryLoadBus — pointer is safe here.
			const float Volume = [&]
				{
					if (ChannelName == TEXT("Overall")) return GetOverallVolume();
					if (ChannelName == TEXT("Music")) return GetMusicVolume();
					if (ChannelName == TEXT("SoundFX")) return GetSoundFXVolume();
					if (ChannelName == TEXT("Dialogue")) return GetDialogueVolume();
					if (ChannelName == TEXT("VoiceChat")) return GetVoiceChatVolume();
					return 1.0f;
				}();
			MixStages.Add(UAudioModulationStatics::CreateBusMixStage(World, Bus, Volume));
		}

		UAudioModulationStatics::UpdateMix(World, ControlBusMix, MixStages);
		bSoundControlBusMixLoaded = true;
	}
	else
	{
		REFRACT_LOG_UCLASS(LogRefract, Warning, "User Settings Control Bus Mix reference missing or invalid in Audio Settings.");
	}
}

void URefractCommonLocalUserSettings::SetVolumeForControlBus(USoundControlBus* InSoundControlBus, const float InVolume)
{
	if (!bSoundControlBusMixLoaded)
	{
		LoadUserControlBusMix();
	}

	if (!GEngine || !InSoundControlBus || !bSoundControlBusMixLoaded)
	{
		return;
	}

	if (const UWorld* AudioWorld = GEngine->GetCurrentPlayWorld())
	{
		ensureMsgf(ControlBusMix, TEXT("Control Bus Mix failed to load."));

		FSoundControlBusMixStage UpdatedStage;
		UpdatedStage.Bus = InSoundControlBus;
		UpdatedStage.Value.TargetValue = InVolume;
		UpdatedStage.Value.AttackTime = 0.01f;
		UpdatedStage.Value.ReleaseTime = 0.01f;

		UAudioModulationStatics::UpdateMix(AudioWorld, ControlBusMix, TArray{UpdatedStage});
	}
}

void URefractCommonLocalUserSettings::SetVolumeForChannel(float& OutVolume, const FName& ChannelKey, const float InVolume)
{
	/* NOTE(will): OutVolume must be written before LoadUserControlBusMix is called, as the lazy-load
	 * path initializes mix stages by reading the volume fields via the public getters. If the
	 * field isn't updated first, the mix will be initialized with the stale value. */
	OutVolume = InVolume;

	if (!bSoundControlBusMixLoaded)
	{
		LoadUserControlBusMix();
	}

	if (const TObjectPtr<USoundControlBus>* Bus = ControlBusMap.Find(ChannelKey))
	{
		SetVolumeForControlBus(*Bus, InVolume);
	}
}

void URefractCommonLocalUserSettings::SetMobileFPSMode(const int32 NewLimitFPS)
{
	if (GetFramePacingMode() != EFramePacingMode::Mobile)
	{
		return;
	}

	if (MobileFrameRateLimit != NewLimitFPS)
	{
		MobileFrameRateLimit = NewLimitFPS;
		UpdateGameModeDeviceProfileAndFps();
	}

	DesiredMobileFrameRateLimit = MobileFrameRateLimit;
}

void URefractCommonLocalUserSettings::ClampMobileResolutionQuality(const int32 TargetFPS)
{
	const float MaxMobileResQuality = FRefractMobileQuality::GetApplicableResolutionQualityLimit(TargetFPS);
	float CurrentScaleNormalized = 0.0f;
	float CurrentScaleValue = 0.0f;
	float MinScaleValue = 0.0f;
	float MaxScaleValue = 0.0f;
	GetResolutionScaleInformationEx(CurrentScaleNormalized, CurrentScaleValue, MinScaleValue, MaxScaleValue);
	if (CurrentScaleValue > MaxMobileResQuality)
	{
		REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Clamping mobile resolution quality: current=%f max=%f (normalized=%f, min=%f, max=%f)",
			CurrentScaleValue, MaxMobileResQuality, CurrentScaleNormalized, MinScaleValue, MaxScaleValue);
		SetResolutionScaleValueEx(MaxMobileResQuality);
	}
}

void URefractCommonLocalUserSettings::RemapMobileResolutionQuality(const int32 FromFPS, const int32 ToFPS)
{
	// Mobile resolution quality is normalized within [MinQuality, MaxQuality].
	// When FPS mode changes, remap the normalized value into the new range so the slider position is preserved.
	float CurrentScaleNormalized = 0.0f;
	float CurrentScaleValue = 0.0f;
	float MinScaleValue = 0.0f;
	float MaxScaleValue = 0.0f;
	GetResolutionScaleInformationEx(CurrentScaleNormalized, CurrentScaleValue, MinScaleValue, MaxScaleValue);

	const float FromMax = FRefractMobileQuality::GetApplicableResolutionQualityLimit(FromFPS);
	const float ToMax = FRefractMobileQuality::GetApplicableResolutionQualityLimit(ToFPS);
	const float NormalizedInFromRange = (CurrentScaleValue - MinScaleValue) / (FromMax - MinScaleValue);
	const float ToResQuality = FMath::Lerp(MinScaleValue, ToMax, NormalizedInFromRange);

	REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Remapping mobile resolution quality: %f -> %f (FPS %d -> %d)",
		CurrentScaleValue, ToResQuality, FromFPS, ToFPS);

	SetResolutionScaleValueEx(ToResQuality);
}

void URefractCommonLocalUserSettings::ClampMobileFPSQualityLevels(const bool bWriteBack)
{
	if (GetFramePacingMode() != EFramePacingMode::Mobile)
	{
		return;
	}

	const int32 QualityLimit = FRefractMobileQuality::GetApplicableOverallQualityLimit(DesiredMobileFrameRateLimit);
	const int32 CurrentQualityLevel = GetHighestLevelOfAnyScalabilityChannel();

	if (QualityLimit >= 0 && CurrentQualityLevel > QualityLimit)
	{
		SetOverallScalabilityLevel(QualityLimit);

		if (bWriteBack)
		{
			Scalability::SetQualityLevels(ScalabilityQuality);
		}

		REFRACT_LOG_UCLASS_ARGS(LogRefract, Log, "Mobile FPS clamped overall quality (%d -> %d).", CurrentQualityLevel, QualityLimit);
	}
}

void URefractCommonLocalUserSettings::ClampMobileQuality()
{
	if (GetFramePacingMode() != EFramePacingMode::Mobile)
	{
		return;
	}

	Scalability::FQualityLevels CurrentLevels = Scalability::GetQualityLevels();

	/** On mobile, disables the 3D Resolution clamp that reverts the user's setting on boot. */
	static constexpr bool bMobileDisableResolutionReset = true;
	if (bMobileDisableResolutionReset)
	{
		DeviceDefaultScalabilitySettings.Qualities.ResolutionQuality = CurrentLevels.ResolutionQuality;
	}

	DeviceDefaultScalabilitySettings.ClampToThis(CurrentLevels);
	Scalability::SetQualityLevels(CurrentLevels);

	ClampMobileFPSQualityLevels(true);

	const int32 MaxMobileFrameRate = GetMaxMobileFrameRate();
	const int32 DefaultMobileFrameRate = GetDefaultMobileFrameRate();
	ensureMsgf(DefaultMobileFrameRate <= MaxMobileFrameRate,
		TEXT("Default mobile frame rate (%d) exceeds the maximum mobile frame rate (%d)."),
		DefaultMobileFrameRate, MaxMobileFrameRate);

	const TArray<int32>& PossibleRates = GetPlatformSettings()->MobileFrameRateLimits;
	const int32 LimitIndex = PossibleRates.FindLastByPredicate([this](const int32& TestRate)
		{
			return TestRate <= DesiredMobileFrameRateLimit && IsSupportedMobileFramePace(TestRate);
		});
	const int32 ActualLimitFPS = PossibleRates.IsValidIndex(LimitIndex)
		? PossibleRates[LimitIndex]
		: GetDefaultMobileFrameRate();

	ClampMobileResolutionQuality(ActualLimitFPS);
}


int32 URefractCommonLocalUserSettings::GetHighestLevelOfAnyScalabilityChannel() const
{
	return DeviceDefaultScalabilitySettings.GetHighestLevelOfAnyScalabilityChannel();
}

void URefractCommonLocalUserSettings::OnAppActivationStateChanged(const bool bIsActive)
{
	REFRACT_UNUSED(bIsActive);
	UpdateEffectiveFrameRateLimit();
}

void URefractCommonLocalUserSettings::ReapplyThingsDueToPossibleDeviceProfileChange()
{
	ApplyNonResolutionSettings();
}

const URefractPlatformSettings* URefractCommonLocalUserSettings::GetPlatformSettings()
{
	return URefractPlatformSettings::Get();
}

EFramePacingMode URefractCommonLocalUserSettings::GetFramePacingMode()
{
	return GetPlatformSettings()->FramePacingMode;
}
