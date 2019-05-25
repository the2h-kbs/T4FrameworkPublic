// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4ContentTable_Master.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
UENUM()
enum class ET4ContentTableType : uint32
{
	World,
	Player,
	NPC,
	FO,
	Item,

	Skill,
	Effect,

	Max,
};

USTRUCT()
struct FT4ContentMasterTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	ET4ContentTableType Type;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Attribute)
	TSoftObjectPtr<UDataTable> Table;
};
