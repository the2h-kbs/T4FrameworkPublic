// Copyright 2019 SoonBo Noh. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4Engine : ModuleRules
	{
        // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

        public T4Engine(ReadOnlyTargetRules Target) : base(Target)
		{
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateIncludePaths.AddRange(
				new string[] {
                    "T4Engine/Private",
					// ... add other private include paths required here ...
				}
			);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
                    "AIModule",
                    "NavigationSystem",
                    "T4Asset"
                }
            );

            if (Target.bBuildEditor == true)
            {
                PrivateDependencyModuleNames.Add("UnrealEd");
            }
        }
	}
}
