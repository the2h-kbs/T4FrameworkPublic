// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Core/Public/T4CoreTypes.h"

/**
  *
 */
DECLARE_DELEGATE_OneParam(FT4LoadDelegate, UObject*);
class T4CORE_API IT4AssetLoadHandle
{
public:
	virtual ~IT4AssetLoadHandle() {}

	virtual void OnDestroy() = 0;

	virtual bool IsLoadFailed() const = 0;
	virtual bool IsLoadCompleted() const = 0;

	virtual bool GetLoadProgress() const = 0;

	virtual UObject* GetLoadedAsset() const = 0;
	virtual const FSoftObjectPath& GetObjectPath() const = 0;
};

class T4CORE_API IT4AssetLoader
{
public:
	virtual ~IT4AssetLoader() {}

	virtual bool Initialize() = 0;
	virtual void Finalize() = 0;

	virtual void Process(float InDeltaSeconds) = 0;

	virtual IT4AssetLoadHandle* RequestAsync(
		const FSoftObjectPath& InPath, 
		FT4LoadDelegate InLoadDelegate = FT4LoadDelegate()
	) = 0;
};

T4CORE_API IT4AssetLoader* GetT4AssetLoader();