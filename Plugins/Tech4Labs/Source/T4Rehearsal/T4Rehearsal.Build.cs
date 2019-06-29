// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4Rehearsal : ModuleRules
	{
		public T4Rehearsal(ReadOnlyTargetRules Target) : base(Target)
		{
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PrivateDependencyModuleNames.AddRange(
				new string[]
				{
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "Slate",
                    "SlateCore",
                    "EditorStyle",
                    "InputCore",
                    "UnrealEd",
                    "LevelEditor",
                    "PropertyEditor",
                    "MovieScene",
                    "Sequencer",
                    "AdvancedPreviewScene",
                    "MovieSceneTools",
                    "MovieSceneTracks",
                    "NavigationSystem"
                }
			);

            PublicDependencyModuleNames.AddRange(
                new string[] {
                    "T4Core",
                    "T4Engine",
                    "T4Framework",
                    "T4Gameplay"
                }
            );
        }
	}
}
