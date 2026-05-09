// Copyright (C) William Pimentel-Tonche. All rights reserved.

using System.Linq;
using UnrealBuildTool;

public class RefractCommon : ModuleRules
{
	public RefractCommon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		// --- FOUNDATION ---
		PublicDependencyModuleNames.AddRange([
			"CommonUI",
			"CommonInput",
			"Core",
			"DeveloperSettings",
			"GameplayTags"
		]);
		PrivateDependencyModuleNames.AddRange([
			"AssetRegistry",
			"ApplicationCore",
			"AudioMixer",
			"AudioModulation",
			"CoreUObject",
			"CommonLoadingScreen",
			"Engine",
			"EngineSettings",
			"GameplayAbilities",
			"Niagara",
			"RenderCore",
			"RHI",
			"Slate",
			"SlateCore",
			"UMG"
		]);

		PublicDependencyModuleNames = PublicDependencyModuleNames.Distinct().ToList();
		PrivateDependencyModuleNames = PrivateDependencyModuleNames.Distinct().ToList();
	}
}