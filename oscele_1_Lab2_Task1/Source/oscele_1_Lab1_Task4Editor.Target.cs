// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class oscele_1_Lab1_Task4EditorTarget : TargetRules
{
	public oscele_1_Lab1_Task4EditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "oscele_1_Lab1_Task4" } );
	}
}
