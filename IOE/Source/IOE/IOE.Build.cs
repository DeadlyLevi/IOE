// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

using System.Collections.Generic;
public class IOE : ModuleRules
{
	public IOE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "MotionWarping", "NetCore" });

		PublicIncludePaths.Add("IOE/");

		PrivateDependencyModuleNames.AddRange(new string[]{
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks"
		});
	}
}
