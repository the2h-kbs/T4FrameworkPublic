// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "AssetTypeCategories.h"

/**
  *
 */
class IT4RehearsalEditorModule : public IModuleInterface
{
public:
	static inline IT4RehearsalEditorModule& Get()
	{
		return FModuleManager::LoadModuleChecked<IT4RehearsalEditorModule>("T4RehearsalEditor");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("T4RehearsalEditor");
	}
};
