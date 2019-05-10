// Copyright 2019 Tech4 Labs. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Tech4DemoTarget : TargetRules
{
    // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

    public Tech4DemoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

        ExtraModuleNames.AddRange(
            new string[] {
                "Tech4Demo"
            } 
        );
	}
}
