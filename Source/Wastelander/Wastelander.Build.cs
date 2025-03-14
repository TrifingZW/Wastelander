// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Wastelander : ModuleRules
{
	public Wastelander(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			[
				"Core",
				"CoreUObject",
				"Engine",
				"UMG",
				"InputCore",
				"EnhancedInput",
				"SingularisInteraction",
				"SingularisVehicle"
			]
		);

		PrivateDependencyModuleNames.AddRange([]);

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}