// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Types/RefractCommonWidgetCommandContext.h"

FRefractCommonWidgetCommandContext::FRefractCommonWidgetCommandContext()
{
}

FRefractCommonWidgetCommandContext FRefractCommonWidgetCommandContext::Create(UUserWidget* InWidget, FInstancedStruct InPayload)
{
	FRefractCommonWidgetCommandContext Context;
	Context.SourceWidget   = InWidget;
	Context.OwningPlayer   = InWidget ? InWidget->GetOwningPlayer() : nullptr;
	Context.LocalPlayer    = Context.OwningPlayer ? Context.OwningPlayer->GetLocalPlayer() : nullptr;
	Context.PlayerPawn     = Context.OwningPlayer ? Context.OwningPlayer->GetPawn() : nullptr;
	Context.World          = InWidget ? InWidget->GetWorld() : nullptr;
	Context.GameInstance   = Context.World ? Context.World->GetGameInstance() : nullptr;
	Context.TriggerPayload = MoveTemp(InPayload);
	return Context;
}
