// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  * #39
 */
#if WITH_EDITOR

struct FT4AnimSequenceDesc
{
	FName Name;
	FString Description;
};

class T4ASSETED_API IT4AnimSequenceDescription
{
public:
	virtual ~IT4AnimSequenceDescription() {}

	virtual bool Initialize(const FSoftObjectPath& InAnimSequenceDescTablePath) = 0;
	virtual void Finalize() = 0;

	virtual TArray<FT4AnimSequenceDesc>& GetInfoDatas() = 0;
};

T4ASSETED_API IT4AnimSequenceDescription* T4AssetEdAnimSequenceDescriptionGet();

#endif