// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayDataTypes.h"
#include "Classes/Engine/DataTable.h"
#include "T4GameTable_NPC.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
class UBehaviorTree;
class UT4CharacterEntityAsset;

USTRUCT()
struct FT4GameNPCTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category= Common)
	FName Name;

	UPROPERTY(EditAnywhere, Category= Common)
	FGuid Guid;

	UPROPERTY(EditAnywhere, Category= ServerOnly)
	TSoftObjectPtr<UBehaviorTree> BehaviorTreePath;

	UPROPERTY(EditAnywhere, Category = ClientOnly)
	TSoftObjectPtr<UT4CharacterEntityAsset> EntityAsset;

	UPROPERTY(EditAnywhere, Category = All)
	FT4GameItemWeaponDataID MainWeaponDataID; // #50

	UPROPERTY(EditAnywhere, Category = ServerOnly)
	float SensoryRange; // #50

public:
	FT4GameNPCTableRow()
		: SensoryRange(1000.0f)
	{
	}
};
