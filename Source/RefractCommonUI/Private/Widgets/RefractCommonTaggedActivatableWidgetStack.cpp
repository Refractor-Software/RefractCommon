// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Widgets/RefractCommonTaggedActivatableWidgetStack.h"

#include "RefractCommonUITags.h"

URefractCommonTaggedActivatableWidgetStack::URefractCommonTaggedActivatableWidgetStack(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	LayerTag = TAG_UI_Layer;
}

FGameplayTag URefractCommonTaggedActivatableWidgetStack::GetLayerTag() const
{
	return LayerTag;
}
