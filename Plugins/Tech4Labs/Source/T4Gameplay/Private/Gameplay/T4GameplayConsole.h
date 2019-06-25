// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "T4Core/Public/T4CoreTypes.h"

/**
  * http://api.unrealengine.com/KOR/Programming/Development/Tools/ConsoleManager/
 */
class IConsoleVariable;
class IT4PlayerController;
class IT4PacketHandlerCS;
class FT4GameplayConsole
{
public:
	explicit FT4GameplayConsole(ET4LayerType InLayerType);
	~FT4GameplayConsole();

	bool Initialize();
	void Finalize();

private:
	void OnChangeToWorld(IConsoleVariable* InVariable);

	void OnSpawnProp(IConsoleVariable* InVariable);
	void OnSpawnCharacter(IConsoleVariable* InVariable);
	
	void OnQuickSpawn(IConsoleVariable* InVariable);

	void OnTakeSnapshotFrom(IConsoleVariable* InVariable);

private:
	IT4PlayerController* GetPlayerController() const;
	IT4PacketHandlerCS* GetPacketHandlerCS() const;

	bool GetSpawnLocation(FVector& OutLocation);

private:
	ET4LayerType LayerType;
	IConsoleVariable* ConsoleVarChangeToWorldRef;
	IConsoleVariable* ConsoleVarSpawnPropRef;
	IConsoleVariable* ConsoleVarSpawnCharacterRef;
	IConsoleVariable* ConsoleVarQuickSpawnRef;
	IConsoleVariable* ConsoleVarTakeSnapshotInLevelEditorRef;
};
