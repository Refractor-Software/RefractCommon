// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "GameFramework/RefractCommonHUD.h"

#include "Subsystems/RefractCommonGameLayoutSubsystem.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"

/* TODO(will) We can get away with the HUD alone. Important to remember that the game layout, as a UUserWidget, will never live past level
 *            transitions anyway, so the trouble of resetting the game layout is not worth just recreating it on level reload.
 *            There will also be a dedicated level loading screen system, likely with a basic transition level and UMG loading screen.
 */

URefractCommonGameLayoutSubsystem* ARefractCommonHUD::GetLayoutSubsystem() const
{
	if (const APlayerController* PC = GetOwningPlayerController())
	{
		if (const ULocalPlayer* LP = PC->GetLocalPlayer())
		{
			return LP->GetSubsystem<URefractCommonGameLayoutSubsystem>();
		}
	}
	return nullptr;
}

void ARefractCommonHUD::BeginPlay()
{
	Super::BeginPlay();

	// A valid controller exists by definition here (it spawned us), so this is the natural,
	// reliable point to bind the layout to the current controller.
	if (URefractCommonGameLayoutSubsystem* UI = GetLayoutSubsystem())
	{
		UI->NotifyControllerReady(GetOwningPlayerController());
	}
}

void ARefractCommonHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Determine teardown intent from the world's travel state rather than EndPlayReason,
	// which cannot distinguish seamless from non-seamless travel. The subsystem decides
	// flush-or-preserve from this.
	ERefractLayoutTeardownReason UIReason = ERefractLayoutTeardownReason::Destroyed;
	if (const UWorld* World = GetWorld(); World && World->IsInSeamlessTravel())
	{
		UIReason = ERefractLayoutTeardownReason::SeamlessTravel;
	}

	if (URefractCommonGameLayoutSubsystem* UI = GetLayoutSubsystem())
	{
		UI->NotifyControllerGone(UIReason);
	}

	Super::EndPlay(EndPlayReason);
}
