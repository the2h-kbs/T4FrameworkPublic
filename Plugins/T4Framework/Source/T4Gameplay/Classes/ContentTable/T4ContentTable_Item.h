// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4ContentTable_Item.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UBehaviorTree;
class UBlackboardData;
class UT4ItemEntityAsset;

USTRUCT()
struct FT4ContentItemTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	int32 UID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FGuid Guid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Asset)
	TSoftObjectPtr<UT4ItemEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FName EquipBoneOrSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Asset)
	TSoftObjectPtr<UBlackboardData> BlackboardDataPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Asset)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath;
};
