// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Engine/DataTable.h"
#include "T4AnimSequenceDescTable.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/DataDriven/
 */
USTRUCT()
struct FT4AnimSequenceDescTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Attribute)
	FName Name;

	UPROPERTY(EditAnywhere, Category=Attribute)
	FString Description; 
};
