// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class oscele_1_Lab2_Task3EditorTarget : TargetRules
{
	public oscele_1_Lab2_Task3EditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "oscele_1_Lab2_Task3" } );
	}
}
