// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4GameplayModule.h"
#include "T4GameplayMain.h"
#include "Public/T4Gameplay.h"

#include "T4GameplayInternal.h"

class FT4GameplayModule : public IT4GameplayModule
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FT4GameplayModule::StartupModule()
{
	GetGameplayMain().Initialize();
}

void FT4GameplayModule::ShutdownModule()
{
	GetGameplayMain().Finalize();
}

IMPLEMENT_MODULE(FT4GameplayModule, T4Gameplay)
DEFINE_LOG_CATEGORY(LogT4Gameplay)
