// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #39
 */
#if WITH_EDITOR

enum ET4AnimSetNameTableType
{
	BaseBlendSpace,
	SystemSection,
	SkillSection,

	Nums,
};

struct FT4NameInfo
{
	FName Name;
	FString Description;
};

class T4ASSETED_API IT4AnimSetNameTable
{
public:
	virtual ~IT4AnimSetNameTable() {}

	virtual bool LoadNameTable(
		ET4AnimSetNameTableType InNameTable,
		const FSoftObjectPath& InNameTablePath
	) = 0;

	virtual void Reset() = 0;

	virtual TArray<FT4NameInfo>& GetInfoDatas(ET4AnimSetNameTableType InNameTable) = 0;
};

T4ASSETED_API IT4AnimSetNameTable* T4AssetEdAnimSetNameTableGet();

#endif