// Copyright 2019 SoonBo Noh. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class T4RehearsalEditor : ModuleRules
	{
		public T4RehearsalEditor(ReadOnlyTargetRules Target) : base(Target)
		{
            // http://api.unrealengine.com/KOR/Programming/UnrealBuildSystem/IWYUReferenceGuide/
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PrivateDependencyModuleNames.AddRange(
				new string[]
				{
                    "ApplicationCore",
                    "AppFramework",
                    "Core",
                    "CoreUObject",
                    "RenderCore",
                    "Json",
                    "JsonUtilities",
                    "Engine",
                    "EngineSettings",
                    "Slate",
                    "SlateCore",
                    "EditorStyle",
                    "InputCore",
                    "UnrealEd",
                    "Landscape",
					"GraphEditor",
					"LevelEditor",
                    "PropertyEditor",
                    "DesktopPlatform",
                    "MainFrame",
                    "Projects",
                    "MovieScene",
                    "Sequencer",
                    "FoliageEdit",
                    "Foliage",
                    "AdvancedPreviewScene",
                    "MovieSceneTools",
                    "MovieSceneTracks",
                    "LandscapeEditor",
                    "NavigationSystem",
                    "MaterialUtilities",
                    "MeshDescription",
                    "SourceControl",
					"SourceControlWindows",
                    "RHI"
                }
			);

            PublicDependencyModuleNames.AddRange(
                new string[] {
                    "T4Asset",
                    "T4Engine",
                    "T4Framework",
                    "T4Gameplay"
                }
            );
        }
	}
}
