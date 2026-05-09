// Copyright (C) William Pimentel-Tonche. All rights reserved.

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FRefractCommonModule"

class FRefractCommonModule : public IModuleInterface
{
	virtual void StartupModule() override
	{
	}

	virtual void ShutdownModule() override
	{
	}
};

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FRefractCommonModule, RefractCommon)
