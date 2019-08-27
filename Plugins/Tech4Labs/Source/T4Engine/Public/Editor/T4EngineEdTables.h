// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineEdTypes.h"

/**
  * #39
 */
#if WITH_EDITOR

struct FT4NameInfo
{
	FName Name;
	FString Description;
};

class T4ENGINE_API IT4EngineEdNameTable
{
public:
	virtual ~IT4EngineEdNameTable() {}

	virtual bool LoadNameTable(
		ET4EngineEdNameTable InNameTable,
		const FSoftObjectPath& InNameTablePath
	) = 0;

	virtual void Reset() = 0;

	virtual TArray<FT4NameInfo>& GetInfoDatas(ET4EngineEdNameTable InNameTable) = 0;

	virtual const FString GetNameDescription(
		ET4EngineEdNameTable InNameTable, 
		FName InName
	) = 0; // #71
};

T4ENGINE_API IT4EngineEdNameTable* T4EngineEdNameTableGet();

#endif