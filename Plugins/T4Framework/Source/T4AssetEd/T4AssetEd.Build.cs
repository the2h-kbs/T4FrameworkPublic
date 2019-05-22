// Copyright 2019 Tech4 Labs. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4AssetEd : ModuleRules
	{
        // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

        public T4AssetEd(ReadOnlyTargetRules Target) : base(Target)
		{
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateIncludePaths.AddRange(
				new string[] {
                    "T4AssetEd/Private",
					// ... add other private include paths required here ...
				}
			);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
                    "T4Core",
                    "T4Engine",
                    "T4Framework",
                    "T4Gameplay"
                }
            );

            if (Target.bBuildEditor == true)
            {
                PrivateDependencyModuleNames.Add("UnrealEd");
                PrivateDependencyModuleNames.Add("AssetTools");
                PrivateDependencyModuleNames.Add("ContentBrowser");
            }
        }
	}
}
