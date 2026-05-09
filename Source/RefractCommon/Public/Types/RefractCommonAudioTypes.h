// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "RefractCommonAudioTypes.generated.h"

#define UE_API REFRACTCOMMON_API

/**
 * Contains a sound submix and the effect chain that should be applied to it.
 * This is the transient runtime structure that holds hard references, which load data into memory and prevent GC.
 */
USTRUCT()
struct FAudioSubmixEffectChain
{
	GENERATED_BODY()

	UE_API FAudioSubmixEffectChain();

	/** The submix on which to apply the effect chain. */
	UPROPERTY(Transient)
	TObjectPtr<USoundSubmix> Submix;

	/** Effect chain to apply to this submix. Effects are processed in the array index order. */
	UPROPERTY(Transient)
	TArray<TObjectPtr<USoundEffectSubmixPreset>> SubmixEffectChain;
};

/**
 * The submix effect chain map used for configuration purposes.
 * This is the configuration mapping structure that holds soft references, which don't load data into memory by themselves.
 */
USTRUCT()
struct FAudioSubmixEffectChainMap
{
	GENERATED_BODY()

	UE_API FAudioSubmixEffectChainMap();

	/** The submix on which to apply the effect chain. */
	UPROPERTY(Category = Default, EditAnywhere)
	TSoftObjectPtr<USoundSubmix> Submix;

	/** Effect chain to apply to this submix. Effects are processed in the array index order. */
	UPROPERTY(Category = Default, EditAnywhere)
	TArray<TSoftObjectPtr<USoundEffectSubmixPreset>> SubmixEffectChain;
};

#undef UE_API
