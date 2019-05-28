// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
  *
 */
struct FT4PacketStoC;
struct FT4PacketCtoS;
class IT4PlayerController;
class T4GAMEPLAY_API IT4PacketHandlerSC
{
public:
	virtual ~IT4PacketHandlerSC() {}

	virtual bool OnSendPacket(FT4PacketStoC* InPacket, IT4PlayerController* InRecvPC) = 0;
	virtual bool OnBroadcastPacket(FT4PacketStoC* InPacket) = 0;

	virtual bool OnRecvPacket(const FT4PacketStoC* InPacket) = 0;
};

class T4GAMEPLAY_API IT4PacketHandlerCS
{
public:
	virtual ~IT4PacketHandlerCS() {}

	virtual bool OnSendPacket(FT4PacketCtoS* InPacket) = 0; // Client, Reliable

	virtual bool OnRecvPacket_Validation(const FT4PacketCtoS* InPacket) = 0;
	virtual bool OnRecvPacket(const FT4PacketCtoS* InPacket, IT4PlayerController* InSenderPC) = 0;
};
