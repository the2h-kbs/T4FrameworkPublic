// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Classes/Assets/Entity/T4EntityTypes.h"
#include "Classes/Engine/DataTable.h"
#include "T4AnimSetDefinitionTable.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
USTRUCT()
struct FT4AnimSetDefinitionTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	ET4EntityType EntityType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FName SequenceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FString Description; 
};
