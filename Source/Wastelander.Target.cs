// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WastelanderTarget : TargetRules
{
	public WastelanderTarget(TargetInfo target) : base(target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		ExtraModuleNames.Add("Wastelander");
	}
}
