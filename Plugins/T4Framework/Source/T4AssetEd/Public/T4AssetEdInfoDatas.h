// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineTypes.h"

/**
  * #39
 */
#if WITH_EDITOR

struct FT4AnimSequenceDesc
{
	FName Name;
	FString Description;
};

class T4ASSETED_API IT4AnimSequenceInfoData
{
public:
	virtual ~IT4AnimSequenceInfoData() {}

	virtual bool Initialize(const FSoftObjectPath& InAnimSequenceInfoTablePath) = 0;
	virtual void Finalize() = 0;

	virtual TArray<FT4AnimSequenceDesc>& GetInfoDatas(ET4AnimSequenceCategory InCategory) = 0;
};

T4ASSETED_API IT4AnimSequenceInfoData* T4AssetEdAnimSequenceInfoDataGet();

#endif