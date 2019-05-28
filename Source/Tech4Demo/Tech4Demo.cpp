// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Tech4Demo.h"
#include "Modules/ModuleManager.h"

/**
  * http://api.unrealengine.com/KOR/Programming/Modules/Gameplay/
 */
class FTech4DemoModuleImpl : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override {}
	virtual void ShutdownModule() override {}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FTech4DemoModuleImpl, Tech4Demo, "Tech4Demo");
DEFINE_LOG_CATEGORY(LogT4Demo);