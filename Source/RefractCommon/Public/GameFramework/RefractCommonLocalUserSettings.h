// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/GameUserSettings.h"
#include "Types/RefractCommonLocalUserSettingsDelegates.h"
#include "Types/RefractCommonScalabilityTypes.h"
#include "RefractCommonLocalUserSettings.generated.h"

#define UE_API REFRACTCOMMON_API

class UDeviceProfileManager;
class URefractPlatformSettings;
enum class EFramePacingMode : uint8;
class USoundControlBus;
class USoundControlBusMix;

/**
 * Locally-stored game user settings.
 */
UCLASS(MinimalAPI)
class URefractCommonLocalUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UE_API URefractCommonLocalUserSettings();

	/**
	 * @return The game's URefractCommonLocalUserSettings instance, or nullptr if GEngine is not yet initialized or wasn't configured correctly.
	 */
	UFUNCTION(Category = "Settings", BlueprintCallable, BlueprintPure = false, DisplayName = "Get Local User Settings", meta = (Keywords = "preferences config options"))
	static UE_API URefractCommonLocalUserSettings* Get();

protected:
	//~ BEGIN UObject
	virtual void BeginDestroy() override;
	//~ END UObject

	//~ BEGIN UGameUserSettings
	virtual void SetToDefaults() override;
	virtual void LoadSettings(bool bForceReload) override;
	virtual void ConfirmVideoMode() override;
	virtual float GetEffectiveFrameRateLimit() override;
	virtual void ResetToCurrentSettings() override;
	virtual void ApplyNonResolutionSettings() override;
	virtual int32 GetOverallScalabilityLevel() const override;
	virtual void SetOverallScalabilityLevel(int32 Value) override;
	//~ END UGameUserSettings

	//////////////////////////////////////////////////////////////////////
	// Display
public:
	/**
	 * Set the display gamma value. Changes take effect immediately.
	 * @param InGamma The desired display gamma value.
	 */
	UFUNCTION(Category = "Settings|Display", BlueprintCallable, BlueprintPure = false)
	UE_API void SetDisplayGamma(double InGamma);

	/**
	 * Get the pending display gamma value.
	 * @return The current pending display gamma. This may differ from the currently applied value.
	 */
	UFUNCTION(Category = "Settings|Display", BlueprintCallable, BlueprintPure = true)
	UE_API double GetDisplayGamma() const;

	/**
	 * Set the safe zone scale. Changes take effect immediately.
	 * @param Value The desired safe zone scale.
	 */
	UFUNCTION(Category = "Settings|Display", BlueprintCallable, BlueprintPure = false)
	UE_API void SetSafeZone(float Value);

	/**
	 * Get the safe zone scale.
	 * @return The current safe zone scale, or 0 if it has never been explicitly set.
	 */
	UFUNCTION(Category = "Settings|Display", BlueprintCallable, BlueprintPure = true)
	UE_API float GetSafeZone() const;

	/**
	 * Returns whether the safe zone scale has ever been explicitly set by the user.
	 * @return True if the safe zone has been set.
	 */
	UFUNCTION(Category = "Settings|Display", BlueprintCallable, BlueprintPure = true)
	UE_API bool IsSafeZoneSet() const;

	/** Applies the current safe zone scale to the engine. */
	UE_API void ApplySafeZoneScale() const;

	//////////////////////////////////////////////////////////////////////
	// Frame Rate
public:
	/**
	 * Set the frame rate limit used when running on battery power.
	 * @param NewLimitFPS The desired frame rate limit on battery.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = false)
	UE_API void SetFrameRateLimit_OnBattery(double NewLimitFPS);

	/**
	 * Get the frame rate limit used when running on battery power.
	 * @return The frame rate limit on battery.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = true)
	UE_API double GetFrameRateLimit_OnBattery() const;

	/**
	 * Set the frame rate limit used while in a game menu.
	 * @param NewLimitFPS The desired frame rate limit in menus.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = false)
	UE_API void SetFrameRateLimit_InMenu(double NewLimitFPS);

	/**
	 * Get the frame rate limit used while in a game menu.
	 * @return The frame rate limit in menus.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = true)
	UE_API double GetFrameRateLimit_InMenu() const;

	/**
	 * Set the frame rate limit used when the application is unfocused (in the background).
	 * @param NewLimitFPS The desired frame rate limit when the application is unfocused.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = false)
	UE_API void SetFrameRateLimit_WhenBackground(double NewLimitFPS);

	/**
	 * Get the frame rate limit used when the application is unfocused (in the background).
	 * @return The frame rate limit when the application is unfocused.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = true)
	UE_API double GetFrameRateLimit_WhenBackground() const;

	/**
	 * Set the unconditional frame rate limit (applied when plugged in, in-game, and foregrounded).
	 * @param NewLimitFPS The desired unconditional frame rate limit.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = false)
	UE_API void SetFrameRateLimit_Always(double NewLimitFPS);

	/**
	 * Get the unconditional frame rate limit (applied when plugged in, in-game, and foregrounded).
	 * @return The unconditional frame rate limit.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = true)
	UE_API double GetFrameRateLimit_Always() const;

	/**
	 * Set whether front-end (main menu) performance settings should currently be applied.
	 * @param bInFrontEnd Whether the game is currently in the front-end.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = false)
	UE_API void SetShouldUseFrontendPerformanceSettings(bool bInFrontEnd);

	/**
	 * Returns whether front-end performance settings are currently active.
	 * @return True if front-end performance settings should be applied.
	 */
	UFUNCTION(Category = "Settings|FrameRate", BlueprintCallable, BlueprintPure = true)
	UE_API bool ShouldUseFrontendPerformanceSettings() const;

	//////////////////////////////////////////////////////////////////////
	// Mobile Frame Rate
public:
	/**
	 * Set the desired target frame rate for mobile.
	 * @param NewLimitFPS The desired target frame rate.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = false)
	UE_API void SetDesiredMobileFrameRateLimit(int32 NewLimitFPS);

	/**
	 * Get the desired target frame rate for mobile.
	 * @return The desired target frame rate.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = true)
	UE_API int32 GetDesiredMobileFrameRateLimit() const;

	/**
	 * Get the default mobile frame rate as defined by the device profile.
	 * @return The default mobile frame rate.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = true)
	static UE_API int32 GetDefaultMobileFrameRate();

	/**
	 * Get the maximum supported mobile frame rate as defined by the device profile.
	 * @return The maximum supported mobile frame rate.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = true)
	static UE_API int32 GetMaxMobileFrameRate();

	/**
	 * Returns whether the given frame rate is a supported mobile frame pace.
	 * @param TestFPS The frame rate to test.
	 * @return True if TestFPS is valid and supported on this device.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = true)
	static UE_API bool IsSupportedMobileFramePace(int32 TestFPS);

	/**
	 * Get the first frame rate at which overall quality becomes restricted by the device profile.
	 * @return The first frame rate with a quality limit, or INDEX_NONE if none.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = true)
	UE_API int32 GetFirstFrameRateWithQualityLimit() const;

	/**
	 * Get the lowest overall quality level at which a frame rate limit applies.
	 * @return The lowest quality with a frame rate limit, or -1 if no limit exists.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = true)
	UE_API int32 GetLowestQualityWithFrameRateLimit() const;

	/**
	 * Reset mobile scalability settings to the device profile defaults.
	 */
	UFUNCTION(Category = "Settings|FrameRate|Mobile", BlueprintCallable, BlueprintPure = false)
	UE_API void ResetToMobileDeviceDefaults();

	//////////////////////////////////////////////////////////////////////
	// Quality / Scalability
public:
	/**
	 * Get the maximum supported overall runtime quality level for the current platform.
	 * @return The maximum supported overall quality level.
	 */
	UFUNCTION(Category = "Settings|Quality", BlueprintCallable, BlueprintPure = true)
	UE_API int32 GetMaxSupportedOverallQualityLevel() const;

	/** Apply just the scalability quality settings, without a full settings apply. */
	UE_API void ApplyScalabilitySettings() const;

	/**
	 * Returns whether this platform supports running the auto benchmark.
	 * @return True if the auto benchmark can be run on this platform.
	 */
	UFUNCTION(Category = "Settings|Quality", BlueprintCallable, BlueprintPure = true)
	UE_API bool CanRunAutoBenchmark() const;

	/**
	 * Returns whether the auto benchmark should run at startup (i.e. has never been run).
	 * @return True if the auto benchmark should be run at startup.
	 */
	UFUNCTION(Category = "Settings|Quality", BlueprintCallable, BlueprintPure = true)
	UE_API bool ShouldRunAutoBenchmarkAtStartup() const;

	/**
	 * Run the auto benchmark.
	 * @param bSaveImmediately Whether to save settings immediately after benchmarking.
	 */
	UFUNCTION(Category = "Settings|Quality", BlueprintCallable, BlueprintPure = false)
	UE_API void RunAutoBenchmark(bool bSaveImmediately);

	//////////////////////////////////////////////////////////////////////
	// Device Profile
public:
	/**
	 * Set the desired device profile quality suffix. Used on console platforms.
	 * @param InDesiredSuffix The desired device profile suffix.
	 */
	UFUNCTION(Category = "Settings|DeviceProfile", BlueprintCallable, BlueprintPure = false)
	UE_API void SetDesiredDeviceProfileQualitySuffix(const FString& InDesiredSuffix);

	/**
	 * Get the desired device profile quality suffix. Used on console platforms.
	 * @return The desired device profile suffix.
	 */
	UFUNCTION(Category = "Settings|DeviceProfile", BlueprintCallable, BlueprintPure = true)
	UE_API FString GetDesiredDeviceProfileQualitySuffix() const;

	//////////////////////////////////////////////////////////////////////
	// Audio
public:
	/**
	 * @return A reference to the delegate broadcast when the audio output device changes.
	 *         Bind here to respond to device changes (e.g. to update UI or restart audio streams).
	 */
	UE_API FRefractCommonAudioDeviceChanged& OnAudioOutputDeviceChanged();

	/**
	 * @return A reference to the delegate broadcast when the HDR Audio Mode preference changes.
	 *         Bind here rather than calling ApplyDynamicRangeEffectsChains directly, to avoid a
	 *         circular module dependency with URefractCommonAudioMixEffectsSubsystem.
	 */
	UE_API FRefractCommonAudioHDRModeChanged& OnHDRAudioModeChanged();

	/**
	 * Returns whether headphone mode (HRTF spatialization) is currently enabled.
	 * NOTE: May be overruled if au.DisableBinauralSpatialization is set externally.
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API bool IsHeadphoneModeEnabled() const;

	/**
	 * Enables or disables headphone mode (HRTF spatialization).
	 * NOTE: Will be overruled if au.DisableBinauralSpatialization is set externally.
	 * @param bEnabled Whether to enable headphone mode.
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetHeadphoneModeEnabled(bool bEnabled);

	/**
	 * Returns whether headphone mode can currently be toggled by the user.
	 * Returns false if the platform forces binaural spatialization on or off.
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API bool CanModifyHeadphoneModeEnabled() const;

	/**
	 * Returns whether High Dynamic Range Audio mode is currently enabled.
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API bool IsHDRAudioModeEnabled() const;

	/**
	 * Enables or disables High Dynamic Range Audio mode.
	 * Broadcasts OnHDRAudioModeChangedDelegate to notify listeners.
	 * @param bEnabled Whether to enable HDR Audio mode.
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetHDRAudioModeEnabled(bool bEnabled);

	/**
	 * Get the overall (master) volume level.
	 * @return The overall volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API float GetOverallVolume() const;

	/**
	 * Set the overall (master) volume level.
	 * @param InVolume The desired overall volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetOverallVolume(float InVolume);

	/**
	 * Get the music volume level.
	 * @return The music volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API float GetMusicVolume() const;

	/**
	 * Set the music volume level.
	 * @param InVolume The desired music volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetMusicVolume(float InVolume);

	/**
	 * Get the sound effects volume level.
	 * @return The sound effects volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API float GetSoundFXVolume() const;

	/**
	 * Set the sound effects volume level.
	 * @param InVolume The desired sound effects volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetSoundFXVolume(float InVolume);

	/**
	 * Get the dialogue volume level.
	 * @return The dialogue volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API float GetDialogueVolume() const;

	/**
	 * Set the dialogue volume level.
	 * @param InVolume The desired dialogue volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetDialogueVolume(float InVolume);

	/**
	 * Get the voice chat volume level.
	 * @return The voice chat volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API float GetVoiceChatVolume() const;

	/**
	 * Set the voice chat volume level.
	 * @param InVolume The desired voice chat volume, in the range [0, 1].
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetVoiceChatVolume(float InVolume);

	/**
	 * Get the user's preferred audio output device ID.
	 * @return The audio output device ID string.
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = true)
	UE_API FString GetAudioOutputDeviceId() const;

	/**
	 * Set the user's preferred audio output device by ID.
	 * @param InAudioOutputDeviceId The audio output device ID to use.
	 */
	UFUNCTION(Category = "Settings|Audio", BlueprintCallable, BlueprintPure = false)
	UE_API void SetAudioOutputDeviceId(const FString& InAudioOutputDeviceId);

	//////////////////////////////////////////////////////////////////////
	// Input
public:
	/**
	 * Set the controller platform representation.
	 * Used on platforms that support multiple controller types (e.g. Xbox and PlayStation on PC).
	 * @param InControllerPlatform The name of the controller platform to use.
	 */
	UFUNCTION(Category = "Settings|Input", BlueprintCallable, BlueprintPure = false)
	UE_API void SetControllerPlatform(const FName InControllerPlatform);

	/**
	 * Get the active controller platform representation.
	 * @return The name of the active controller platform.
	 */
	UFUNCTION(Category = "Settings|Input", BlueprintCallable, BlueprintPure = true)
	UE_API FName GetControllerPlatform() const;

protected:
	void OnExperienceLoaded();
	void OnHotfixDeviceProfileApplied();
	void UpdateEffectiveFrameRateLimit();
	void UpdateGameModeDeviceProfileAndFps();
	void UpdateConsoleFramePacing() const;
	void UpdateDesktopFramePacing();
	void UpdateMobileFramePacing();
	void UpdateDynamicResFrameTime(float TargetFPS) const;

protected:
	UPROPERTY(Config)
	float DisplayGamma = 2.2f;

	UPROPERTY(Config)
	float FrameRateLimit_OnBattery;

	UPROPERTY(Config)
	float FrameRateLimit_InMenu;

	UPROPERTY(Config)
	float FrameRateLimit_WhenBackground;

	UPROPERTY(Config)
	int32 MobileFrameRateLimit = 30;

	FScalabilitySnapshot DeviceDefaultScalabilitySettings;
	bool bSettingOverallQualityGuard = false;
	int32 DesiredMobileFrameRateLimit = 0;

private:
	void ApplyDisplayGamma() const;
	void LoadUserControlBusMix();
	void SetVolumeForControlBus(USoundControlBus* InSoundControlBus, float InVolume);
	void SetVolumeForChannel(float& OutVolume, const FName& ChannelKey, float InVolume);
	void SetMobileFPSMode(int32 NewLimitFPS);
	void ClampMobileResolutionQuality(int32 TargetFPS);
	void RemapMobileResolutionQuality(int32 FromFPS, int32 ToFPS);
	void ClampMobileFPSQualityLevels(bool bWriteBack);
	void ClampMobileQuality();
	int32 GetHighestLevelOfAnyScalabilityChannel() const;
	void ResolveEffectiveDeviceProfileName(UDeviceProfileManager& Manager, FString& OutProfileName) const;
	void ApplyDeviceProfileOverride(UDeviceProfileManager& Manager, const FString& ProfileName);
	void OnAppActivationStateChanged(bool bIsActive);
	void ReapplyThingsDueToPossibleDeviceProfileChange();

	static bool HasPlatformTrait(FGameplayTag Tag);
	static const URefractPlatformSettings* GetPlatformSettings();
	static EFramePacingMode GetFramePacingMode();

private:
	bool bInFrontEndForPerformancePurposes = false;

	/** Whether we *want* to use headphone mode; may differ from the currently applied value. */
	UPROPERTY(Transient)
	bool bDesiredHeadphoneMode = false;

	UPROPERTY(config)
	bool bUseHeadphoneMode = false;

	UPROPERTY(config)
	bool bUseHDRAudioMode = false;

	UPROPERTY(Config)
	float OverallVolume = 1.0f;

	UPROPERTY(Config)
	float MusicVolume = 1.0f;

	UPROPERTY(Config)
	float SoundFXVolume = 1.0f;

	UPROPERTY(Config)
	float DialogueVolume = 1.0f;

	UPROPERTY(Config)
	float VoiceChatVolume = 1.0f;

	UPROPERTY(Config)
	FString AudioOutputDeviceId;

	UPROPERTY(Config)
	float SafeZoneScale = -1.0f;

	UPROPERTY(Transient)
	TMap<FName /*SoundClassName*/, TObjectPtr<USoundControlBus>> ControlBusMap;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBusMix> ControlBusMix = nullptr;

	UPROPERTY(Transient)
	bool bSoundControlBusMixLoaded = false;

	UPROPERTY(Transient)
	FString DesiredUserChosenDeviceProfileSuffix;

	UPROPERTY(Transient)
	FString CurrentAppliedDeviceProfileOverrideSuffix;

	UPROPERTY(config)
	FString UserChosenDeviceProfileSuffix;

	/**
	 * The name of the controller the player is using. Maps to a UCommonInputBaseControllerData
	 * registered for this platform in <Platform>Game.ini under +ControllerData=...
	 */
	UPROPERTY(Config)
	FName ControllerPlatform;

	UPROPERTY(Config)
	FName ControllerPreset = TEXT("Default");

	UPROPERTY(Config)
	FName InputConfigName = TEXT("Default");

	FRefractCommonAudioDeviceChanged AudioOutputDeviceChangedDelegate;
	FRefractCommonAudioHDRModeChanged HDRAudioModeChangedDelegate;

	FDelegateHandle OnApplicationActivationStateChangedHandle;
};

#undef UE_API