// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketCS.h"
#include "T4PacketCS_Action.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_CS

// ET4PacketCtoS::Attack

USTRUCT()
struct FT4PacketAttackCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID SkillDataID;

	UPROPERTY(VisibleAnywhere)
	FVector UseDirection; // #49

public:
	FT4PacketAttackCS()
		: FT4PacketCtoS(ET4PacketCtoS::Attack)
		, UseDirection(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (UseDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid UseDirection!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Attack"));
	}
};
