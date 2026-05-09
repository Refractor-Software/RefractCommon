// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RefractCommonGameplayCueManagerInterface.generated.h"

UINTERFACE(MinimalAPI)
class URefractCommonGameplayCueManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class REFRACTCOMMON_API IRefractCommonGameplayCueManagerInterface
{
	GENERATED_BODY()

public:
	/**
	 * Gets the ability system's gameplay cue manager as this interface.
	 * @return The ability system's gameplay cue manager as this interface. NULL if the manager doesn't implement this interface.
	 */
	static IRefractCommonGameplayCueManagerInterface* Get();

	/**
	 * Requests the gameplay cue manager to load any always-loaded cues.
	 */
	virtual void LoadAlwaysLoadedCues() = 0;
};
