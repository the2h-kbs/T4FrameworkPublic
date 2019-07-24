// Copyright 2019 SoonBo Noh. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class Tech4DemoServerTarget : TargetRules
{
    // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

    public Tech4DemoServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;

        ExtraModuleNames.AddRange(
            new string[] {
                "Tech4Demo"
            }
        );
    }
}
