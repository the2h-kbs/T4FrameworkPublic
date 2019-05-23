// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4AnimSequenceInfoTable.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
UENUM()
enum class ET4AnimSequenceCategory : uint8
{
	Player,
	NPC,
	FO,

	All
};

USTRUCT()
struct FT4AnimSequenceInfoRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	ET4AnimSequenceCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attribute)
	FString Description; 
};
