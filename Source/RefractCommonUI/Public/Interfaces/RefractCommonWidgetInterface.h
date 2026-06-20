// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "UObject/Interface.h"
#include "RefractCommonWidgetInterface.generated.h"

UINTERFACE()
class URefractCommonWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Common interface for Refract Common UI widgets.
 */
class REFRACTCOMMONUI_API IRefractCommonWidgetInterface
{
	GENERATED_BODY()

public:
	template <typename T = UWidget>
	T* AsWidget()
	{
		static_assert(TIsDerivedFrom<T, UWidget>::Value, "Only use this to get this as a widget.");
		return Cast<T>(this);
	}
};
