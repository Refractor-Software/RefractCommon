// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Types/RefractCommonAudioTypes.h"
#include "RefractCommonAudioSettings.generated.h"

#define UE_API REFRACTCOMMON_API

class USoundControlBus;
class USoundControlBusMix;
class USoundSubmix;
class USoundEffectSubmixPreset;

/**
 * Common settings for the audio system.
 */
UCLASS(MinimalAPI, Config = Game, DefaultConfig, DisplayName = "Game Audio")
class URefractCommonAudioSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UE_API URefractCommonAudioSettings();

	/** The Default Base Control Bus Mix */
	UPROPERTY(Category = "Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBusMix> DefaultControlBusMix;

	/** The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events */
	UPROPERTY(Category = "Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBusMix> LoadingScreenControlBusMix;

	/** The User-Customizable Control Bus Mix */
	UPROPERTY(Category = "User Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBusMix> UserSettingsControlBusMix;

	/** Control Bus assigned to the Overall sound volume setting */
	UPROPERTY(Category = "User Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBus> OverallVolumeControlBus;

	/** Control Bus assigned to the Music sound volume setting */
	UPROPERTY(Category = "User Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBus> MusicVolumeControlBus;

	/** Control Bus assigned to the SoundFX sound volume setting */
	UPROPERTY(Category = "User Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBus> SoundFXVolumeControlBus;

	/** Control Bus assigned to the Dialogue sound volume setting */
	UPROPERTY(Category = "User Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBus> DialogueVolumeControlBus;

	/** Control Bus assigned to the VoiceChat sound volume setting */
	UPROPERTY(Category = "User Mix Settings", EditAnywhere, Config)
	TSoftObjectPtr<USoundControlBus> VoiceChatVolumeControlBus;

	/** Submix Processing Chains to achieve high dynamic range audio output */
	UPROPERTY(Category = "Effect Settings", EditAnywhere, Config)
	TArray<FAudioSubmixEffectChainMap> HDRAudioSubmixEffectChain;

	/** Submix Processing Chains to achieve low dynamic range audio output */
	UPROPERTY(Category = "Effect Settings", EditAnywhere, Config)
	TArray<FAudioSubmixEffectChainMap> LDRAudioSubmixEffectChain;
};

#undef UE_API
