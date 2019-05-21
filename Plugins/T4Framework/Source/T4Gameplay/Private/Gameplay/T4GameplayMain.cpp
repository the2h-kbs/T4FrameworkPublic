// Copyright 2019 Tech4 Labs. All Rights Reserved.

#include "T4GameplayMain.h"
#include "T4GameplayControl.h"
#include "T4GameplayCommand.h"

#include "GameDB/T4GameDB.h" // #25

#include "Network/Component/T4NetGameplayComponent.h"
#include "Network/PacketHandler/T4PacketHandler_SC.h"
#include "Network/PacketHandler/T4PacketHandler_CS.h"

#include "T4Core/Public/T4CoreMinimal.h"
#include "T4Engine/Public/T4Engine.h"

#include "GameFramework//Controller.h"

#include "T4GameplayInternal.h"

static const TCHAR* T4ClientMasterTablePath = TEXT("DataTable'/T4Framework/Gameplay/Table/T4ContentMasterTable.T4ContentMasterTable'"); // #25
static const TCHAR* T4ServerMasterTablePath = TEXT("DataTable'/T4Framework/Gameplay/Table/T4ContentMasterTable.T4ContentMasterTable'"); // #25

/**
  *
 */
FT4GameplayMain::FT4GameplayMain()
	: LayerType(ET4LayerType::Max)
	, GameplayCommand(nullptr)
	, PacketHandlerSC(nullptr) // #27
	, PacketHandlerCS(nullptr) // #27
#if WITH_EDITOR
	, bInputControlLocked(false)
#endif
{
}

FT4GameplayMain::~FT4GameplayMain()
{
	// #42 : GameFramework 소멸 시 인스턴스가 소멸된다!!
	check(nullptr == GameplayCommand);
	check(nullptr == PacketHandlerSC);
	check(nullptr == PacketHandlerCS);
	check(!GameplayControl.IsValid());
}

bool FT4GameplayMain::OnInitialize(ET4LayerType InLayerType)
{
	check(ET4LayerType::Max == LayerType);
	LayerType = InLayerType;
	check(ET4LayerType::Max != LayerType);

	if (!GetGameDB().IsInitialized())
	{
		// #25
		if (!GetGameDB().Initialize(T4ClientMasterTablePath))
		{
			//check(false);
			return false;
		}
#if 0
		if (!GetGameDB().Initialize(T4ServerMasterTablePath))
		{
			//check(false);
			return false;
		}
#endif
	}

	PacketHandlerSC = new FT4PacketHandlerSC(LayerType);
	PacketHandlerCS = new FT4PacketHandlerCS(LayerType);
	return true;
}

void FT4GameplayMain::OnFinalize()
{
	if (nullptr != GameplayCommand)
	{
		GameplayCommand->Finalize();
		delete GameplayCommand;
		GameplayCommand = nullptr;
	}
	if (GameplayControl.IsValid())
	{
		GameplayControl->RemoveFromRoot();
		GameplayControl.Reset();
	}
	if (GetGameDB().IsInitialized())
	{
		GetGameDB().Finalize(); // #25
	}
	SAFE_DELETE(PacketHandlerSC);
	SAFE_DELETE(PacketHandlerCS);
}

void FT4GameplayMain::OnReset()
{
	if (GameplayControl.IsValid())
	{
		GameplayControl->RemoveFromRoot();
		GameplayControl.Reset();
	}
}

void FT4GameplayMain::OnStartPlay()
{
	check(ET4LayerType::Max != LayerType);
	check(nullptr == GameplayCommand);
	GameplayCommand = new FT4GameplayCommand(LayerType);
	GameplayCommand->Initialize();
}

void FT4GameplayMain::OnPlayerSpawned(IT4PlayerController* InOwnerPC)
{
	check(nullptr != InOwnerPC);
	{
		AController* Controller = InOwnerPC->GetController();
		check(nullptr != Controller);
		UT4NetGameplayComponent* NewNetGameplayComponent = NewObject<UT4NetGameplayComponent>(Controller);
		check(nullptr != NewNetGameplayComponent);
		InOwnerPC->RegisterNetGameplayComponent(NewNetGameplayComponent); // #42
	}
	if (!T4CoreLayer::IsServer(LayerType))
	{
		check(!GameplayControl.IsValid());
		GameplayControl = NewObject<UT4GameplayControl>();
		check(GameplayControl.IsValid());
		GameplayControl->Setup(LayerType);
		GameplayControl->AddToRoot();
	}
}

void FT4GameplayMain::OnProcess(float InDeltaTime)
{
	if (GameplayControl.IsValid())
	{
		GameplayControl->Process(InDeltaTime);
	}
}

IT4PacketHandlerSC* FT4GameplayMain::GetPacketHandlerSC()
{
	return static_cast<IT4PacketHandlerSC*>(PacketHandlerSC); // #27
}

IT4PacketHandlerCS* FT4GameplayMain::GetPacketHandlerCS()
{
	return static_cast<IT4PacketHandlerCS*>(PacketHandlerCS); // #27
}

#if WITH_EDITOR
void FT4GameplayMain::SetInputControlLock(bool bLock)
{
	// #30
	bInputControlLocked = bLock;
	if (GameplayControl.IsValid())
	{
		GameplayControl->SetInputControlLock(bInputControlLocked);
	}
}
#endif