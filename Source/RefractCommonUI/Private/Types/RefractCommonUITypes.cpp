// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Types/RefractCommonUITypes.h"

FRefractDiscreteRotatorTriggerPayload::FRefractDiscreteRotatorTriggerPayload()
	: Direction(ERotatorDirection::Right)
	, Index(0)
	, PreviousIndex(0)
{
}

FRefractSliderTriggerPayload::FRefractSliderTriggerPayload()
	: Value(0)
	, PreviousValue(0)
{
}
