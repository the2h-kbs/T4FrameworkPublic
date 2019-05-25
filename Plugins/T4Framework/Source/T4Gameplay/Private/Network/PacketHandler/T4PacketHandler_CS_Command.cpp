// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4PacketHandler_CS.h"

#include "Network/Protocol/T4PacketCS_Command.h"
#include "Network/Protocol/T4PacketSC_World.h"

#include "GameDB/T4GameDB.h"

#include "T4Framework/Classes/Player/T4PlayerController.h"
#include "T4Framework/Classes/AI/T4NPCAIController.h" // #31
#include "T4Framework/Classes/AI/T4FOAIController.h" // #41
#include "T4Framework/Classes/AI/T4ItemAIController.h" // #41
#include "T4Engine/Public/T4Engine.h"
#include "T4Core/Public/T4CoreMinimal.h"

#include "Classes/Engine/World.h"

#include "T4GameplayInternal.h"

/**
  *
 */
// #27
// #T4_ADD_PACKET_TAG

void FT4PacketHandlerCS::HandleCS_CmdChangeWorld(const FT4PacketCmdChangeWorldCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdChangeWorld == InPacket->PacketCS);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBWorldRow* WorldData = GameDB.GetWorldRowByName(InPacket->WorldNameID);
	if (nullptr == WorldData)
	{
		return;
	}

	FT4PacketChangeWorldSC NewPacketSC;
	NewPacketSC.WorldNameID = InPacket->WorldNameID;

	GetPacketHandlerSC()->OnRecvPacket(&NewPacketSC); // #15

#if WITH_EDITOR
	if (T4CoreLayer::IsToolSide(LayerType))
	{
		return; // WARN : #29, #17 : Only Editor LayerType
	}
#endif

	GetPacketHandlerSC()->OnBroadcastPacket(&NewPacketSC);
}

void FT4PacketHandlerCS::HandleCS_CmdPCEnter(
	const FT4PacketCmdPCEnterCS* InPacket,
	IT4PlayerController* InSenderPC
)
{
	check(nullptr != InPacket);
	check(nullptr != InSenderPC);
	check(ET4PacketCtoS::CmdPCEnter == InPacket->PacketCS);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBPlayerRow* CharacterData = GameDB.GetPlayerRowByName(InPacket->CharacterNameID);
	if (nullptr == CharacterData)
	{
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	const FT4ObjectID NewSpawnObjectID = GameFramework->GetNewUniqueObjectID();
	check(NewSpawnObjectID.IsValid());

	const bool bMyPCEntered = InPacket->bSetViewTarget;

	FT4PacketPCEnterSC NewPCEnterPacketSC;
	NewPCEnterPacketSC.EnterObjectID = NewSpawnObjectID;
	NewPCEnterPacketSC.CharacterNameID = InPacket->CharacterNameID;
	NewPCEnterPacketSC.SpawnLocation = InPacket->SpawnLocation;
	NewPCEnterPacketSC.SpawnRotation = InPacket->SpawnRotation;

	check(NewPCEnterPacketSC.EnterObjectID.IsValid());

	IT4PacketHandlerSC* PacketHandlerSC = GetPacketHandlerSC();
	check(nullptr != PacketHandlerSC);

	if (T4CoreLayer::IsServer(LayerType))
	{
		PacketHandlerSC->OnRecvPacket(&NewPCEnterPacketSC); // #15
		if (bMyPCEntered)
		{
			InSenderPC->SetTargetObject(NewSpawnObjectID);
		}
	}

	// #15 : 클라이언트 전파!
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		AT4PlayerController* TargetPC = Cast<AT4PlayerController>(*It);
		if (nullptr != TargetPC && TargetPC->HasAuthority())
		{
			if (bMyPCEntered && TargetPC == InSenderPC)
			{
				FT4PacketMyPCEnterSC NewMyPCEnterPacketSC;
				NewMyPCEnterPacketSC.EnterObjectID = NewSpawnObjectID;
				NewMyPCEnterPacketSC.CharacterNameID = InPacket->CharacterNameID;
				NewMyPCEnterPacketSC.SpawnLocation = InPacket->SpawnLocation;
				NewMyPCEnterPacketSC.SpawnRotation = InPacket->SpawnRotation;
				PacketHandlerSC->OnSendPacket(&NewMyPCEnterPacketSC, TargetPC);
			}
			else
			{
				PacketHandlerSC->OnSendPacket(&NewPCEnterPacketSC, TargetPC);
			}
		}
	}
}

void FT4PacketHandlerCS::HandleCS_CmdPCLeave(
	const FT4PacketCmdPCLeaveCS* InPacket,
	IT4PlayerController* InSenderPC
)
{
	check(nullptr != InPacket);
	check(nullptr != InSenderPC);
	check(ET4PacketCtoS::CmdPCLeave == InPacket->PacketCS);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	IT4GameObject* EnteredObject = GameWorld->FindObject(InPacket->LeaveObjectID);
	if (nullptr == EnteredObject)
	{
		check(false); // WARN: 없다? 지금은 에러!
	}
	{
		// TODO : 검증!
	}
	FT4PacketPCLeaveSC NewPacketSC;
	NewPacketSC.LeaveObjectID = InPacket->LeaveObjectID;

	check(NewPacketSC.LeaveObjectID.IsValid());

	if (T4CoreLayer::IsServer(LayerType))
	{
		if (InPacket->LeaveObjectID == InSenderPC->GetTargetObjectID())
		{
			InSenderPC->ClearTargetObject(true);
		}
	}

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

// #31
void FT4PacketHandlerCS::HandleCS_CmdNPCEnter(const FT4PacketCmdNPCEnterCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdNPCEnter == InPacket->PacketCS);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBNPCRow* NPCData = GameDB.GetNPCRowByName(InPacket->NPCNameID);
	if (nullptr == NPCData)
	{
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	FT4NetID NewNetID; // #41

#if (WITH_EDITOR || WITH_SERVER_CODE)
	// #31 : NPCAI
	AAIController* NewAI = DoStartSpawnAIController(
		AT4NPCAIController::StaticClass(),
		InPacket->SpawnLocation,
		InPacket->SpawnRotation
	);
	check(nullptr != NewAI);
	{
		AT4NPCAIController* NPCController = Cast<AT4NPCAIController>(NewAI);
		if (nullptr == NPCController)
		{
			check(false); // ???
			return;
		}

		// #31 : NPC는 Spawn 시점에, Player 는 StartPlay 시점에 UniqueID 발급!
		NewNetID = GameFramework->GetNewUniqueNetID();
		NPCController->SetNetID(NewNetID);

		const FSoftObjectPath BlackboardDataPath = NPCData->RawData.BlackboardDataPath.ToSoftObjectPath();
		if (!BlackboardDataPath.IsValid())
		{
			check(false); // ???
			return;
		}
		const FSoftObjectPath BehaviorTreePath = NPCData->RawData.BehaviorTreePath.ToSoftObjectPath();
		if (!BehaviorTreePath.IsValid())
		{
			check(false); // ???
			return;
		}
		bool bBinded = NPCController->SetTableData(
			InPacket->NPCNameID,
			BehaviorTreePath,
			BlackboardDataPath
		);
		if (!bBinded)
		{
			check(false); // ???
			return;
		}

		DoFinishSpawningAIController(NewAI, InPacket->SpawnLocation, InPacket->SpawnRotation);
	}
#endif

	FT4PacketNPCEnterSC NewPacketSC;
	NewPacketSC.NetID = NewNetID;
	NewPacketSC.EnterObjectID = GameFramework->GetNewUniqueObjectID();
	NewPacketSC.NPCNameID = InPacket->NPCNameID;
	NewPacketSC.SpawnLocation = InPacket->SpawnLocation;
	NewPacketSC.SpawnRotation = InPacket->SpawnRotation;

	check(NewPacketSC.EnterObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

// #31
void FT4PacketHandlerCS::HandleCS_CmdNPCLeave(const FT4PacketCmdNPCLeaveCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdNPCLeave == InPacket->PacketCS);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	IT4GameObject* EnteredObject = GameWorld->FindObject(InPacket->LeaveObjectID);
	if (nullptr == EnteredObject)
	{
		check(false); // WARN: 없다? 지금은 에러!
	}
	{
		// TODO : 검증!
	}

	FT4PacketNPCLeaveSC NewPacketSC;
	NewPacketSC.LeaveObjectID = InPacket->LeaveObjectID;

	check(NewPacketSC.LeaveObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

// #31
void FT4PacketHandlerCS::HandleCS_CmdFOEnter(const FT4PacketCmdFOEnterCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdFOEnter == InPacket->PacketCS);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBFORow* FOData = GameDB.GetFORowByName(InPacket->FONameID);
	if (nullptr == FOData)
	{
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	FT4NetID NewNetID; // #41

#if (WITH_EDITOR || WITH_SERVER_CODE)
	// #41 : Item/FO AI
	AAIController* NewAI = DoStartSpawnAIController(
		AT4FOAIController::StaticClass(),
		InPacket->SpawnLocation,
		InPacket->SpawnRotation
	);
	check(nullptr != NewAI);
	{
		AT4FOAIController* FOController = Cast<AT4FOAIController>(NewAI);
		if (nullptr == FOController)
		{
			check(false); // ???
			return;
		}

		// #31 : NPC는 Spawn 시점에, Player 는 StartPlay 시점에 UniqueID 발급!
		NewNetID = GameFramework->GetNewUniqueNetID();
		FOController->SetNetID(NewNetID);

		const FSoftObjectPath BlackboardDataPath = FOData->RawData.BlackboardDataPath.ToSoftObjectPath();
		if (!BlackboardDataPath.IsValid())
		{
			check(false); // ???
			return;
		}
		const FSoftObjectPath BehaviorTreePath = FOData->RawData.BehaviorTreePath.ToSoftObjectPath();
		if (!BehaviorTreePath.IsValid())
		{
			check(false); // ???
			return;
		}

		bool bBinded = FOController->SetTableData(
			InPacket->FONameID,
			BehaviorTreePath,
			BlackboardDataPath
		);
		if (!bBinded)
		{
			check(false); // ???
			return;
		}
	
		DoFinishSpawningAIController(NewAI, InPacket->SpawnLocation, InPacket->SpawnRotation);
	}
#endif

	const FT4ObjectID NewSpawnObjectID = GameFramework->GetNewUniqueObjectID();
	FT4PacketFOEnterSC NewPacketSC;
	NewPacketSC.NetID = NewNetID; // #41
	NewPacketSC.EnterObjectID = NewSpawnObjectID;
	NewPacketSC.FONameID = InPacket->FONameID;
	NewPacketSC.SpawnLocation = InPacket->SpawnLocation;
	NewPacketSC.SpawnRotation = InPacket->SpawnRotation;

	check(NewPacketSC.EnterObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

// #31
void FT4PacketHandlerCS::HandleCS_CmdFOLeave(const FT4PacketCmdFOLeaveCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdFOLeave == InPacket->PacketCS);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	IT4GameObject* EnteredObject = GameWorld->FindObject(InPacket->LeaveObjectID);
	if (nullptr == EnteredObject)
	{
		check(false); // WARN: 없다? 지금은 에러!
	}
	{
		// TODO : 검증!
	}

	FT4PacketFOLeaveSC NewPacketSC;
	NewPacketSC.LeaveObjectID = InPacket->LeaveObjectID;

	check(NewPacketSC.LeaveObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

// #41
void FT4PacketHandlerCS::HandleCS_CmdItemEnter(const FT4PacketCmdItemEnterCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdItemEnter == InPacket->PacketCS);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameDBItemRow* ItemData = GameDB.GetItemRowByName(InPacket->ItemNameID);
	if (nullptr == ItemData)
	{
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	FT4NetID NewNetID; // #41

#if (WITH_EDITOR || WITH_SERVER_CODE)
	// #41 : Item/FO AI
	AAIController* NewAI = DoStartSpawnAIController(
		AT4ItemAIController::StaticClass(),
		InPacket->SpawnLocation,
		InPacket->SpawnRotation
	);
	check(nullptr != NewAI);
	{
		AT4ItemAIController* ItemController = Cast<AT4ItemAIController>(NewAI);
		if (nullptr == ItemController)
		{
			check(false); // ???
			return;
		}

		// #31 : NPC는 Spawn 시점에, Player 는 StartPlay 시점에 UniqueID 발급!
		NewNetID = GameFramework->GetNewUniqueNetID();
		ItemController->SetNetID(NewNetID);

		const FSoftObjectPath BlackboardDataPath = ItemData->RawData.BlackboardDataPath.ToSoftObjectPath();
		if (!BlackboardDataPath.IsValid())
		{
			check(false); // ???
			return;
		}
		const FSoftObjectPath BehaviorTreePath = ItemData->RawData.BehaviorTreePath.ToSoftObjectPath();
		if (!BehaviorTreePath.IsValid())
		{
			check(false); // ???
			return;
		}

		bool bBinded = ItemController->SetTableData(
			InPacket->ItemNameID,
			BehaviorTreePath,
			BlackboardDataPath
		);
		if (!bBinded)
		{
			check(false); // ???
			return;
		}

		DoFinishSpawningAIController(NewAI, InPacket->SpawnLocation, InPacket->SpawnRotation);
	}
#endif

	const FT4ObjectID NewSpawnObjectID = GameFramework->GetNewUniqueObjectID();
	FT4PacketItemEnterSC NewPacketSC;
	NewPacketSC.NetID = NewNetID; // #41
	NewPacketSC.EnterObjectID = NewSpawnObjectID;
	NewPacketSC.ItemNameID = InPacket->ItemNameID;
	NewPacketSC.SpawnLocation = InPacket->SpawnLocation;
	NewPacketSC.SpawnRotation = InPacket->SpawnRotation;

	check(NewPacketSC.EnterObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}

// #41
void FT4PacketHandlerCS::HandleCS_CmdItemLeave(const FT4PacketCmdItemLeaveCS* InPacket)
{
	check(nullptr != InPacket);
	check(ET4PacketCtoS::CmdItemLeave == InPacket->PacketCS);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	IT4GameObject* EnteredObject = GameWorld->FindObject(InPacket->LeaveObjectID);
	if (nullptr == EnteredObject)
	{
		check(false); // WARN: 없다? 지금은 에러!
	}
	{
		// TODO : 검증!
	}

	FT4PacketItemLeaveSC NewPacketSC;
	NewPacketSC.LeaveObjectID = InPacket->LeaveObjectID;

	check(NewPacketSC.LeaveObjectID.IsValid());

	DoSendPacketForServer(&NewPacketSC); // #15, #17, #29
}