// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4FrameworkNet.h"
#include "T4FrameworkDelegates.h" // #42

#include "T4Core/Public/T4CoreTypes.h"
#include "T4Engine/Public/T4EngineTypes.h"

#if WITH_EDITOR
#include "ICursor.h"
#endif

/**
  * 
 */
class IT4PlayerController;
class IT4GameWorld;
class IT4GameObject;
class AAIController;
struct FWorldContext;
class UWorld;

#if WITH_EDITOR
class AT4PlayerController; // #42
#endif

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

// #42
class T4FRAMEWORK_API IT4GameplayHandler
{
public:
	virtual ~IT4GameplayHandler() {}

	virtual bool OnInitialize(ET4LayerType InLayerType) = 0;
	virtual void OnFinalize() = 0;

	virtual void OnReset() = 0;
	virtual void OnStartPlay() = 0;
	virtual void OnPlayerSpawned(IT4PlayerController* InOwnerPC) = 0;

	virtual void OnProcess(float InDeltaTime) = 0;

#if WITH_EDITOR
	virtual void SetInputControlLock(bool bLock) = 0; // #30
#endif
};

class T4FRAMEWORK_API IT4GameFramework
{
public:
	virtual ~IT4GameFramework() {}

	virtual ET4LayerType GetLayerType() const = 0;
	virtual ET4FrameworkType GetType() const = 0;

	virtual void OnReset() = 0;
	virtual void OnStartPlay() = 0;

	virtual void OnProcessPre(float InDeltaTime) = 0; // #34 : OnWorldPreActorTick
	virtual void OnProcessPost(float InDeltaTime) = 0; // #34 : OnWorldPostActorTick

	virtual bool HasBegunPlay() const = 0;

	virtual UWorld* GetWorld() const = 0;
	virtual IT4GameWorld* GetGameWorld() const = 0;

	virtual void RegisterGameplayHandler(IT4GameplayHandler* InHandler) = 0; // #42
	virtual IT4GameplayHandler* GetGameplayHandler() const = 0; // #42

	// Client
	virtual IT4PlayerController* GetPlayerController() const = 0;

	virtual IT4GameObject* GetMouseOverGameObject() = 0;
	virtual bool GetMousePickingLocation(FVector& OutLocation) = 0;

#if WITH_EDITOR
	virtual void SetInputControlLock(bool bLock) = 0; // #30
	virtual void SetEditorPlayerController(AT4PlayerController* InPlayerController) = 0; // #42
	virtual void SetEditorViewportClient(IT4EditorViewportClient* InViewportClient) = 0; // #30
#endif

	// Server
	virtual uint32 GetNewUniqueNetID() = 0; // #41
	virtual FT4ObjectID GetNewUniqueObjectID() = 0;

	virtual bool AddAIController(const FT4NetID& InUniqueID, AAIController* InController) = 0; // #31
	virtual void RemoveAIController(const FT4NetID& InUniqueID) = 0; // #31

	virtual AAIController* GetAIController(const FT4NetID& InUniqueID) const = 0; // #31
};

T4FRAMEWORK_API IT4GameFramework* T4FrameworkCreate(
	ET4FrameworkType InFrameworkType,
	FWorldContext* InWorldContext
);
T4FRAMEWORK_API void T4FrameworkDestroy(IT4GameFramework* InFramework);

T4FRAMEWORK_API IT4GameFramework* T4FrameworkGet(ET4LayerType InLayerType);
