// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "Engine/PlatformSettings.h"
#include "RefractPlatformSettings.generated.h"

#define UE_API REFRACTCOMMON_API

/**
 * Describes a single platform-specific device profile variant that the user can select in the UI.
 */
USTRUCT()
struct FQualityDeviceProfileVariant
{
	GENERATED_BODY()

	UE_API FQualityDeviceProfileVariant();

	// The user-facing display name for this device profile. This is what will be shown in the in-game settings menu.
	UPROPERTY(Category = Default, EditAnywhere)
	FText DisplayName;

	// The suffix to append to the base device profile name for the current platform.
	UPROPERTY(Category = Default, EditAnywhere)
	FString DeviceProfileSuffix;

	/**
	 * The minimum refresh rate that must be supported by the connected display to enable this mode.
	 *
	 * Example: If this is set to 120hz, and the device is connected to a 60hz display, this profile will not be available.
	 */
	UPROPERTY(Category = Default, EditAnywhere, meta = (ForceUnits = "Hz"))
	int32 MinHardwareRefreshRate;
};

UENUM()
enum class EFramePacingMode : uint8
{
	// User preferences set the frame rate limit, including whether to lock to vsync.
	Desktop,

	// Device profiles set the frame rate limit.
	Console,

	// Device profiles provide a user-facing choice of frame rate limits.
	Mobile
};

/**
 * Platform-specific settings.
 */
UCLASS(MinimalAPI, Config = Game, DefaultConfig)
class URefractPlatformSettings : public UPlatformSettings
{
	GENERATED_BODY()

public:
	UE_API URefractPlatformSettings();

	// Helper method to get the performance settings object, directed via platform settings
	static UE_API const URefractPlatformSettings* Get();

public:
	// The default variant suffix to append, should typically be a member of
	// UserFacingDeviceProfileOptions unless there is only one for the current platform
	//
	// Note that this will usually be set from platform-specific ini files, not via the UI
	UPROPERTY(EditAnywhere, Config, Category=DeviceProfiles)
	FString DefaultDeviceProfileSuffix;

	// The list of device profile variations to allow users to choose from in settings
	//
	// These should be sorted from slowest to fastest by target frame rate:
	//   If the current display doesn't support a user chosen refresh rate, we'll try
	//   previous entries until we find one that works
	//
	// Note that this will usually be set from platform-specific ini files, not via the UI
	UPROPERTY(EditAnywhere, Config, Category=DeviceProfiles)
	TArray<FQualityDeviceProfileVariant> UserFacingDeviceProfileOptions;

	// Does the platform support granular video quality settings?
	UPROPERTY(EditAnywhere, Config, Category=VideoSettings)
	bool bSupportsGranularVideoQualitySettings = true;

	// Does the platform support running the automatic quality benchmark (typically this should only be true if bSupportsGranularVideoQualitySettings is also true)
	UPROPERTY(EditAnywhere, Config, Category=VideoSettings)
	bool bSupportsAutomaticVideoQualityBenchmark = true;

	// How is frame pacing controlled
	UPROPERTY(EditAnywhere, Config, Category=VideoSettings)
	EFramePacingMode FramePacingMode = EFramePacingMode::Desktop;

	// Potential frame rates to display for mobile
	// Note: This is further limited by Lyra.DeviceProfile.Mobile.MaxFrameRate from the
	// platform-specific device profile and what the platform frame pacer reports as supported
	UPROPERTY(EditAnywhere, Config, Category=VideoSettings, meta=(EditCondition="FramePacingMode==EFramePacingMode::Mobile", ForceUnits=Hz))
	TArray<int32> MobileFrameRateLimits;
};

UCLASS(MinimalAPI, Config = Game, DefaultConfig, DisplayName = "Game Performance")
class URefractPerformanceSettings : public UDeveloperSettingsBackedByCVars
{
	GENERATED_BODY()

public:
	UE_API URefractPerformanceSettings();

private:
	UPROPERTY(Category = "PlatformSpecific", EditAnywhere)
	FPerPlatformSettings PerPlatformSettings;

public:
	/** The list of frame rates to allow users to select from on desktop platforms. */
	UPROPERTY(Category = "Performance", EditAnywhere, Config, meta = (ForceUnits = "Hz"))
	TArray<int32> DesktopFrameRateLimits;
};

#undef UE_API
