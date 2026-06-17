// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Types/RefractDiscreteRotatorCommand.h"

#include "CommonRotator.h"
#include "RefractCommonUI.h"
#include "Utility/RefractLogging.h"

FRefractDiscreteRotatorCommand::~FRefractDiscreteRotatorCommand()
{
}

void FRefractDiscreteRotatorCommand::Execute(const ERotatorDirection Direction, const int32 Index, const int32 PreviousIndex)
{
	REFRACT_LOG_USTRUCT_ARGS(LogRefractCommonUI, Display, "Rotator moved %s, was index %d, now index %d",
		Direction == ERotatorDirection::Left ? TEXT("Left") : TEXT("Right"), PreviousIndex, Index);
}
