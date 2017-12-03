// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GameJam_RecnPlay2017EditorTarget : TargetRules
{
	public GameJam_RecnPlay2017EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("GameJam_RecnPlay2017");
	}
}
