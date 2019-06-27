// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "T4PacketHandler_CS.h"

#include "Classes/Player/T4GameplayPlayerController.h" // #42

#include "Network/Protocol/T4PacketCS_Command.h"
#include "Network/Protocol/T4PacketSC_World.h"

#include "GameDB/T4GameDB.h"

#include "Classes/AI/T4GameplayNPCAIController.h" // #31
#include "Classes/AI/T4GameplayFOAIController.h" // #41
#include "Classes/AI/T4GameplayItemAIController.h" // #41

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"

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
	const FT4GameWorldData* WorldData = GameDB.GetGameData<FT4GameWorldData>(InPacket->WorldDataID);
	if (nullptr == WorldData)
	{
		return;
	}

	FT4PacketChangeWorldSC NewPacketSC;
	NewPacketSC.WorldDataID = InPacket->WorldDataID;

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
	const FT4GamePlayerData* PlayerData = GameDB.GetGameData<FT4GamePlayerData>(InPacket->PlayerDataID);
	if (nullptr == PlayerData)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("FT4PacketHandlerCS : failed to player enter. PlayerDataID '%s' Not Found."),
			*(InPacket->PlayerDataID.ToString())
		);
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	const FT4ObjectID NewSpawnObjectID = GameFramework->GetNewUniqueObjectID();
	check(NewSpawnObjectID.IsValid());

	const bool bMyPCEntered = InPacket->bSetViewTarget;

	FT4PacketPCEnterSC NewPCEnterPacketSC;
	NewPCEnterPacketSC.EnterObjectID = NewSpawnObjectID;
	NewPCEnterPacketSC.PlayerDataID = InPacket->PlayerDataID;
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
		AT4GameplayPlayerController* TargetPC = Cast<AT4GameplayPlayerController>(*It);
		if (nullptr != TargetPC && TargetPC->HasAuthority())
		{
			if (bMyPCEntered && TargetPC == InSenderPC)
			{
				FT4PacketMyPCEnterSC NewMyPCEnterPacketSC;
				NewMyPCEnterPacketSC.EnterObjectID = NewSpawnObjectID;
				NewMyPCEnterPacketSC.PlayerDataID = InPacket->PlayerDataID;
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
	const FT4GameNPCData* NPCData = GameDB.GetGameData<FT4GameNPCData>(InPacket->NPCDataID);
	if (nullptr == NPCData)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("FT4PacketHandlerCS : failed to npc enter. NPCDataID '%s' Not Found."),
			*(InPacket->NPCDataID.ToString())
		);
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	FT4NetID NewNetID; // #41

#if (WITH_EDITOR || WITH_SERVER_CODE)
	// #31 : NPCAI
	AAIController* NewAI = DoStartSpawnAIController(
		AT4GameplayNPCAIController::StaticClass(),
		InPacket->SpawnLocation,
		InPacket->SpawnRotation
	);
	check(nullptr != NewAI);
	{
		AT4GameplayNPCAIController* NPCController = Cast<AT4GameplayNPCAIController>(NewAI);
		if (nullptr == NPCController)
		{
			check(false); // ???
			return;
		}

		// #31 : NPC는 Spawn 시점에, Player 는 StartPlay 시점에 UniqueID 발급!
		NewNetID = GameFramework->GetNewUniqueNetID();
		NPCController->SetNetID(NewNetID);

		bool bBinded = NPCController->Bind(InPacket->NPCDataID); // #50
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
	NewPacketSC.NPCDataID = InPacket->NPCDataID;
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
	const FT4GameFOData* FOData = GameDB.GetGameData<FT4GameFOData>(InPacket->FODataID);
	if (nullptr == FOData)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("FT4PacketHandlerCS : failed to FO enter. FODataID '%s' Not Found."),
			*(InPacket->FODataID.ToString())
		);
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	FT4NetID NewNetID; // #41

#if (WITH_EDITOR || WITH_SERVER_CODE)
	// #41 : Item/FO AI
	AAIController* NewAI = DoStartSpawnAIController(
		AT4GameplayFOAIController::StaticClass(),
		InPacket->SpawnLocation,
		InPacket->SpawnRotation
	);
	check(nullptr != NewAI);
	{
		AT4GameplayFOAIController* FOController = Cast<AT4GameplayFOAIController>(NewAI);
		if (nullptr == FOController)
		{
			check(false); // ???
			return;
		}

		// #31 : NPC는 Spawn 시점에, Player 는 StartPlay 시점에 UniqueID 발급!
		NewNetID = GameFramework->GetNewUniqueNetID();
		FOController->SetNetID(NewNetID);

		bool bBinded = FOController->Bind(InPacket->FODataID); // #50
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
	NewPacketSC.FODataID = InPacket->FODataID;
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

	// #48
	bool bResult = false;
	if (ET4GameDataType::Item_Weapon == InPacket->ItemDataID.Type)
	{
		const FT4GameItemWeaponData* ItemWeaponData = GameDB.GetGameData<FT4GameItemWeaponData>(InPacket->ItemDataID);
		if (nullptr != ItemWeaponData)
		{
			bResult = true;
		}
	}
	else
	{
		const FT4GameItemCostumeData* ItemCostumeData = GameDB.GetGameData<FT4GameItemCostumeData>(InPacket->ItemDataID);
		if (nullptr != ItemCostumeData)
		{
			bResult = true;
		}
	}
	if (!bResult)
	{
		UE_LOG(
			LogT4Gameplay,
			Warning,
			TEXT("FT4PacketHandlerCS : failed to Item enter. ItemDataID '%s' Not Found."),
			*(InPacket->ItemDataID.ToString())
		);
		return;
	}

	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
	check(nullptr != GameFramework);

	FT4NetID NewNetID; // #41

#if (WITH_EDITOR || WITH_SERVER_CODE)
	// #41 : Item/FO AI
	AAIController* NewAI = DoStartSpawnAIController(
		AT4GameplayItemAIController::StaticClass(),
		InPacket->SpawnLocation,
		InPacket->SpawnRotation
	);
	check(nullptr != NewAI);
	{
		AT4GameplayItemAIController* ItemController = Cast<AT4GameplayItemAIController>(NewAI);
		if (nullptr == ItemController)
		{
			check(false); // ???
			return;
		}

		// #31 : NPC는 Spawn 시점에, Player 는 StartPlay 시점에 UniqueID 발급!
		NewNetID = GameFramework->GetNewUniqueNetID();
		ItemController->SetNetID(NewNetID);

		bool bBinded = ItemController->Bind(InPacket->ItemDataID); // #50
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
	NewPacketSC.ItemDataID = InPacket->ItemDataID;
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