// Copyright (C) William Pimentel-Tonche. All rights reserved.

#include "Subsystems/RefractCommonAudioMixEffectsSubsystem.h"

#include "AudioMixerBlueprintLibrary.h"
#include "AudioModulationStatics.h"
#include "LoadingScreenManager.h"
#include "RefractDefinitions.h"
#include "SoundControlBusMix.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/RefractCommonLocalUserSettings.h"
#include "Settings/RefractCommonAudioSettings.h"
#include "Sound/SoundEffectSubmix.h"

class FSubsystemCollectionBase;

URefractCommonAudioMixEffectsSubsystem::URefractCommonAudioMixEffectsSubsystem()
	: DefaultBaseMix(nullptr)
	, LoadingScreenMix(nullptr)
	, UserMix(nullptr)
	, OverallControlBus(nullptr)
	, MusicControlBus(nullptr)
	, SoundFXControlBus(nullptr)
	, DialogueControlBus(nullptr)
	, VoiceChatControlBus(nullptr)
{
}

void URefractCommonAudioMixEffectsSubsystem::ApplyDynamicRangeEffectsChains(const bool bHDRAudio) const
{
	TArray<FAudioSubmixEffectChain> ChainsToApply;
	TArray<FAudioSubmixEffectChain> ChainsToClear;

	if (bHDRAudio)
	{
		ChainsToApply.Append(HDRSubmixEffectChain);
		ChainsToClear.Append(LDRSubmixEffectChain);
	}
	else
	{
		ChainsToApply.Append(LDRSubmixEffectChain);
		ChainsToClear.Append(HDRSubmixEffectChain);
	}

	// Collect submixes not covered by the incoming chains — those need to be explicitly cleared
	TArray<USoundSubmix*> SubmixesLeftToClear;
	for (const FAudioSubmixEffectChain& ChainToClear : ChainsToClear)
	{
		const bool bWillBeOverridden = ChainsToApply.ContainsByPredicate(
			[&ChainToClear](const FAudioSubmixEffectChain& Chain) { return Chain.Submix == ChainToClear.Submix; });

		if (!bWillBeOverridden)
		{
			SubmixesLeftToClear.Add(ChainToClear.Submix);
		}
	}

	for (const FAudioSubmixEffectChain& Chain : ChainsToApply)
	{
		if (Chain.Submix)
		{
			UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(GetWorld(), Chain.Submix, Chain.SubmixEffectChain, 0.1f);
		}
	}

	for (USoundSubmix* Submix : SubmixesLeftToClear)
	{
		UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(GetWorld(), Submix, 0.1f);
	}
}

void URefractCommonAudioMixEffectsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void URefractCommonAudioMixEffectsSubsystem::Deinitialize()
{
	if (URefractCommonLocalUserSettings* UserSettings = URefractCommonLocalUserSettings::Get())
	{
		UserSettings->OnHDRAudioModeChanged().Remove(OnHDRAudioModeChangedHandle);
	}

	if (ULoadingScreenManager* LoadingScreenManager = UGameInstance::GetSubsystem<ULoadingScreenManager>(GetWorld()->GetGameInstance()))
	{
		LoadingScreenManager->OnLoadingScreenVisibilityChangedDelegate().RemoveAll(this);
		ApplyOrRemoveLoadingScreenMix(false);
	}

	Super::Deinitialize();
}

bool URefractCommonAudioMixEffectsSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	bool bShouldCreateSubsystem = Super::ShouldCreateSubsystem(Outer);

	if (Outer)
	{
		if (UWorld* World = Outer->GetWorld())
		{
			bShouldCreateSubsystem = DoesSupportWorldType(World->WorldType) && bShouldCreateSubsystem;
		}
	}

	return bShouldCreateSubsystem;
}

void URefractCommonAudioMixEffectsSubsystem::PostInitialize()
{
	Super::PostInitialize();

	const auto TryLoad = [this](const auto& SoftPtr, auto& OutPtr, const TCHAR* AssetName)
		{
			if (auto* Loaded = SoftPtr.LoadSynchronous())
			{
				OutPtr = Loaded;
			}
			else
			{
				REFRACT_LOG_UCLASS_ARGS(LogRefract, Warning, "Audio asset reference missing or invalid in Audio Settings: %s", AssetName);
			}
		};

	if (const URefractCommonAudioSettings* AudioSettings = GetDefault<URefractCommonAudioSettings>())
	{
		TryLoad(AudioSettings->DefaultControlBusMix,        DefaultBaseMix,      TEXT("Default Control Bus Mix"));
		TryLoad(AudioSettings->LoadingScreenControlBusMix,  LoadingScreenMix,    TEXT("Loading Screen Control Bus Mix"));
		TryLoad(AudioSettings->UserSettingsControlBusMix,   UserMix,             TEXT("User Control Bus Mix"));
		TryLoad(AudioSettings->OverallVolumeControlBus,     OverallControlBus,   TEXT("Overall Control Bus"));
		TryLoad(AudioSettings->MusicVolumeControlBus,       MusicControlBus,     TEXT("Music Control Bus"));
		TryLoad(AudioSettings->SoundFXVolumeControlBus,     SoundFXControlBus,   TEXT("SoundFX Control Bus"));
		TryLoad(AudioSettings->DialogueVolumeControlBus,    DialogueControlBus,  TEXT("Dialogue Control Bus"));
		TryLoad(AudioSettings->VoiceChatVolumeControlBus,   VoiceChatControlBus, TEXT("VoiceChat Control Bus"));

		LoadSubmixEffectChain(AudioSettings->HDRAudioSubmixEffectChain, HDRSubmixEffectChain);
		LoadSubmixEffectChain(AudioSettings->LDRAudioSubmixEffectChain, LDRSubmixEffectChain);
	}

	// Bind to HDR audio mode changes so URefractCommonLocalUserSettings doesn't need to know about us
	if (URefractCommonLocalUserSettings* UserSettings = URefractCommonLocalUserSettings::Get())
	{
		OnHDRAudioModeChangedHandle = UserSettings->OnHDRAudioModeChanged().AddUObject(
			this, &ThisClass::ApplyDynamicRangeEffectsChains);
	}

	// Register with the loading screen manager
	if (ULoadingScreenManager* LoadingScreenManager = UGameInstance::GetSubsystem<ULoadingScreenManager>(GetWorld()->GetGameInstance()))
	{
		LoadingScreenManager->OnLoadingScreenVisibilityChangedDelegate().AddUObject(this, &ThisClass::OnLoadingScreenStatusChanged);
		ApplyOrRemoveLoadingScreenMix(LoadingScreenManager->GetLoadingScreenDisplayStatus());
	}
}

void URefractCommonAudioMixEffectsSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	// Activate the default base mix
	if (DefaultBaseMix)
	{
		UAudioModulationStatics::ActivateBusMix(&InWorld, DefaultBaseMix);
	}

	// Activate the user mix and apply saved volume settings
	if (const URefractCommonLocalUserSettings* UserSettings = URefractCommonLocalUserSettings::Get())
	{
		if (UserMix)
		{
			UAudioModulationStatics::ActivateBusMix(&InWorld, UserMix);

			if (OverallControlBus && MusicControlBus && SoundFXControlBus && DialogueControlBus && VoiceChatControlBus)
			{
				const TArray ControlBusMixStages =
				{
					UAudioModulationStatics::CreateBusMixStage(&InWorld, OverallControlBus,   UserSettings->GetOverallVolume()),
					UAudioModulationStatics::CreateBusMixStage(&InWorld, MusicControlBus,     UserSettings->GetMusicVolume()),
					UAudioModulationStatics::CreateBusMixStage(&InWorld, SoundFXControlBus,   UserSettings->GetSoundFXVolume()),
					UAudioModulationStatics::CreateBusMixStage(&InWorld, DialogueControlBus,  UserSettings->GetDialogueVolume()),
					UAudioModulationStatics::CreateBusMixStage(&InWorld, VoiceChatControlBus, UserSettings->GetVoiceChatVolume()),
				};

				UAudioModulationStatics::UpdateMix(&InWorld, UserMix, ControlBusMixStages);
			}
		}

		ApplyDynamicRangeEffectsChains(UserSettings->IsHDRAudioModeEnabled());
	}
}

bool URefractCommonAudioMixEffectsSubsystem::DoesSupportWorldType(const EWorldType::Type World) const
{
	return World == EWorldType::Game || World == EWorldType::PIE;
}

void URefractCommonAudioMixEffectsSubsystem::OnLoadingScreenStatusChanged(const bool bShowingLoadingScreen)
{
	ApplyOrRemoveLoadingScreenMix(bShowingLoadingScreen);
}

void URefractCommonAudioMixEffectsSubsystem::ApplyOrRemoveLoadingScreenMix(const bool bWantsLoadingScreenMix)
{
	const UWorld* World = GetWorld();

	if (bAppliedLoadingScreenMix != bWantsLoadingScreenMix && LoadingScreenMix && World)
	{
		if (bWantsLoadingScreenMix)
		{
			UAudioModulationStatics::ActivateBusMix(World, LoadingScreenMix);
		}
		else
		{
			UAudioModulationStatics::DeactivateBusMix(World, LoadingScreenMix);
		}

		bAppliedLoadingScreenMix = bWantsLoadingScreenMix;
	}
}

/**
 * Synchronously loads a soft-referenced FAudioSubmixEffectChainMap array into a resolved
 * FAudioSubmixEffectChain array, ready for use with UAudioMixerBlueprintLibrary.
 *
 * @param InSoftChains  Source array from URefractCommonAudioSettings.
 * @param OutChains     Receives the resolved chains. Appended to, not reset.
 */
void URefractCommonAudioMixEffectsSubsystem::LoadSubmixEffectChain(
	const TArray<FAudioSubmixEffectChainMap>& InSoftChains,
	TArray<FAudioSubmixEffectChain>& OutChains) const
{
	for (const FAudioSubmixEffectChainMap& SoftChain : InSoftChains)
	{
		USoundSubmix* Submix = SoftChain.Submix.LoadSynchronous();
		if (!IsValid(Submix))
		{
			REFRACT_LOG_UCLASS(LogRefract, Warning, "Submix reference missing or invalid in Audio Settings effect chain.");
			continue;
		}

		FAudioSubmixEffectChain NewChain;
		NewChain.Submix = Submix;

		for (const TSoftObjectPtr<USoundEffectSubmixPreset>& SoftPreset : SoftChain.SubmixEffectChain)
		{
			if (USoundEffectSubmixPreset* Preset = SoftPreset.LoadSynchronous())
			{
				NewChain.SubmixEffectChain.Add(Preset);
			}
		}

		OutChains.Add(NewChain);
	}
}
