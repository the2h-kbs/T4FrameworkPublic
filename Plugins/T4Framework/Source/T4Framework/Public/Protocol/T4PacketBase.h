// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketTypes.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "T4PacketBase.generated.h"

/**
  *
 */
USTRUCT()
struct T4FRAMEWORK_API FT4PacketCtoS
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	ET4PacketCtoS PacketCS;

public:
	FT4PacketCtoS()
		: PacketCS(ET4PacketCtoS::None)
	{
	}

	FT4PacketCtoS(ET4PacketCtoS InPacketCS)
		: PacketCS(InPacketCS)
	{
	}

	virtual ~FT4PacketCtoS() {}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("CS_Packet:None"));
	}
};

USTRUCT()
struct T4FRAMEWORK_API FT4PacketStoC
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	ET4PacketStoC PacketSC;

public:
	FT4PacketStoC()
		: PacketSC(ET4PacketStoC::None)
	{
	}

	FT4PacketStoC(ET4PacketStoC InPacketSC)
		: PacketSC(InPacketSC)
	{
	}

	virtual ~FT4PacketStoC() {}

	virtual bool Validate(FString& OutMsg)
	{
		return true;
	}

	virtual FString ToString() const
	{
		return FString(TEXT("SC_Packet:None"));
	}
};
