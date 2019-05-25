// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4PacketHandler_CS.h"

#include "Network/Protocol/T4PacketCS_Status.h"
#include "Network/Protocol/T4PacketSC_Status.h"

#include "GameDB/T4GameDB.h"

#include "T4Engine/Public/T4Engine.h"
#include "T4Core/Public/T4CoreMinimal.h"

#include "T4GameplayInternal.h"

/**
  *
 */
// #27
// #T4_ADD_PACKET_TAG

void FT4PacketHandlerCS::HandleCS_Equip(const FT4PacketEquipCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Equip == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Equip '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBItemRow* ItemData = GameDB.GetItemRowByName(InPacket->ItemNameID);
	if (nullptr == ItemData)
	{
		return;
	}

	FT4PacketEquipSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.ItemNameID = InPacket->ItemNameID;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_UnEquip(const FT4PacketUnEquipCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::UnEquip == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_UnEquip '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBItemRow* ItemData = GameDB.GetItemRowByName(InPacket->ItemNameID);
	if (nullptr == ItemData)
	{
		return;
	}

	FT4PacketUnEquipSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.ItemNameID = InPacket->ItemNameID;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

void FT4PacketHandlerCS::HandleCS_Exchange(const FT4PacketExchangeCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::Exchange == InPacket->PacketCS);

	IT4GameObject* SenderObject = GetGameObject(InPacket->SenderID);
	if (nullptr == SenderObject)
	{
		UE_LOG(
			LogT4Gameplay,
			Error,
			TEXT("[SL:%u] HandleCS_Exchange '%' failed. SenderObject not found."),
			uint32(LayerType),
			*(InPacket->ToString())
		);
		return;
	}

	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBItemRow* ItemData = GameDB.GetItemRowByName(InPacket->ItemNameID);
	if (nullptr == ItemData)
	{
		return;
	}

	FT4PacketExchangeSC NewPacketSC;
	NewPacketSC.ObjectID = InPacket->SenderID;
	NewPacketSC.ItemNameID = InPacket->ItemNameID;

	check(NewPacketSC.ObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}