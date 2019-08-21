// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketSC.h"
#include "T4PacketSC_Action.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4PacketStoC::Attack
// ET4PacketStoC::Effect

USTRUCT()
struct FT4PacketAttackSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID SkillDataID;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID TargetObjectID; // #63 : 타겟이 있으면 먼저 체크! 없으면 Direct 을 사용한다.

	UPROPERTY(VisibleAnywhere)
	FVector TargetDirection; // #49

	UPROPERTY(VisibleAnywhere)
	float ProjectileDurationSec; // #63 : Range Attack 이라면 ProjectileSpeed 로 계산된 Duration 시간이 넘어온다.

public:
	FT4PacketAttackSC()
		: FT4PacketStoC(ET4PacketStoC::Attack)
		, TargetDirection(FVector::ZeroVector)
		, ProjectileDurationSec(0.0f)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		if (!TargetObjectID.IsValid() && TargetDirection.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid Target ObjectID or Direction!");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:Attack"));
	}
};

USTRUCT()
struct FT4PacketEffectDirectSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID EffectDataID;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID AttackerObjectID;

public:
	FT4PacketEffectDirectSC()
		: FT4PacketStoC(ET4PacketStoC::EffectDirect)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:EffectDirect"));
	}
};

USTRUCT()
struct FT4PacketEffectAreaSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FVector TargetLocation; // #68 : area attack

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID EffectDataID;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID AttackerObjectID;

public:
	FT4PacketEffectAreaSC()
		: FT4PacketStoC(ET4PacketStoC::EffectArea)
		, TargetLocation(FVector::ZeroVector)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (TargetLocation.IsNearlyZero())
		{
			OutMsg = TEXT("Invalid ObjectID");
			return false;
		}
		return true;
	}

	FString ToString() const override
	{
		return FString(TEXT("SC_Packet:EffectArea"));
	}
};
