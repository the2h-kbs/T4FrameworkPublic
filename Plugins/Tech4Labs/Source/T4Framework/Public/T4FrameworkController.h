// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/T4EngineObjectID.h"
#include "T4Engine/Public/Action/T4EngineActionKey.h"

#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "GenericPlatform/ICursor.h"

/**
  * https://docs.unrealengine.com/ko/Gameplay/Framework/Controller/PlayerController/index.html
 */
enum ET4GameControllerType
{
	GameController_Player,
	GameController_NPC,

	GameController_None
};

class AController;
class UInputComponent;
class IT4ActionControl;
class IT4GameObject;
class IT4GameWorld;
class IT4NPCAIController;
class IT4PlayerController;
// #34
class T4FRAMEWORK_API IT4GameController
{
public:
	virtual ~IT4GameController() {}

	virtual ET4LayerType GetLayerType() const = 0;
	virtual ET4GameControllerType GetGameControllerType() const = 0;

	virtual bool SetGameObject(const FT4ObjectID& InNewTargetID) = 0;
	virtual void ClearGameObject(bool bInSetDefaultPawn) = 0;

	virtual bool HasGameObject() const = 0;
	virtual const FT4ObjectID& GetGameObjectID() const = 0;
	virtual IT4GameObject* GetGameObject() const = 0;

	virtual bool HasObserverObject() const = 0; // #52
	virtual bool SetObserverObject(const FT4ObjectID& InNewObserverID) = 0; // #52
	virtual void ClearObserverObject() = 0; // #52

	virtual IT4GameWorld* GetGameWorld() const = 0; // #52

	virtual bool HasPlayingAction(const FT4ActionKey& InActionKey) const = 0; // #20

	virtual AController* GetAController() = 0;
};

class T4FRAMEWORK_API IT4NPCAIController : public IT4GameController
{
public:
	virtual ~IT4NPCAIController() {}
};

class T4FRAMEWORK_API IT4PlayerController : public IT4GameController
{
public:
	virtual ~IT4PlayerController() {}

	// #15 : Editor 환경에서 HasAuthority 를 명시적으로 구분하기 위해 도입
	//       동일 프로세스에서 Player 의 Role 이 바뀌며 C/S Player 로 바뀌기 때문에 혼란스러운 점이 있기 때문
	virtual bool CheckAuthority() const = 0; // return HasAuthority()

	virtual AController* GetController() = 0; // #42

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

	DECLARE_MULTICAST_DELEGATE_OneParam(FOnViewTargetChanged, IT4GameObject*);
	virtual FOnViewTargetChanged& GetOnViewTargetChanged() = 0;
#endif
};
