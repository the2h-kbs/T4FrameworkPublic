// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Engine/Public/T4EngineTypes.h"
#include "T4Engine/Public/Action/T4ActionKey.h"

/**
  * #68
 */
namespace T4ActionPlaybackAPI
{
#if !UE_BUILD_SHIPPING

	T4ENGINE_API bool IsPlaying(ET4LayerType InLayerType);
	T4ENGINE_API bool IsRecording(ET4LayerType InLayerType);

	T4ENGINE_API bool DoPlay(ET4LayerType InLayerType, const FString& InPlayAssetName, const FString& InPlayFolderName);
	T4ENGINE_API bool DoPlay(ET4LayerType InLayerType, const FSoftObjectPath& InPathPath);

	T4ENGINE_API bool DoRec(ET4LayerType InLayerType, const FString& InRecAssetName, const FString& InRecFolderName);
	T4ENGINE_API bool DoRec(ET4LayerType InLayerType, const FSoftObjectPath& InRecPath);

	T4ENGINE_API void StopPlaying(ET4LayerType InLayerType);
	T4ENGINE_API void StopRecording(ET4LayerType InLayerType);

	T4ENGINE_API bool IsPaused(ET4LayerType InLayerType);
	T4ENGINE_API void SetPlayPause(ET4LayerType InLayerType, bool bPause);

	T4ENGINE_API bool IsPlayerPossessed(ET4LayerType InLayerType);
	T4ENGINE_API void SetPlayerPossessed(ET4LayerType InLayerType, bool bPossess);

	T4ENGINE_API bool IsRepeat(ET4LayerType InLayerType);
	T4ENGINE_API void SetPlayRepeat(ET4LayerType InLayerType, bool bEnable);

	T4ENGINE_API const TCHAR* GetRecFileName(ET4LayerType InLayerType);

	T4ENGINE_API const FString GetLongPackagePath(const FString& InFolderName);
	T4ENGINE_API const FString GetAssetNameFromObjectPath(const FString& InObjectPathString);
	T4ENGINE_API const FString GetLongPackageName(const FString& InAssetName, const FString& InFolderName);

#endif
}