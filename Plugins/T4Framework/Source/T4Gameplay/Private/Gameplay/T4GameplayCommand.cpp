// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameplayCommand.h"

#include "Network/Protocol/T4PacketCS_Command.h"
#include "GameDB/T4GameDB.h"

#include "Public/T4Gameplay.h"
#include "Gameplay/T4GameplayInstance.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"
#include "T4Framework/Public/T4Framework.h"
#include "T4Framework/Public/T4FrameworkUtils.h"

#include "T4GameplayInternal.h"

static const TCHAR* DefaultChangeWorldDBKey = TEXT("DefaultMap");
static const TCHAR* DefaultSpawnPropDBKey = TEXT("Rock");
static const TCHAR* DefaultSpawnCharacterDBKey = TEXT("Mannequin");

/**
  * http://api.unrealengine.com/KOR/Programming/Development/Tools/ConsoleManager/
 */
FT4GameplayCommand::FT4GameplayCommand(ET4LayerType InLayerType)
	: LayerType(InLayerType)
{
}

FT4GameplayCommand::~FT4GameplayCommand()
{
}

bool FT4GameplayCommand::Initialize()
{
	check(LayerType < ET4LayerType::Max);

	// #15 : per Multiple PIE

	FString CommandName;
	FString LayerPrefix = T4CoreLayer::ConvertToString(LayerType);

	IConsoleManager& ConsoleManager = IConsoleManager::Get();

	CommandName = FString::Printf(TEXT("t4.%s.World.Change"), *LayerPrefix);
	ConsoleVarChangeToWorldRef = ConsoleManager.RegisterConsoleVariable
	(
		*CommandName,
		DefaultChangeWorldDBKey,
		TEXT("Do Change to World DBKey")
		TEXT(" <= DefaultMap\n")
		TEXT(" <= TestMap\n"),
		ECVF_Default
	);
	ConsoleVarChangeToWorldRef->AsVariable()->SetOnChangedCallback(
		FConsoleVariableDelegate::CreateRaw(this, &FT4GameplayCommand::OnChangeToWorld)
	);

	CommandName = FString::Printf(TEXT("t4.%s.Spawn.Prop"), *LayerPrefix);
	ConsoleVarSpawnPropRef = ConsoleManager.RegisterConsoleVariable
	(
		*CommandName,
		DefaultSpawnCharacterDBKey,
		TEXT("Do Spawn a Prop DBKey\n")
		TEXT(" <= Rock\n")
		TEXT(" <= Mannequin\n")
		TEXT(" <= Fire\n"),
		ECVF_Default
	);
	ConsoleVarSpawnPropRef->AsVariable()->SetOnChangedCallback(
		FConsoleVariableDelegate::CreateRaw(this, &FT4GameplayCommand::OnSpawnProp)
	);

	CommandName = FString::Printf(TEXT("t4.%s.Spawn.Char"), *LayerPrefix);
	ConsoleVarSpawnCharacterRef = ConsoleManager.RegisterConsoleVariable
	(
		*CommandName,
		DefaultSpawnCharacterDBKey,
		TEXT("Do Spawn a Character DBKey\n")
		TEXT(" <= Knight\n")
		TEXT(" <= Mannequin"),
		ECVF_Default
	);
	ConsoleVarSpawnCharacterRef->AsVariable()->SetOnChangedCallback(
		FConsoleVariableDelegate::CreateRaw(this, &FT4GameplayCommand::OnSpawnCharacter)
	);

	CommandName = FString::Printf(TEXT("t4.%s.tt"), *LayerPrefix);
	ConsoleVarQuickSpawnRef = ConsoleManager.RegisterConsoleVariable
	(
		*CommandName,
		DefaultSpawnCharacterDBKey,
		TEXT("Quick Spawn Test (1/2/3/4...)\n"),
		ECVF_Default
	);
	ConsoleVarQuickSpawnRef->AsVariable()->SetOnChangedCallback(
		FConsoleVariableDelegate::CreateRaw(this, &FT4GameplayCommand::OnQuickSpawn)
	);

	CommandName = FString::Printf(TEXT("t4.%s.Snapshot.Take"), *LayerPrefix);
	ConsoleVarTakeSnapshotInLevelEditorRef = ConsoleManager.RegisterConsoleVariable
	(
		*CommandName,
		DefaultSpawnCharacterDBKey,
		TEXT("Take Snapshot From <Client/LevelEditor/Preview>\n"),
		ECVF_Default
	);
	ConsoleVarTakeSnapshotInLevelEditorRef->AsVariable()->SetOnChangedCallback(
		FConsoleVariableDelegate::CreateRaw(this, &FT4GameplayCommand::OnTakeSnapshotFrom)
	);

	return true;
}

void FT4GameplayCommand::Finalize()
{
	IConsoleManager& ConsoleManager = IConsoleManager::Get();
	if (nullptr != ConsoleVarChangeToWorldRef)
	{
		ConsoleManager.UnregisterConsoleObject(ConsoleVarChangeToWorldRef);
		ConsoleVarChangeToWorldRef = nullptr;
	}
	if (nullptr != ConsoleVarSpawnPropRef)
	{
		ConsoleManager.UnregisterConsoleObject(ConsoleVarSpawnPropRef);
		ConsoleVarSpawnPropRef = nullptr;
	}
	if (nullptr != ConsoleVarSpawnCharacterRef)
	{
		ConsoleManager.UnregisterConsoleObject(ConsoleVarSpawnCharacterRef);
		ConsoleVarSpawnCharacterRef = nullptr;
	}
	if (nullptr != ConsoleVarQuickSpawnRef)
	{
		ConsoleManager.UnregisterConsoleObject(ConsoleVarQuickSpawnRef);
		ConsoleVarQuickSpawnRef = nullptr;
	}
	if (nullptr != ConsoleVarTakeSnapshotInLevelEditorRef)
	{
		ConsoleManager.UnregisterConsoleObject(ConsoleVarTakeSnapshotInLevelEditorRef);
		ConsoleVarTakeSnapshotInLevelEditorRef = nullptr;
	}
}

void FT4GameplayCommand::OnChangeToWorld(IConsoleVariable* InVariable)
{
	const FName WorldName = *(InVariable->GetString());
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameWorldData* WorldData = GameDB.GetWorldDataByName(WorldName);
	if (nullptr == WorldData)
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketCmdChangeWorldCS NewPacketCS; // #27
	NewPacketCS.WorldNameInTable = WorldName;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

bool FT4GameplayCommand::GetSpawnLocation(FVector& OutLocation)
{
	bool bResult = T4FrameworkUtil::GetMousePickingLocation(LayerType, OutLocation);
	if (bResult)
	{
		return true;
	}

	// fallback
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);

	FVector CameraLocation = GameWorld->GetCameraLocation();
	CameraLocation.Z += 5000.0f;

	FT4HitSingleResult HitResult;
	bResult = GameWorld->QueryLineTraceSingle(
		ET4CollisionChannel::WorldStatic,
		CameraLocation,
		-FVector::UpVector,
		DefaultLineTraceMaxDistance,
		FCollisionQueryParams::DefaultQueryParam,
		HitResult
	);
	if (!bResult)
	{
		return false;
	}
	OutLocation = HitResult.ResultLocation;
	return true;
}

void FT4GameplayCommand::OnSpawnProp(IConsoleVariable* InVariable)
{
	FVector SpawnLocation;
	if (!GetSpawnLocation(SpawnLocation))
	{
		return;
	}
	const FName FONameInTable = *InVariable->GetString();
	FT4GameDB& GameDB = GetGameDB();
	const FT4GameFOData* FOData = GameDB.GetFODataByName(FONameInTable);
	if (nullptr == FOData)
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4PacketCmdFOEnterCS NewPacketCS; // #27
	NewPacketCS.FONameInTable = FONameInTable;
	NewPacketCS.SpawnLocation = SpawnLocation;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

static void DoSpawnCharacter(
	IT4PacketHandlerCS* PacketHandlerCS,
	const FName& InCharTableName,
	const FVector& InSpawnLocation
)
{
	check(nullptr != PacketHandlerCS);
	FT4GameDB& GameDB = GetGameDB();
	const FT4GamePlayerData* CharacterData = GameDB.GetPlayerDataByName(InCharTableName);
	if (nullptr == CharacterData)
	{
		return;
	}
	FT4PacketCmdPCEnterCS NewPacketCS; // #27
	NewPacketCS.CharacterNameInTable = InCharTableName;
	NewPacketCS.SpawnLocation = InSpawnLocation;
	PacketHandlerCS->OnSendPacket(&NewPacketCS);
}

void FT4GameplayCommand::OnSpawnCharacter(IConsoleVariable* InVariable)
{
	FVector SpawnLocation;
	if (!GetSpawnLocation(SpawnLocation))
	{
		return;
	}
	DoSpawnCharacter(GetPacketHandlerCS(), *InVariable->GetString(), SpawnLocation);
}

void FT4GameplayCommand::OnQuickSpawn(IConsoleVariable* InVariable)
{
	FVector SpawnLocation;
	if (!GetSpawnLocation(SpawnLocation))
	{
		return;
	}
	FName NewSpawnTableName = NAME_None;
	FString OptionString = InVariable->GetString();
	if (OptionString.Compare(TEXT("1")) == 0)
	{
		NewSpawnTableName = TEXT("DefaultCharacter");
	}
	if (NewSpawnTableName != NAME_None)
	{
		DoSpawnCharacter(GetPacketHandlerCS(), NewSpawnTableName, SpawnLocation);
	}
}

void FT4GameplayCommand::OnTakeSnapshotFrom(IConsoleVariable* InVariable)
{
	const FString LayerNameString = InVariable->GetString();
	ET4LayerType SourceLayerType = T4CoreLayer::ConvertFromString(LayerNameString);
	if (ET4LayerType::Max == SourceLayerType)
	{
		return;
	}
	IT4GameWorld* SourceGameWorld = T4EngineWorldGet(SourceLayerType);
	if (nullptr == SourceGameWorld)
	{
		return;
	}
	const uint32 NumSourceSpawnObjects = SourceGameWorld->GetNumObjects();
	if (0 >= NumSourceSpawnObjects)
	{
		return;
	}
	IT4PacketHandlerCS* PacketHandlerCS = GetPacketHandlerCS();
	if (nullptr == PacketHandlerCS)
	{
		return;
	}
	FT4GameDB& GameDB = GetGameDB();
	for (FConstGameObjectIterator It = SourceGameWorld->GetObjectIterator(); It; ++It)
	{
		IT4GameObject* GameObject = *It;
		const FName ContentUniqueName = GameObject->GetContentUniqueName();
		const FT4EntityKey& EntityKey = GameObject->GetEntityKey();
		const FVector GroundLocation = GameObject->GetGroundLocation();
		const FRotator Rotation = GameObject->GetRotation();
		if (EntityKey.CheckType(ET4EntityType::Actor))
		{
			const FT4GamePlayerData* PlayerData = GameDB.GetPlayerDataByName(ContentUniqueName);
			if (nullptr != PlayerData)
			{
				FT4PacketCmdPCEnterCS NewPacketCS; // #27
				NewPacketCS.CharacterNameInTable = ContentUniqueName;
				NewPacketCS.SpawnLocation = GroundLocation;
				NewPacketCS.SpawnRotation = Rotation;
				PacketHandlerCS->OnSendPacket(&NewPacketCS);
				continue;
			}
			const FT4GameNPCData* NPCData = GameDB.GetNPCDataByName(ContentUniqueName);
			if (nullptr != NPCData)
			{
				FT4PacketCmdNPCEnterCS NewPacketCS; // #27
				NewPacketCS.NPCNameInTable = ContentUniqueName;
				NewPacketCS.SpawnLocation = GroundLocation;
				NewPacketCS.SpawnRotation = Rotation;
				PacketHandlerCS->OnSendPacket(&NewPacketCS);
				continue;
			}
		}
		else if (EntityKey.CheckType(ET4EntityType::Prop))
		{
			const FT4GameFOData* FOData = GameDB.GetFODataByName(ContentUniqueName);
			if (nullptr != FOData)
			{
				FT4PacketCmdFOEnterCS NewPacketCS; // #27
				NewPacketCS.FONameInTable = ContentUniqueName;
				NewPacketCS.SpawnLocation = GroundLocation;
				NewPacketCS.SpawnRotation = Rotation;
				PacketHandlerCS->OnSendPacket(&NewPacketCS);
			}
		}
	}
}

IT4PlayerController* FT4GameplayCommand::GetPlayerController() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameWorld* GameWorld = T4EngineWorldGet(LayerType);
	check(nullptr != GameWorld);
	return GameWorld->GetPlayerController();
}

IT4PacketHandlerCS* FT4GameplayCommand::GetPacketHandlerCS() const
{
	check(ET4LayerType::Max > LayerType);
	IT4GameFramework* GameFramework = T4FrameworkGet(LayerType);
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