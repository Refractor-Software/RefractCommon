// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Commands/RefractCommonWidgetCommand.h"

#include "RefractCommonUI.h"
#include "Utility/RefractLogging.h"

void URefractCommonWidgetCommandObject::Execute_Implementation(const FRefractCommonWidgetCommandContext& Context)
{
	REFRACT_LOG_UCLASS_ARGS(LogRefractCommonUI, Display, "Widget command executed for %s",
		*GetNameSafe(Context.GetWidget()));
}

bool URefractCommonWidgetCommandObject::CanExecute_Implementation(const FRefractCommonWidgetCommandContext& Context) const
{
	return true;
}

FRefractCommonWidgetCommand::~FRefractCommonWidgetCommand()
{
}

bool FRefractCommonWidgetCommand::CanExecute(const FRefractCommonWidgetCommandContext& Context) const
{
	return true;
}

void FRefractCommonWidgetCommand::Execute(const FRefractCommonWidgetCommandContext& Context)
{
	REFRACT_LOG_USTRUCT_ARGS(LogRefractCommonUI, Display, "Widget command executed for %s",
		*GetNameSafe(Context.GetWidget()));
}

FRefractCommonWidgetCommand_CommandObject::~FRefractCommonWidgetCommand_CommandObject()
{
}

bool FRefractCommonWidgetCommand_CommandObject::CanExecute(const FRefractCommonWidgetCommandContext& Context) const
{
	// A forwarding command with no object cannot run.
	return IsValid(Command) && Command->CanExecute(Context);
}

void FRefractCommonWidgetCommand_CommandObject::Execute(const FRefractCommonWidgetCommandContext& Context)
{
	if (IsValid(Command))
	{
		Command->Execute(Context);
	}
}
