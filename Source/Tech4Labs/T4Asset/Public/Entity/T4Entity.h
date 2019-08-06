// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/Entity/T4EntityTypes.h"
#include "Public/Entity/T4EntityKey.h"

/**
  * #35 
 */
class UT4EntityAsset;
// #T4_ADD_ENTITY_TAG
class UT4WorldEntityAsset;
class UT4CharacterEntityAsset;
class UT4PropEntityAsset;
class UT4ItemEntityAsset;
class UT4CostumeEntityAsset; // #37
class UT4WeaponEntityAsset;
class T4ASSET_API IT4EntityManager
{
public:
	virtual ~IT4EntityManager() {}

	virtual bool Initialize(const TArray<FString>& InEntityPaths) = 0;
	virtual void Finalize() = 0;

	virtual void Reset() = 0;

	virtual const UT4EntityAsset* GetEntity(const FT4EntityKey& InKey) = 0;
	virtual const UT4EntityAsset* GetEntity(const FSoftObjectPath& InPath) = 0;
	
	// #T4_ADD_ENTITY_TAG
	virtual const UT4WorldEntityAsset* GetWorldEntity(const FT4EntityKey& InKey) = 0;
	virtual const UT4WorldEntityAsset* GetWorldEntity(const FSoftObjectPath& InPath) = 0;

	virtual const UT4CharacterEntityAsset* GetActorEntity(const FT4EntityKey& InKey) = 0;
	virtual const UT4CharacterEntityAsset* GetActorEntity(const FSoftObjectPath& InPath) = 0;

	virtual const UT4PropEntityAsset* GetPropEntity(const FT4EntityKey& InKey) = 0;
	virtual const UT4PropEntityAsset* GetPropEntity(const FSoftObjectPath& InPath) = 0;

	virtual const UT4ItemEntityAsset* GetItemEntity(const FT4EntityKey& InKey) = 0;
	virtual const UT4ItemEntityAsset* GetItemEntity(const FSoftObjectPath& InPath) = 0;

	virtual const UT4CostumeEntityAsset* GetCostumeEntity(const FT4EntityKey& InKey) = 0; // #37
	virtual const UT4CostumeEntityAsset* GetCostumeEntity(const FSoftObjectPath& InPath) = 0; // #37

	virtual const UT4WeaponEntityAsset* GetWeaponEntity(const FT4EntityKey& InKey) = 0;
	virtual const UT4WeaponEntityAsset* GetWeaponEntity(const FSoftObjectPath& InPath) = 0;
};

T4ASSET_API IT4EntityManager* T4EngineEntityManagerGet();