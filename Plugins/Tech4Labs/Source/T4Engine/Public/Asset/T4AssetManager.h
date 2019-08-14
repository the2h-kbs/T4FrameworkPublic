// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * http://api.unrealengine.com/KOR/Programming/Assets/AsyncLoading/
 */
class UObject;
DECLARE_DELEGATE_OneParam(FT4LoadDelegate, UObject*);
class T4ENGINE_API IT4AssetHandle
{
public:
	virtual ~IT4AssetHandle() {}

	virtual void OnDestroy() = 0;

	virtual bool IsLoadFailed() const = 0;
	virtual bool IsLoadCompleted() const = 0;

	virtual bool GetLoadProgress() const = 0;

	virtual UObject* GetLoadedAsset() const = 0;
	virtual const FSoftObjectPath& GetObjectPath() const = 0;
};

class T4ENGINE_API IT4AssetManager
{
public:
	virtual ~IT4AssetManager() {}

	virtual bool Initialize() = 0;
	virtual void Finalize() = 0;

	virtual void Process(float InDeltaTime) = 0;

	virtual IT4AssetHandle* RequestAsync(
		const FSoftObjectPath& InPath,
		FT4LoadDelegate InLoadDelegate = FT4LoadDelegate()
	) = 0;
};

T4ENGINE_API IT4AssetManager* T4AssetManagerGet();
