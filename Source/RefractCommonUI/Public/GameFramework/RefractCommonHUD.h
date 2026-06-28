// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "RefractCommonHUD.generated.h"

#define UE_API REFRACTCOMMONUI_API

/**
 * Lifetime beacon for the UI layout subsystem.
 *
 * This HUD owns no UI state. Its only job is to report PlayerController lifetime to the
 * per-local-player URefractCommonGameLayoutSubsystem: because the HUD is spawned by the
 * controller and destroyed with it, its lifetime exactly matches the window during which a
 * valid controller exists. The subsystem (which outlives any single controller) uses these
 * two notifications to build and tear down the layout and to flush input suspensions.
 *
 * Deliberately keep this class empty of UI logic — all of that belongs in the subsystem or
 * the layout. The HUD is here only because it sits at the controller's lifetime.
 */
UCLASS(MinimalAPI)
class ARefractCommonHUD : public AHUD
{
	GENERATED_BODY()

// public:
	// //~ BEGIN AActor
	// UE_API virtual void BeginPlay() override;
	// UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// //~ END AActor

// private:
	// /** Resolves the layout subsystem for this HUD's owning local player, or null if unavailable. */
	// UE_API class URefractCommonGameLayoutSubsystem* GetLayoutSubsystem() const;
};

#undef UE_API
