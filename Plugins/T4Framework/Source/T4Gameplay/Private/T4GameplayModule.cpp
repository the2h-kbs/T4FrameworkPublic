// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameplayModule.h"
#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayMain.h"

#include "T4Framework/Public/T4Framework.h"

#include "T4GameplayInternal.h"

class FT4GameplayModule : public IT4GameplayModule
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void HandleSetDefaultGameplay(IT4GameFramework* InGameFramework);
};

void FT4GameplayModule::StartupModule()
{
	// #42
	T4FrameworkRegisterDefaultGameplayDelegateGet().BindRaw(this, &FT4GameplayModule::HandleSetDefaultGameplay);
}

void FT4GameplayModule::ShutdownModule()
{
}

void FT4GameplayModule::HandleSetDefaultGameplay(IT4GameFramework* InGameFramework)
{
	// #42
	FT4GameplayMain* NewGameplayMain = new FT4GameplayMain;
	check(nullptr != NewGameplayMain);
	InGameFramework->RegisterGameplayHandler(NewGameplayMain); // #42 : GameFramework 소멸 시 인스턴스가 소멸된다!!
}

IMPLEMENT_MODULE(FT4GameplayModule, T4Gameplay)
DEFINE_LOG_CATEGORY(LogT4Gameplay)
