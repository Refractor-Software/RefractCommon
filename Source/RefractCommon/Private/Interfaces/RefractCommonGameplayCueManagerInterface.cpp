// Copyright (C) William Pimentel-Tonche. All rights reserved.

#include "Interfaces/RefractCommonGameplayCueManagerInterface.h"

#include "AbilitySystemGlobals.h"
#include "GameplayCueManager.h"

IRefractCommonGameplayCueManagerInterface* IRefractCommonGameplayCueManagerInterface::Get()
{
	return Cast<IRefractCommonGameplayCueManagerInterface>(UAbilitySystemGlobals::Get().GetGameplayCueManager());
}
