// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Types/RefractCommonAudioTypes.h"
#include "RefractCommonAudioMixEffectsSubsystem.generated.h"

#define UE_API REFRACTCOMMON_API

class USoundControlBus;
class USoundControlBusMix;

/**
 * Automatically engage default and user control bus mixes to retrieve previously saved user settings and apply them to the activated user mix.
 * Automatically apply HDR/LDR audio submix effect chain overrides based on the user's preference for HDR Audio.
 * Sound Effect Chain Overrides are defined in the Audio Settings.
 */
UCLASS(MinimalAPI)
class URefractCommonAudioMixEffectsSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UE_API URefractCommonAudioMixEffectsSubsystem();

	/**
	 * Set whether to apply the HDR submix effect chain override settings.
	 * @param bHDRAudio Whether to apply the HDR submix effect chain override settings.
	 */
	UE_API void ApplyDynamicRangeEffectsChains(bool bHDRAudio) const;

protected:
	//~ BEGIN USubsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void PostInitialize() override; /**< Called AFTER this and all other UWorldSubsystems have been initialized. */
	//~ END USubsystem

	//~ BEGIN UWorldSubsystem
	virtual void OnWorldBeginPlay(UWorld& InWorld) override; /**< Called before the Game Mode routes BeginPlay(). */
	virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;
	//~ END UWorldSubsystem

	void OnLoadingScreenStatusChanged(bool bShowingLoadingScreen);
	void ApplyOrRemoveLoadingScreenMix(bool bWantsLoadingScreenMix);

private:
	/** Resolves a soft-reference effect chain array into a ready-to-use FAudioSubmixEffectChain array. */
	void LoadSubmixEffectChain(const TArray<FAudioSubmixEffectChainMap>& InSoftChains, TArray<FAudioSubmixEffectChain>& OutChains) const;

private:
	UPROPERTY(Transient)
	TObjectPtr<USoundControlBusMix> DefaultBaseMix;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBusMix> LoadingScreenMix;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBusMix> UserMix;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBus> OverallControlBus;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBus> MusicControlBus;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBus> SoundFXControlBus;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBus> DialogueControlBus;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBus> VoiceChatControlBus;

	UPROPERTY(Transient)
	TArray<FAudioSubmixEffectChain> HDRSubmixEffectChain;

	UPROPERTY(Transient)
	TArray<FAudioSubmixEffectChain> LDRSubmixEffectChain;

	bool bAppliedLoadingScreenMix = false;

	FDelegateHandle OnHDRAudioModeChangedHandle;
};

#undef UE_API
