// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

/**
 * The public interface to this module
 */
class IT4GameplayModule : public IModuleInterface
{
public:
	static inline IT4GameplayModule& Get()
	{
		return FModuleManager::LoadModuleChecked<IT4GameplayModule>("T4Gameplay");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("T4Gameplay");
	}
};
