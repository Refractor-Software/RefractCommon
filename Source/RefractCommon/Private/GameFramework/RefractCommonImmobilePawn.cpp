// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "GameFramework/RefractCommonImmobilePawn.h"

ARefractCommonImmobilePawn::ARefractCommonImmobilePawn()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.bAllowTickOnDedicatedServer = false;
}
