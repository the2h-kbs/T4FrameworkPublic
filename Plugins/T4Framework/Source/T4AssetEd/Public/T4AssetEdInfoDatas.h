// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if WITH_EDITOR
#include "Classes/InfoTables/T4AnimSequenceInfoTable.h" // #39
#endif

/**
  * #39
 */
#if WITH_EDITOR

class T4ASSETED_API IT4AnimSequenceInfoData
{
public:
	virtual ~IT4AnimSequenceInfoData() {}

	virtual bool Initialize(const FSoftObjectPath& InAnimSequenceInfoTablePath) = 0;
	virtual void Finalize() = 0;
};

T4ASSETED_API IT4AnimSequenceInfoData* T4AssetEdAnimSequenceInfoDataGet();

#endif