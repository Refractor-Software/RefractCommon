// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "Types/RefractCommonWidgetCommandContext.h"
#include "RefractCommonWidgetCommand.generated.h"

#define UE_API REFRACTCOMMONUI_API

/**
 * A UObject command run when a widget trigger fires, intended for Blueprint authoring.
 *
 * In cases where it's needed, designers can subclass this in Blueprint to author behavior
 * without an engineer. Fully native commands should subclass FRefractCommonWidgetCommand
 * instead and pay none of this object's per-instance UObject overhead.
 *
 * The default implementation does nothing; override Execute to do work. All trigger-specific
 * data (which way a rotator moved, which item a slot holds, etc.) arrives type-erased in
 * Context.TriggerPayload.
 */
UCLASS(EditInlineNew, Blueprintable, DisplayName = "Widget Command Object")
class URefractCommonWidgetCommandObject : public UObject
{
	GENERATED_BODY()

	friend struct FRefractCommonWidgetCommand_CommandObject;

protected:
	/**
	 * Reports whether this command can currently run in the given context.
	 *
	 * Used both as a guard before Execute and to drive a widget's enabled/disabled state.
	 * The default implementation returns true. Execute does NOT call this automatically;
	 * the dispatch site is responsible for checking it.
	 *
	 * @param Context  Ambient context for the interaction.
	 * @return         True if Execute may be called in this context.
	 */
	UFUNCTION(Category = "Command", BlueprintNativeEvent)
	UE_API bool CanExecute(const FRefractCommonWidgetCommandContext& Context) const;

	/**
	 * Executed when the owning widget's trigger fires.
	 * Assumes CanExecute was checked by the caller; it is not re-checked here.
	 * @param Context  Ambient context for the interaction (widget, player, pawn, payload, ...).
	 */
	UFUNCTION(Category = "Command", BlueprintNativeEvent)
	UE_API void Execute(const FRefractCommonWidgetCommandContext& Context);
};

/**
 * Base native command run when a widget's trigger fires.
 *
 * One signature serves every widget type: trigger-specific data rides in Context.TriggerPayload,
 * so a button, rotator, slider, or toggle all dispatch through this same base. Subclass in C++
 * and select per-control via an owning FInstancedStruct property constrained with
 * meta = (BaseStruct = "/Script/RefractCommonUI.RefractCommonWidgetCommand").
 *
 * A command that needs trigger specifics reads Context.GetPayload<TPayload>(); one that doesn't
 * (e.g. "close this menu") ignores the payload entirely.
 */
USTRUCT(DisplayName = "Widget Command")
struct FRefractCommonWidgetCommand
{
	GENERATED_BODY()

	UE_API virtual ~FRefractCommonWidgetCommand();

	/**
	 * Reports whether this command can currently run in the given context.
	 *
	 * Used both as a guard before Execute and to drive a widget's enabled/disabled state.
	 * The default implementation returns true. Execute does NOT call this automatically;
	 * the dispatch site is responsible for checking it (mirroring WPF's ICommand contract).
	 *
	 * @param Context  Ambient context for the interaction.
	 * @return         True if Execute may be called in this context.
	 */
	UE_API virtual bool CanExecute(const FRefractCommonWidgetCommandContext& Context) const;

	/**
	 * Executed when the owning widget's trigger fires.
	 * Assumes CanExecute was checked by the caller; it is not re-checked here.
	 * @param Context  Ambient context for the interaction.
	 */
	UE_API virtual void Execute(const FRefractCommonWidgetCommandContext& Context);
};

/**
 * Command variant that forwards to an instanced UObject command, for Blueprint authoring.
 * Use this when a designer needs to author the behavior in Blueprint; otherwise prefer a
 * native FRefractCommonWidgetCommand subclass.
 */
USTRUCT(DisplayName = "Widget Command (Command Object)")
struct FRefractCommonWidgetCommand_CommandObject : public FRefractCommonWidgetCommand
{
	GENERATED_BODY()

	/** The command object to execute. */
	UPROPERTY(Category = "Command", EditAnywhere, Instanced)
	TObjectPtr<URefractCommonWidgetCommandObject> Command;

	UE_API virtual ~FRefractCommonWidgetCommand_CommandObject() override;
	UE_API virtual bool CanExecute(const FRefractCommonWidgetCommandContext& Context) const override;
	UE_API virtual void Execute(const FRefractCommonWidgetCommandContext& Context) override;
};

#undef UE_API
