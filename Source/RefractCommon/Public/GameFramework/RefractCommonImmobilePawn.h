// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RefractCommonImmobilePawn.generated.h"

/**
 * A basic immobile, non-ticking pawn, typically for use in main menus, loading screens, or other places where you want the player
 * to be physically incapable of doing anything.
 */
UCLASS()
class REFRACTCOMMON_API ARefractCommonImmobilePawn : public APawn
{
	GENERATED_BODY()

public:
	ARefractCommonImmobilePawn();
};
