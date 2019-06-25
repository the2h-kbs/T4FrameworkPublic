// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4GameplayPacketTypes.h"
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4PacketSC.generated.h"

/**
  *
 */
USTRUCT()
struct FT4PacketStoC
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
