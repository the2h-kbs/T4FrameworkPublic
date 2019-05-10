// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4ContentEffectTable.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UT4ActionContiAsset;

USTRUCT()
struct FT4ContentEffectTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attribute)
	int32 UID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FGuid Guid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	TSoftObjectPtr<UT4ActionContiAsset> ContiAsset;
};
