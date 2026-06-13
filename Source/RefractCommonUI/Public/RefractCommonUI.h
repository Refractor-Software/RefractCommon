// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "Modules/ModuleManager.h"

class FRefractCommonUIModule : public IModuleInterface
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
