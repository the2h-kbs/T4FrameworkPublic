// Copyright 2019 SoonBo Noh. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4Asset : ModuleRules
	{
        // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/TargetFiles/

        public T4Asset(ReadOnlyTargetRules Target) : base(Target)
		{
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateIncludePaths.AddRange(
				new string[] {
                    "T4Asset/Private",
					// ... add other private include paths required here ...
				}
			);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine"
                }
            );

            if (Target.bBuildEditor == true)
            {
                PrivateDependencyModuleNames.Add("UnrealEd");
            }
        }
	}
}
