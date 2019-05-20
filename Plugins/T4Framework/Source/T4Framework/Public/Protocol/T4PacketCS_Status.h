// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketBase.h"
#include "T4PacketCS.h"
#include "T4PacketCS_Status.generated.h"

/**
  *
 */
 // #T4_ADD_PACKET_TAG

// ET4PacketCtoS::Equip
// ET4PacketCtoS::UnEquip
// ET4PacketCtoS::Exchange

USTRUCT()
struct T4FRAMEWORK_API FT4PacketEquipCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FName ItemNameInTable;

public:
	FT4PacketEquipCS()
		: FT4PacketCtoS(ET4PacketCtoS::Equip)
		, ItemNameInTable(NAME_None)
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
struct T4FRAMEWORK_API FT4PacketUnEquipCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FName ItemNameInTable;

public:
	FT4PacketUnEquipCS()
		: FT4PacketCtoS(ET4PacketCtoS::UnEquip)
		, ItemNameInTable(NAME_None)
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
struct T4FRAMEWORK_API FT4PacketExchangeCS : public FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FT4ObjectID SenderID;

	UPROPERTY(VisibleAnywhere)
	FName ItemNameInTable;

public:
	FT4PacketExchangeCS()
		: FT4PacketCtoS(ET4PacketCtoS::Exchange)
		, ItemNameInTable(NAME_None)
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