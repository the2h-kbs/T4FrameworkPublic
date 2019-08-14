// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4FrameworkNet.h"

#if WITH_EDITOR
#include "T4FrameworkEditor.h" // #60
#endif

#include "T4Engine/Public/T4EngineTypes.h"
#include "T4Engine/Public/Action/T4ActionKey.h"
#include "T4Engine/Public/T4Engine.h" // #63 : IT4AController

#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "GenericPlatform/ICursor.h"

#if WITH_EDITOR
#include "ICursor.h"
#endif

/**
  * 
 */
class UWorld;
struct FWorldContext;
class AController;
class AAIController;
class UInputComponent;
class IT4GameObject;
class IT4GameWorld;

// #30
enum ET4FrameworkType
{
	Framework_Client,
	Framework_Server,

	Framework_None
};

enum ET4ControllerType // #42
{
	Controller_Player,
	Controller_NPC,

	Controller_None
};

class IT4GameplayFramework;
class IT4GameObject;
DECLARE_DELEGATE_OneParam(FT4OnRegisterGameplayLayerInstancce, IT4GameplayFramework*); // #42

#if WITH_EDITOR
DECLARE_MULTICAST_DELEGATE_OneParam(FT4OnViewTargetChanged, IT4GameObject*);
DECLARE_DELEGATE_OneParam(FT4OnCreateEditorPlayerController, IT4GameplayFramework*); // #42
#endif

class T4FRAMEWORK_API IT4GameplayController : public IT4GameplayControl
{
public:
	virtual ~IT4GameplayController() {}

	virtual ET4ControllerType GetControllerType() const = 0;
};

class T4FRAMEWORK_API IT4NPCAIController : public IT4GameplayController
{
public:
	virtual ~IT4NPCAIController() {}
};

class T4FRAMEWORK_API IT4PlayerController : public IT4GameplayController
{
public:
	virtual ~IT4PlayerController() {}

	// #15 : Editor 환경에서 HasAuthority 를 명시적으로 구분하기 위해 도입
	//       동일 프로세스에서 Player 의 Role 이 바뀌며 C/S Player 로 바뀌기 때문에 혼란스러운 점이 있기 때문
	virtual bool CheckAuthority() const = 0; // return HasAuthority()

	virtual UInputComponent* NewInputComponent() = 0;
	virtual void SetInputComponent(UInputComponent* InInputComponent) = 0;
	virtual void OnSetInputMode(ET4InputMode InMode) = 0;

	virtual FRotator GetViewControlRotation() const = 0;

	virtual ET4CameraType GetCameraType() const = 0;
	virtual float GetCameraFOV() const = 0; // #40
	virtual FVector GetCameraLocation() const = 0;
	virtual FRotator GetCameraRotation() const = 0;
	virtual FVector GetCameraLookAtLocation() const = 0; // #30

	virtual void SwitchCameraType(ET4CameraType InCameraType) = 0; // #40
	virtual void SetCameraZoom(float InAmount) = 0;
	virtual void SetCameraPitch(float InAmount) = 0;
	virtual void SetCameraYaw(float InAmount) = 0;

	virtual void SetFreeCameraMoveDirection(const FVector& InLocation) = 0;

	virtual void SetCameraLock(bool bInLock) = 0;
	virtual bool IsCameraLocked() const = 0;

	virtual bool GetMousePositionToWorldRay(
		FVector& OutStartPosition,
		FVector& OutStartDirection
	) = 0;

	virtual void SetMouseCursorType(EMouseCursor::Type InMouseCursorType) = 0;
	virtual void ShowMouseCursor(bool InShow) = 0;

#if WITH_EDITOR
	virtual bool EditorInputKey(
		FKey InKey, 
		EInputEvent InEvent, 
		float InAmountDepressed, 
		bool bInGamepad
	) = 0; // #30
	virtual bool EditorInputAxis(
		FKey InKey, 
		float InDelta, 
		float InDeltaTime, 
		int32 InNumSamples, 
		bool bInGamepad
	) = 0; // #30

	virtual void EditorSetViewportClient(class IT4EditorViewportClient* InEditorViewportClient) = 0;

	virtual FT4OnViewTargetChanged& GetOnViewTargetChanged() = 0;
#endif
};

// #42
class T4FRAMEWORK_API IT4GameplayLayerInstance
{
public:
	virtual ~IT4GameplayLayerInstance() {}

	virtual bool OnInitialize(ET4LayerType InLayerType) = 0;
	virtual void OnFinalize() = 0;

	virtual void OnReset() = 0;
	virtual void OnStartPlay() = 0;
	virtual void OnPlayerSpawned(IT4PlayerController* InOwnerPC) = 0;

	virtual void OnProcess(float InDeltaTime) = 0;

#if WITH_EDITOR
	virtual IT4EditorGameData* GetEditorGameData() = 0; // #60
	
	virtual void SetInputControlLock(bool bLock) = 0; // #30
#endif
};

class T4FRAMEWORK_API IT4GameplayFramework
{
public:
	virtual ~IT4GameplayFramework() {}

	virtual ET4LayerType GetLayerType() const = 0;
	virtual ET4FrameworkType GetType() const = 0;

	virtual void OnReset() = 0;
	virtual void OnStartPlay() = 0;

	virtual void OnProcessPre(float InDeltaTime) = 0; // #34 : OnWorldPreActorTick
	virtual void OnProcessPost(float InDeltaTime) = 0; // #34 : OnWorldPostActorTick

	virtual bool HasBegunPlay() const = 0;

	virtual UWorld* GetWorld() const = 0;
	virtual IT4GameWorld* GetGameWorld() const = 0;

	virtual void RegisterGameplayLayerInstance(IT4GameplayLayerInstance* InLayerInstance) = 0; // #42
	virtual IT4GameplayLayerInstance* GetGameplayLayerInstance() const = 0; // #42

	// Client
	virtual IT4PlayerController* GetPlayerController() const = 0;

	virtual IT4GameObject* GetMouseOverGameObject() = 0;
	virtual bool GetMousePickingLocation(FVector& OutLocation) = 0;

#if WITH_EDITOR
	virtual bool IsPreviewMode() const = 0; // #68

	virtual void SetInputControlLock(bool bLock) = 0; // #30

	virtual void SetEditoAISystemPaused(bool bInPaused) = 0; // #52

	virtual IT4EditorGameplayAIHandler* GetEditorAISystemHandler() const = 0; // #60
	virtual void SetEditorAISystemHandler(IT4EditorGameplayAIHandler* bInAIHandler) = 0; // #60

	virtual void SetEditorPlayerController(class AT4PlayerController* InPlayerController) = 0; // #42
	virtual void SetEditorViewportClient(IT4EditorViewportClient* InViewportClient) = 0; // #30
#endif

	// Server
	virtual uint32 GetNewUniqueNetID() = 0; // #41
	virtual FT4ObjectID GetNewUniqueObjectID() = 0;

	virtual bool AddAIController(const FT4NetID& InUniqueID, AAIController* InController) = 0; // #31
	virtual void RemoveAIController(const FT4NetID& InUniqueID) = 0; // #31

	virtual AAIController* GetAIController(const FT4NetID& InUniqueID) const = 0; // #31
};

// #42
class T4FRAMEWORK_API FT4FrameworkDelegates
{
public:
	static FT4OnRegisterGameplayLayerInstancce OnRegisterGameplayLayerInstancce;

#if WITH_EDITOR
	static FT4OnCreateEditorPlayerController OnCreateEditorPlayerController;
#endif

private:
	FT4FrameworkDelegates() {}
};

T4FRAMEWORK_API IT4GameplayFramework* T4FrameworkCreate(
	ET4FrameworkType InFrameworkType,
	FWorldContext* InWorldContext
);
T4FRAMEWORK_API void T4FrameworkDestroy(IT4GameplayFramework* InFramework);

T4FRAMEWORK_API IT4GameplayFramework* T4FrameworkGet(ET4LayerType InLayerType);
