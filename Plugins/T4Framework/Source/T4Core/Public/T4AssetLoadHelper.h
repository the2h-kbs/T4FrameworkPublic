// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4AssetLoader.h"

/**
  *
 */
class FT4AssetLoadHelper
{
public:
	explicit FT4AssetLoadHelper()
		: bSyncLoad(false)
		, bBindComplated(false)
		, LoadHandle(nullptr)
		, DebugToken(NAME_None)
	{
	}
	virtual ~FT4AssetLoadHelper()
	{
		Reset();
	}

	virtual void Reset()
	{
		if (nullptr != LoadHandle)
		{
			LoadHandle->OnDestroy();
			LoadHandle = nullptr;
		}
	}

	void Load(
		const FSoftObjectPath& InAssetPath,
		bool bInSyncLoad,
		const TCHAR* InDebugString
	)
	{
		bSyncLoad = bInSyncLoad;
		IT4AssetLoader* AssetLoader = GetT4AssetLoader();
		LoadHandle = AssetLoader->RequestAsync(InAssetPath);
		DebugToken = InDebugString;
	}

	FORCEINLINE bool IsLoadFailed() const
	{
		if (nullptr == LoadHandle)
		{
			return true;
		}
		return LoadHandle->IsLoadFailed();
	}

	FORCEINLINE bool IsLoadCompleted() const
	{
		if (nullptr == LoadHandle)
		{
			return false;
		}
		return LoadHandle->IsLoadCompleted();
	}

	FORCEINLINE bool IsBinded() const
	{ 
		return bBindComplated;
	}

	FORCEINLINE void SetBinded()
	{
		Reset();
		bBindComplated = true;
	}

	FORCEINLINE bool CheckReset() const
	{
		return (nullptr == LoadHandle) ? true : false;
	}

protected:
	bool bSyncLoad;
	bool bBindComplated;
	IT4AssetLoadHandle* LoadHandle;
	FName DebugToken;
};