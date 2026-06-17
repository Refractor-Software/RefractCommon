// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

using UnrealBuildTool;

public class RefractCommonUI : ModuleRules
{
	public RefractCommonUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange([
			"CommonUI",
			"CommonInput",
			"Core",
			"DeveloperSettings",
			"EnhancedInput",
			"GameplayTags",
			"InputCore",
			"ModelViewViewModel",
			"UMG"
		]);

		PrivateDependencyModuleNames.AddRange([
			"RefractCommon",
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore"
		]);
	}
}
