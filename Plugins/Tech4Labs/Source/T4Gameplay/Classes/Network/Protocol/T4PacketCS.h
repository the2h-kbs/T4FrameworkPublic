// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineObjectID.h"
#include "Public/T4GameplayPacketTypes.h"
#include "Public/T4GameplayDataTypes.h" // #48
#include "T4PacketCS.generated.h"

/**
  *
 */
USTRUCT()
struct FT4PacketCtoS
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