// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Public/T4EngineTypes.h"

#include "InputCoreTypes.h"
#include "GenericPlatform/ICursor.h"

/**
  * https://docs.unrealengine.com/ko/Gameplay/Framework/Controller/PlayerController/index.html
 */
class IT4ActionControl;
class IT4GameObject;
class IT4AIController;
class IT4PlayerController;
// #34
class T4ENGINE_API IT4GameController
{
public:
	virtual ~IT4GameController() {}

	virtual ET4LayerType GetLayerType() const = 0;
	virtual ET4ControllerType GetType() const = 0;

	virtual bool SetTargetObject(const FT4ObjectID& InNewTargetID) = 0;
	virtual void ClearTargetObject(bool bInSetDefaultPawn) = 0;

	virtual bool HasTargetObject() const = 0;
	virtual const FT4ObjectID& GetTargetObjectID() const = 0;
	virtual IT4GameObject* GetTargetObject() const = 0;
	virtual IT4ActionControl* GetTargetObjectActionRoot() const = 0;

	virtual bool HasPlayingAction(const FT4ActionKey& InActionKey) const = 0; // #20

	virtual IT4AIController* CastAIController() = 0;
	virtual IT4PlayerController* CastPlayerController() = 0;

	virtual void SetMainWeaponDataIDName(const FName& InMainWeaponDataIDName) = 0; // #48
	virtual FName GetMainWeaponDataIDName() const = 0; // #48
};

class T4ENGINE_API IT4AIController : public IT4GameController
{
public:
	virtual ~IT4AIController() {}
};

class T4ENGINE_API IT4PlayerController : public IT4GameController
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
