// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "AssetTypeCategories.h"

/**
  *
 */
class IT4RehearsalEdModule : public IModuleInterface
{
public:
	static inline IT4RehearsalEdModule& Get()
	{
		return FModuleManager::LoadModuleChecked<IT4RehearsalEdModule>("T4RehearsalEd");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("T4RehearsalEd");
	}
};
