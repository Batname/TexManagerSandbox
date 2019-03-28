// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TexManagerSandboxEditorTarget : TargetRules
{
	public TexManagerSandboxEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("TexManagerSandbox");
	}
}
