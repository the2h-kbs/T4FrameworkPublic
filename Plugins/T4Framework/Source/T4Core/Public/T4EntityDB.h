// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityTypes.h"

/**
  * #35 
 */
class UT4EntityAsset;
class UT4WorldEntityAsset;
class UT4ActorEntityAsset;
class UT4PropEntityAsset;
class UT4ItemEntityAsset;
class T4CORE_API IT4EntityDB
{
public:
	virtual ~IT4EntityDB() {}

	virtual bool Initialize(const TArray<FString>& InEntityPaths) = 0;
	virtual void Finalize() = 0;

	virtual void Reset() = 0;

	virtual const UT4EntityAsset* GetEntityAsset(const FT4EntityKey& InKey) = 0;
	virtual const UT4EntityAsset* GetEntityAsset(const FSoftObjectPath& InPath) = 0;
	
	virtual const UT4WorldEntityAsset* GetWorldEntityAsset(const FT4EntityKey& InKey) = 0;
	virtual const UT4WorldEntityAsset* GetWorldEntityAsset(const FSoftObjectPath& InPath) = 0;

	virtual const UT4ActorEntityAsset* GetActorEntityAsset(const FT4EntityKey& InKey) = 0;
	virtual const UT4ActorEntityAsset* GetActorEntityAsset(const FSoftObjectPath& InPath) = 0;

	virtual const UT4PropEntityAsset* GetPropEntityAsset(const FT4EntityKey& InKey) = 0;
	virtual const UT4PropEntityAsset* GetPropEntityAsset(const FSoftObjectPath& InPath) = 0;

	virtual const UT4ItemEntityAsset* GetItemEntityAsset(const FT4EntityKey& InKey) = 0;
	virtual const UT4ItemEntityAsset* GetItemEntityAsset(const FSoftObjectPath& InPath) = 0;
};

T4CORE_API IT4EntityDB* GetEntityDB();