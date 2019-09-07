// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketCS.h"
#include "T4PacketCS_Status.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_CS

// ET4PacketCtoS::Stance // #73
// ET4PacketCtoS::Equip
// ET4PacketCtoS::UnEquip
// ET4PacketCtoS::Exchange

USTRUCT()
struct FT4PacketStanceCS : public FT4PacketCtoS // #73
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FName StanceName; // TODO : Stance Table?

public:
	FT4PacketStanceCS()
		: FT4PacketCtoS(ET4PacketCtoS::Stance)
		, StanceName(NAME_None)
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
		return FString(TEXT("CS_Packet:Stance"));
	}
};

USTRUCT()
struct FT4PacketEquipCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID ItemWeaponDataID;

	UPROPERTY(VisibleAnywhere)
	bool bMainWeapon; // #48

public:
	FT4PacketEquipCS()
		: FT4PacketCtoS(ET4PacketCtoS::Equip)
		, bMainWeapon(false)
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
		return FString(TEXT("CS_Packet:Equip"));
	}
};

USTRUCT()
struct FT4PacketUnEquipCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID ItemWeaponDataID;

	UPROPERTY(VisibleAnywhere)
	bool bMainWeapon; // #48

public:
	FT4PacketUnEquipCS()
		: FT4PacketCtoS(ET4PacketCtoS::UnEquip)
		, bMainWeapon(false)
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
		return FString(TEXT("CS_Packet:UnEquip"));
	}
};

USTRUCT()
struct FT4PacketExchangeCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID ItemCostumeDataID;

public:
	FT4PacketExchangeCS()
		: FT4PacketCtoS(ET4PacketCtoS::Exchange)
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
		return FString(TEXT("CS_Packet:Exchange"));
	}
};