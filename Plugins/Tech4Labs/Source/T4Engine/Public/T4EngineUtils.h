// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineTypes.h"

/**
  *
 */

namespace T4EngineUtil
{
#if !UE_BUILD_SHIPPING
	// #68
	T4ENGINE_API const FString GetActionPlaybackLongPackagePath(
		const FString& InFolderName
	);
	T4ENGINE_API const FString GetActionPlaybackAssetNameFromObjectPath(
		const FString& InObjectPathString
	);
	T4ENGINE_API const FString GetActionPlaybackLongPackageName(
		const FString& InAssetName, 
		const FString& InFolderName
	);
	// ~#68
#endif
}