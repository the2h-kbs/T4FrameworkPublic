// Copyright 2019 SoonBo Noh. All Rights Reserved.

using UnrealBuildTool;

public class Tech4Demo : ModuleRules
{
	public Tech4Demo(ReadOnlyTargetRules Target) : base(Target)
	{
        // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(
            new string[] 
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "T4Asset",
                "T4Core",
                "T4Engine",
                "T4Framework"
            }
        );

        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.Add("UnrealEd");
        }

        PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
