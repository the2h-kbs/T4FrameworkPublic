// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4PacketTypes.h"

#include "Classes/GameTable/T4GameTableDataTypes.h" // #48

#include "T4Engine/Public/T4EngineTypes.h"

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