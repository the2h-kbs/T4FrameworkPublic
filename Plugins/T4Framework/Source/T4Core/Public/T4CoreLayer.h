// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4CoreTypes.h"

/**
  *
 */
class UWorld;
struct FWorldContext;

namespace T4Layer
{
	T4CORE_API bool AddMultiLayer(const FWorldContext* InWorldContext); // #30
	T4CORE_API void RemoveMultiLayer(const FName& InWorldContextName); // #30

	T4CORE_API ET4LayerType Get(const FWorldContext* InWorldContext);
	T4CORE_API ET4LayerType Get(const UWorld* InWorld);

	T4CORE_API bool CheckServer(const FWorldContext* InWorldContext); // #15

	FORCEINLINE bool IsClient(const ET4LayerType InLayerType) // #15
	{
		return (ET4LayerType::Client <= InLayerType && ET4LayerType::ClientMax > InLayerType) ? true : false;
	}

	FORCEINLINE bool IsServer(const ET4LayerType InLayerType) // #15
	{
		return (ET4LayerType::Server == InLayerType) ? true : false;
	}

	FORCEINLINE bool IsLevelEditor(const ET4LayerType InLayerType) // #17
	{
#if WITH_EDITOR
		if (ET4LayerType::LevelEditor == InLayerType)
		{
			return true;
		}
#endif
		return false;
	}

	FORCEINLINE bool IsPreview(const ET4LayerType InLayerType) // #30
	{
#if WITH_EDITOR
		if (ET4LayerType::Preview <= InLayerType && ET4LayerType::PreviewMax > InLayerType)
		{
			return true;
		}
#endif
		return false;
	}

	FORCEINLINE bool IsToolSide(const ET4LayerType InLayerType) // #30
	{
#if WITH_EDITOR
		if (IsPreview(InLayerType) || IsLevelEditor(InLayerType))
		{
			return true;
		}
#endif
		return false;
	}

	T4CORE_API ET4LayerType ConvertFromString(const FString& InLayerString);
	T4CORE_API const FString ConvertToString(ET4LayerType InLayerType);
}