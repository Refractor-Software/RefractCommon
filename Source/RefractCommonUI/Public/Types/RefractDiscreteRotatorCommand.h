// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "RefractDiscreteRotatorCommand.generated.h"

enum class ERotatorDirection : uint8;

USTRUCT()
struct FRefractDiscreteRotatorCommand
{
	GENERATED_BODY()

	virtual ~FRefractDiscreteRotatorCommand();
	virtual void Execute(ERotatorDirection Direction, int32 Index, int32 PreviousIndex);
};
