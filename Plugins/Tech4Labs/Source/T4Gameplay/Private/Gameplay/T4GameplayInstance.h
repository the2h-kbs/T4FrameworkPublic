// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Framework/Public/T4Framework.h"
#include "Public/T4Gameplay.h"

/**
  * 
 */
class UT4GameplayModeHandler;
class FT4GameplayConsole;
class FT4PacketHandlerSC;
class FT4PacketHandlerCS;
class FT4GameplayInstance : public IT4GameplayHandler
{
public:
	explicit FT4GameplayInstance();
	~FT4GameplayInstance();

	// IT4GameplayHandler
	bool OnInitialize(ET4LayerType InLayerType) override;
	void OnFinalize() override;

	void OnReset() override;
	void OnStartPlay() override;
	void OnPlayerSpawned(IT4PlayerController* InOwnerPC) override;

	void OnProcess(float InDeltaTime) override;

#if WITH_EDITOR
	void SetInputControlLock(bool bLock) override; // #30
#endif

public:
	static FT4GameplayInstance* CastGameplayInstance(IT4GameplayHandler* InGameplayHandler);

	IT4PacketHandlerSC* GetPacketHandlerSC(); // #27
	IT4PacketHandlerCS* GetPacketHandlerCS(); // #27

private:
	ET4LayerType LayerType;

	FT4GameplayConsole* GameplayConsole;
	TWeakObjectPtr<UT4GameplayModeHandler> GameplayModeHandler;

	FT4PacketHandlerSC* PacketHandlerSC; // #27
	FT4PacketHandlerCS* PacketHandlerCS; // #27

#if WITH_EDITOR
	bool bInputControlLocked; // #30
#endif
};
