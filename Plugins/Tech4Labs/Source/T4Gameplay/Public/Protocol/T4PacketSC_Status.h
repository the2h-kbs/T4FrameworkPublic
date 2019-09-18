// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketSC.h"
#include "T4PacketSC_Status.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG_SC

// ET4PacketStoC::Stance // #73
// ET4PacketStoC::Equip
// ET4PacketStoC::UnEquip
// ET4PacketStoC::Exchange
// ET4PacketStoC::Die // #76
// ET4PacketStoC::Resurrect // #76

USTRUCT()
struct FT4PacketStanceSC : public FT4PacketStoC // #73
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FName StanceName; // TODO : Stance Table?

public:
	FT4PacketStanceSC()
		: FT4PacketStoC(ET4PacketStoC::Stance)
		, StanceName(NAME_None)
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
		return FString(TEXT("SC_Packet:Stance"));
	}
};

USTRUCT()
struct FT4PacketEquipSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID ItemWeaponDataID;

	UPROPERTY(VisibleAnywhere)
	bool bMainWeapon; // #48

public:
	FT4PacketEquipSC()
		: FT4PacketStoC(ET4PacketStoC::Equip)
		, bMainWeapon(false)
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
		return FString(TEXT("SC_Packet:Equip"));
	}
};

USTRUCT()
struct FT4PacketUnEquipSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID ItemWeaponDataID;

	UPROPERTY(VisibleAnywhere)
	bool bMainWeapon; // #48

public:
	FT4PacketUnEquipSC()
		: FT4PacketStoC(ET4PacketStoC::UnEquip)
		, bMainWeapon(false)
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
		return FString(TEXT("SC_Packet:UnEquip"));
	}
};

USTRUCT()
struct FT4PacketExchangeSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FT4GameDataID ItemCostumeDataID;

public:
	FT4PacketExchangeSC()
		: FT4PacketStoC(ET4PacketStoC::Exchange)
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
		return FString(TEXT("SC_Packet:Exchange"));
	}
};

// #76
USTRUCT()
struct FT4PacketDieSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

	UPROPERTY(VisibleAnywhere)
	FName ReactionName;

	UPROPERTY(VisibleAnywhere)
	FT4ObjectID AttackerObjectID;

public:
	FT4PacketDieSC()
		: FT4PacketStoC(ET4PacketStoC::Die)
		, ReactionName(NAME_None)
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
		return FString(TEXT("SC_Packet:Die"));
	}
};

// #76
USTRUCT()
struct FT4PacketResurrectSC : public FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID ObjectID;

public:
	FT4PacketResurrectSC()
		: FT4PacketStoC(ET4PacketStoC::Resurrect)
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
		return FString(TEXT("SC_Packet:Resurrect"));
	}
};