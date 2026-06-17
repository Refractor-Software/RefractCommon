// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FRefractCommonGameSettingsModule : public IModuleInterface
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
