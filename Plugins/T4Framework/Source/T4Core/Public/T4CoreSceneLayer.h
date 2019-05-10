// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4CoreTypes.h"

/**
  *
 */
class UWorld;
struct FWorldContext;

namespace FT4SceneLayer
{
	T4CORE_API bool AddMultiLayer(const FWorldContext* InWorldContext); // #30
	T4CORE_API void RemoveMultiLayer(const FName& InWorldContextName); // #30

	T4CORE_API ET4SceneLayer Get(const FWorldContext* InWorldContext);
	T4CORE_API ET4SceneLayer Get(const UWorld* InWorld);

	T4CORE_API bool CheckServer(const FWorldContext* InWorldContext); // #15

	FORCEINLINE bool IsClient(const ET4SceneLayer InSceneLayer) // #15
	{
		return (ET4SceneLayer::Client <= InSceneLayer && ET4SceneLayer::ClientMax > InSceneLayer) ? true : false;
	}

	FORCEINLINE bool IsServer(const ET4SceneLayer InSceneLayer) // #15
	{
		return (ET4SceneLayer::Server == InSceneLayer) ? true : false;
	}

	FORCEINLINE bool IsLevelEditor(const ET4SceneLayer InSceneLayer) // #17
	{
#if WITH_EDITOR
		if (ET4SceneLayer::LevelEditor == InSceneLayer)
		{
			return true;
		}
#endif
		return false;
	}

	FORCEINLINE bool IsPreview(const ET4SceneLayer InSceneLayer) // #30
	{
#if WITH_EDITOR
		if (ET4SceneLayer::Preview <= InSceneLayer && ET4SceneLayer::PreviewMax > InSceneLayer)
		{
			return true;
		}
#endif
		return false;
	}

	FORCEINLINE bool IsToolSide(const ET4SceneLayer InSceneLayer) // #30
	{
#if WITH_EDITOR
		if (IsPreview(InSceneLayer) || IsLevelEditor(InSceneLayer))
		{
			return true;
		}
#endif
		return false;
	}

	T4CORE_API ET4SceneLayer ConvertFromString(const FString& InLayerString);
	T4CORE_API const FString ConvertToString(ET4SceneLayer InSceneLayer);
}