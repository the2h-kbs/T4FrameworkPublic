// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/Protocol/T4PacketTypes.h"
#include "T4Engine/Public/T4EngineTypes.h"
#include "T4Core/Public/T4CoreTypes.h"

/**
  * 
 */
struct FT4PacketStoC;
struct FT4PacketCtoS;
class IT4PlayerController;
class IT4GameWorld;
class IT4GameObject;
class AAIController;
struct FWorldContext;
class UWorld;

 // #30
UENUM()
enum class ET4FrameworkType : uint8
{
	Client,
	Server,

	None	UMETA(Hidden)
};

#if WITH_EDITOR
class IT4EditorViewportClient
{
public:
	virtual ~IT4EditorViewportClient() {}

	virtual void SetMouseLocation(const int InX, const int InY) = 0; 
	virtual bool GetMousePosition(float& InLocationX, float& InLocationY) = 0;
	virtual bool GetMousePositionToWorldRay(FVector& OutStartPosition, FVector& OutStartDirection) = 0;

	virtual void ShowMouseCursor(bool InShow) = 0;
	virtual void SetMouseCursorType(EMouseCursor::Type InMouseCursorType) = 0;
};
#endif

class T4FRAMEWORK_API IT4PacketHandlerSC
{
public:
	virtual ~IT4PacketHandlerSC() {}

	virtual bool OnSendPacket(FT4PacketStoC* InPacket, IT4PlayerController* InRecvPC) = 0;
	virtual bool OnBroadcastPacket(FT4PacketStoC* InPacket) = 0;

	virtual bool OnRecvPacket(const FT4PacketStoC* InPacket) = 0;
};

class T4FRAMEWORK_API IT4PacketHandlerCS
{
public:
	virtual ~IT4PacketHandlerCS() {}

	virtual bool OnSendPacket(FT4PacketCtoS* InPacket) = 0; // Client, Reliable

	virtual bool OnRecvPacket_Validation(const FT4PacketCtoS* InPacket) = 0;
	virtual bool OnRecvPacket(const FT4PacketCtoS* InPacket, IT4PlayerController* InSenderPC) = 0;
};

class T4FRAMEWORK_API IT4GameFramework
{
public:
	virtual ~IT4GameFramework() {}

	virtual ET4SceneLayer GetSceneLayer() const = 0;
	virtual ET4FrameworkType GetType() const = 0;

	virtual void OnReset() = 0;
	virtual void OnStartPlay(bool bShowWindowMode) = 0;

	virtual void OnProcessPre(float InDeltaTime) = 0; // #34 : OnWorldPreActorTick
	virtual void OnProcessPost(float InDeltaTime) = 0; // #34 : OnWorldPostActorTick

	virtual bool HasBegunPlay() const = 0;

	virtual UWorld* GetWorld() const = 0;
	virtual IT4GameWorld* GetGameWorld() const = 0;

	virtual IT4PacketHandlerSC* GetPacketHandlerSC() = 0; // #27
	virtual IT4PacketHandlerCS* GetPacketHandlerCS() = 0; // #27

	// Client
	virtual IT4PlayerController* GetPlayerController() const = 0;

#if WITH_EDITOR
	virtual void SetInputControlLock(bool bLock) = 0; // #30
	virtual void SetEditorViewportClient(IT4EditorViewportClient* InViewportClient) = 0; // #30
	virtual void DoSpawnCharacter(const FName& InCharTableName, const FVector& InSpawnLocation) = 0; // #30
#endif

	// Server
	virtual uint32 GetNewUniqueNetID() = 0; // #41
	virtual FT4ObjectID GetNewUniqueObjectID() = 0;

	virtual bool AddAIController(const FT4NetID& InUniqueID, AAIController* InController) = 0; // #31
	virtual void RemoveAIController(const FT4NetID& InUniqueID) = 0; // #31

	virtual AAIController* GetAIController(const FT4NetID& InUniqueID) const = 0; // #31
};

T4FRAMEWORK_API IT4GameFramework* CreateT4Framework(
	ET4FrameworkType InFrameworkType,
	FWorldContext* InWorldContext
);
T4FRAMEWORK_API void DestroyT4Framework(IT4GameFramework* InFramework);

T4FRAMEWORK_API IT4GameFramework* GetT4Framework(ET4SceneLayer InSceneLayer);