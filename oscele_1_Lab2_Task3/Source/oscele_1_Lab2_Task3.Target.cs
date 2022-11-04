// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class oscele_1_Lab2_Task3Target : TargetRules
{
	public oscele_1_Lab2_Task3Target( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "oscele_1_Lab2_Task3" } );
	}
}
