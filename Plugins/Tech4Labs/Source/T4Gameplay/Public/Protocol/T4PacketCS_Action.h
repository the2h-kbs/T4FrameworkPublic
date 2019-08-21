// Copyright 2019 SoonBo Noh. All Rights Reserved.

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
	FT4ObjectID TargetObjectID; // #63 : 타겟이 있으면 먼저 체크! 없으면 Direct 을 사용한다.

	UPROPERTY(VisibleAnywhere)
	FVector TargetLocation; // #68 : Area

	UPROPERTY(VisibleAnywhere)
	FVector TargetDirection; // #49

public:
	FT4PacketAttackCS()
		: FT4PacketCtoS(ET4PacketCtoS::Attack)
		, TargetLocation(FVector::ZeroVector)
		, TargetDirection(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!SenderID.IsValid())
		{
			OutMsg = TEXT("Invalid Send ObjectID!");
			return false;
		}
		if (!TargetObjectID.IsValid() && TargetLocation.IsNearlyZero() && TargetDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid Target ObjectID or Location or Direction!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("CS_Packet:Attack"));
	}
};
