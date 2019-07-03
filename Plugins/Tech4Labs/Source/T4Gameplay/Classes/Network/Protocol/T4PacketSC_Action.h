// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketSC.h"
#include "T4PacketSC_Action.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG

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
	FVector UseDirection; // #49

public:
	FT4PacketAttackSC()
		: FT4PacketStoC(ET4PacketStoC::Attack)
	{
	}

	bool Validate(FString& OutMsg) override
	{
		if (!ObjectID.IsValid())
		{
			OutMsg = TEXT("Invalid ObjectID");
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
		return FString(TEXT("SC_Packet:Attack"));
	}
};

USTRUCT()
struct FT4PacketEffectSC : public FT4PacketStoC
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
	FT4PacketEffectSC()
		: FT4PacketStoC(ET4PacketStoC::Effect)
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
		return FString(TEXT("SC_Packet:Effect"));
	}
};
