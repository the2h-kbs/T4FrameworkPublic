// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketBase.h"
#include "T4PacketCS.h"
#include "T4PacketCS_Action.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG

// ET4PacketCtoS::Attack

USTRUCT()
struct FT4PacketAttackCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FName SkillNameInTable;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID TargetObjectID;

public:
	FT4PacketAttackCS()
		: FT4PacketCtoS(ET4PacketCtoS::Attack)
		, SkillNameInTable(NAME_None)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Attack"));
	}
};
