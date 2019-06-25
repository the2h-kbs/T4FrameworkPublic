// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#include "Public/T4GameplayUtils.h"

#include "Gameplay/T4GameplayInstance.h"
#include "Network/Protocol/T4PacketCSMinimal.h"
#include "GameDB/T4GameDB.h"

#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"
#include "Public/T4Gameplay.h"

#include "T4GameplayInternal.h"

/**
  *
 */
namespace T4GameplayUtil
{
	IT4PlayerController* GetPlayerController(ET4LayerType InLayerType)
	{
		IT4GameWorld* GameWorld = T4EngineWorldGet(InLayerType);
		check(nullptr != GameWorld);
		IT4PlayerController* PlayerController = GameWorld->GetPlayerController();
		check(nullptr != PlayerController);
		return PlayerController;
	}

	IT4PacketHandlerCS* GetPacketHandler(ET4LayerType InLayerType)
	{
		check(ET4LayerType::Max > InLayerType);
		IT4GameFramework* GameFramework = T4FrameworkGet(InLayerType);
		check(nullptr != GameFramework);
		FT4GameplayInstance* GameplayInstance = FT4GameplayInstance::CastGameplayInstance(
			GameFramework->GetGameplayHandler()
		);
		if (nullptr == GameplayInstance)
		{
			return nullptr;
		}
		return GameplayInstance->GetPacketHandlerCS();
	}

	bool DoPlayerSpawn(ET4LayerType InLayerType, const FName& InPlayerDataID)
	{
		// #43	
		FT4GameDB& GameDB = GetGameDB();
		const FT4GameDataID PlayerDataID = FT4GameDataID(ET4GameDataType::Player, InPlayerDataID);
		const FT4GamePlayerData* PlayerData = GameDB.GetGameData<FT4GamePlayerData>(PlayerDataID);
		if (nullptr == PlayerData)
		{
			UE_LOG(
				LogT4Gameplay,
				Warning,
				TEXT("T4GameplayUtil : failed to player spawn. PlayerDataID '%s' Not Found."),
				*(PlayerDataID.ToString())
			);
			return false;
		}
		IT4GameFramework* GameFramework = T4FrameworkGet(InLayerType);
		if (nullptr == GameFramework)
		{
			return false;
		}
		FVector PickingLocation;
		if (!GameFramework->GetMousePickingLocation(PickingLocation))
		{
			UE_LOG(
				LogT4Gameplay,
				Warning,
				TEXT("T4GameplayUtil : failed to player spawn. Invalid PickingLocation.")
			);
			return false;
		}
		IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandler(InLayerType);
		if (nullptr == PacketHandlerCS)
		{
			return false;
		}
		IT4PlayerController* PlayerController = GetPlayerController(InLayerType);
		check(nullptr != PlayerController);
		FT4PacketCmdPCEnterCS NewPacketCS; // #27
		NewPacketCS.PlayerDataID = PlayerDataID;
		NewPacketCS.SpawnLocation = PickingLocation;
		NewPacketCS.bSetViewTarget = !PlayerController->HasTargetObject(); // WARN : 빙의된 캐릭터가 없으면 MyPC로 간주하도록 조치
		PacketHandlerCS->OnSendPacket(&NewPacketCS);
		return true;
	}

	bool DoNPCSpawn(ET4LayerType InLayerType, const FName& InNPCDataID)
	{
		// #43	
		FT4GameDB& GameDB = GetGameDB();
		const FT4GameDataID NPCDataID = FT4GameDataID(ET4GameDataType::NPC, InNPCDataID);
		const FT4GameNPCData* NPCData = GameDB.GetGameData<FT4GameNPCData>(NPCDataID);
		if (nullptr == NPCData)
		{
			UE_LOG(
				LogT4Gameplay,
				Warning,
				TEXT("T4GameplayUtil : failed to npc spawn. NPCDataID '%s' Not Found."),
				*(NPCDataID.ToString())
			);
			return false;
		}
		IT4GameFramework* GameFramework = T4FrameworkGet(InLayerType);
		if (nullptr == GameFramework)
		{
			return false;
		}
		FVector PickingLocation;
		if (!GameFramework->GetMousePickingLocation(PickingLocation))
		{
			UE_LOG(
				LogT4Gameplay,
				Warning,
				TEXT("T4GameplayUtil : failed to npc spawn. Invalid PickingLocation.")
			);
			return false;
		}
		IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandler(InLayerType);
		if (nullptr == PacketHandlerCS)
		{
			return false;
		}
		IT4PlayerController* PlayerController = GetPlayerController(InLayerType);
		check(nullptr != PlayerController);
		FT4PacketCmdNPCEnterCS NewPacketCS; // #31
		NewPacketCS.NPCDataID = NPCDataID;
		NewPacketCS.SpawnLocation = PickingLocation;
		PacketHandlerCS->OnSendPacket(&NewPacketCS);
		return true;
	}

	bool DoEquipOrUnEquipWeapon(
		ET4LayerType InLayerType, 
		const FName& InWeaponDataID,
		bool bInMainWeapon
	) // #48
	{
		FT4GameDB& GameDB = GetGameDB();
		const FT4GameDataID WeaponDataID = FT4GameDataID(ET4GameDataType::Item_Weapon, InWeaponDataID);
		const FT4GameItemWeaponData* WeaponData = GameDB.GetGameData<FT4GameItemWeaponData>(WeaponDataID);
		if (nullptr == WeaponData)
		{
			UE_LOG(
				LogT4Gameplay,
				Warning,
				TEXT("T4GameplayUtil : failed to Equip or UnEquip Item. ItemWeaponDataID '%s' Not Found."),
				*(WeaponDataID.ToString())
			);
			return false;
		}
		IT4PlayerController* PlayerController = GetPlayerController(InLayerType);
		if (nullptr == PlayerController)
		{
			UE_LOG(
				LogT4Gameplay,
				Warning,
				TEXT("T4GameplayUtil : failed to Equip or UnEquip Item. PlayerObject is Not set."),
				*(WeaponDataID.ToString())
			);
			return false;
		}
		IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandler(InLayerType);
		if (nullptr == PacketHandlerCS)
		{
			return false;
		}
		const FT4ObjectID PlayerObjectID = PlayerController->GetTargetObjectID();
		if (PlayerController->HasPlayingAction(WeaponDataID.ToPrimaryActionKey()))
		{
			FT4PacketUnEquipCS NewPacketCS; // #27
			NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
			NewPacketCS.ItemWeaponDataID = WeaponDataID;
			NewPacketCS.bMainWeapon = bInMainWeapon; // #48
			PacketHandlerCS->OnSendPacket(&NewPacketCS);
		}
		else
		{
			FT4PacketEquipCS NewPacketCS; // #27
			NewPacketCS.SenderID = PlayerController->GetTargetObjectID();
			NewPacketCS.ItemWeaponDataID = WeaponDataID;
			NewPacketCS.bMainWeapon = bInMainWeapon; // #48
			PacketHandlerCS->OnSendPacket(&NewPacketCS);
		}
		return true;
	}
}
