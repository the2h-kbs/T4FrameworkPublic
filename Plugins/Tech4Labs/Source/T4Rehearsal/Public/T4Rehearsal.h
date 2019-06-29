// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "AssetTypeCategories.h"

/**
  *
 */
class IT4RehearsalModule : public IModuleInterface
{
public:
	static inline IT4RehearsalModule& Get()
	{
		return FModuleManager::LoadModuleChecked<IT4RehearsalModule>("T4Rehearsal");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("T4Rehearsal");
	}
};
