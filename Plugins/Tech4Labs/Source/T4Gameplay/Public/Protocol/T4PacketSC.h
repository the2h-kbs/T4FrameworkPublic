// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketTypes.h"

#include "Classes/GameTable/T4GameTableDataTypes.h" // #48

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
