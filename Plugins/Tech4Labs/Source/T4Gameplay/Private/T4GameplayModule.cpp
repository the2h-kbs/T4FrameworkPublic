// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayModule.h"
#include "T4GameplayMain.h"
#include "Public/T4Gameplay.h"

#if WITH_EDITOR
#include "T4GameplaySettings.h" // #43
#include "ISettingsModule.h"
#endif

#include "T4GameplayInternal.h"

#define LOCTEXT_NAMESPACE "T4Gameplay"

/**
  * #43
 */
class FT4GameplayModule : public IT4GameplayModule
{
public:
	void StartupModule() override;
	void ShutdownModule() override;
};

void FT4GameplayModule::StartupModule()
{
	GetGameplayMain().Initialize();

	// #43
#if WITH_EDITOR
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (nullptr != SettingsModule)
	{
		SettingsModule->RegisterSettings(
			"Editor", 
			"Tech4Labs", 
			"T4Gameplay",
			LOCTEXT("T4GameplaySettings", "T4Gameplay"),
			LOCTEXT("T4GameplaySettingsDescription", "Configure T4Gameplay editing features."),
			GetMutableDefault<UT4GameplaySettings>()
		);
	}
#endif
}

void FT4GameplayModule::ShutdownModule()
{
	// #43
#if WITH_EDITOR
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (nullptr != SettingsModule)
	{
		SettingsModule->UnregisterSettings("Editor", "Tech4Labs", "T4Gameplay");
	}
#endif

	GetGameplayMain().Finalize();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FT4GameplayModule, T4Gameplay)
DEFINE_LOG_CATEGORY(LogT4Gameplay)
