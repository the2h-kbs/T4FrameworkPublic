// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/T4Framework.h" // #25, #42

#include "T4Engine/Public/Action/T4ActionKey.h"

#include "GameFramework/PlayerController.h"

#include "T4PlayerController.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html
 */
class AT4PlayerDefaultPawn;
class UT4SpringArmComponent;
class UT4CameraComponent;
class IT4GameObject;

UCLASS()
class T4FRAMEWORK_API AT4PlayerController : public APlayerController, public IT4PlayerController
{
	GENERATED_UCLASS_BODY()

public:
	void SetupInputComponent() override;
	void PostInitializeComponents() override;

	void TickActor(
		float InDeltaTime, 
		enum ELevelTick InTickType,
		FActorTickFunction& InThisTickFunction
	) override;

	/** If true, actor is ticked even if TickType==LEVELTICK_ViewportsOnly	 */
	bool ShouldTickIfViewportsOnly() const override; // #17

	void EndPlay(const EEndPlayReason::Type InEndPlayReason) override;

protected:
	void BeginPlay() override;

	void OnPossess(APawn* InPawn) override;
	void OnUnPossess() override;

public:
	// IT4GameplayController
	ET4LayerType GetLayerType() const override { return LayerType; }

#if (WITH_EDITOR || WITH_SERVER_CODE)
	virtual void OnNotifyAIEvent(const FName& InEventName) override {}; // #63
#endif

	bool SetGameObject(const FT4ObjectID& InNewTargetID) override;
	void ClearGameObject(bool bInSetDefaultPawn) override;

	bool HasGameObject() const override { return GameObjectID.IsValid(); }
	const FT4ObjectID& GetGameObjectID() const override { return GameObjectID; }
	IT4GameObject* GetGameObject() const override;

	bool HasObserverObject() const override { return ObserverObjectID.IsValid(); } // #52
	bool SetObserverObject(const FT4ObjectID& InNewObserverID) override; // #52
	void ClearObserverObject() override; // #52

	IT4GameWorld* GetGameWorld() const override; // #52

	bool HasPlayingAction(const FT4ActionKey& InActionKey) const override; // #20

	AController* GetAController() override;
	IT4GameplayController* GetGameplayController() override { return static_cast<IT4GameplayController*>(this); } // #63

	// IT4GameplayController
	ET4ControllerType GetControllerType() const override 
	{ 
		return ET4ControllerType::Controller_Player; 
	}

public:
	// IT4PlayerController
	bool CheckAuthority() const override { return HasAuthority(); }

	UInputComponent* NewInputComponent() override;
	void SetInputComponent(UInputComponent* InInputComponent) override;
	void OnSetInputMode(ET4InputMode InMode) override;

	FViewport* GetViewport() const override; // #68

	FRotator GetViewControlRotation() const override;

	ET4CameraType GetCameraType() const override { return CameraTypeSelected; } // #40
	float GetCameraFOV() const override { return CameraFOV; } // #40
	FVector GetCameraLocation() const override;
	FRotator GetCameraRotation() const override;
	FVector GetCameraLookAtLocation() const override; // #30

	void SwitchCameraType(ET4CameraType InCameraType) override; // #40

	void SetCameraZoom(float InAmount) override;
	void SetCameraPitch(float InAmount) override;
	void SetCameraYaw(float InAmount) override;

	void SetFreeCameraMoveDirection(const FVector& InLocation) override;

	void SetCameraLock(bool bInLock) override;
	bool IsCameraLocked() const override { return bCameraMoveLocked; }

	bool GetMousePositionToWorldRay(
		FVector& OutStartPosition,
		FVector& OutStartDirection
	) override;

	void SetMouseCursorType(EMouseCursor::Type InMouseCursorType) override;
	void ShowMouseCursor(bool InShow) override;

#if WITH_EDITOR
	// see UGameViewportClient::InputKey
	bool EditorInputKey(FKey InKey, EInputEvent InEvent, float InAmountDepressed, bool bInGamepad) override; // #30

	// see UGameViewportClient::InputAxis
	bool EditorInputAxis(FKey InKey, float InDelta, float InDeltaTime, int32 InNumSamples, bool bInGamepad) override; // #30

	void EditorSetViewportClient(IT4EditorViewportClient* InEditorViewportClient) override
	{
		EditorViewportClient = InEditorViewportClient;
	}

	FT4OnViewTargetChanged& GetOnViewTargetChanged() override { return OnViewTargetChanged; } // #39
#endif

protected:
	virtual void NotifyAdvance(float InDeltaTime) {} // #49
	virtual void NotifyPossess(IT4GameObject* InNewGameObject) {} // #49
	virtual void NotifyUnPossess(IT4GameObject* InOldGameObject) {} // #49

	IT4GameObject* FindGameObject(const FT4ObjectID& InObjectID) const; // #49

#if WITH_EDITOR
	IT4EditorGameplayAIHandler* GetEditorGameplayAIHandler() const; // #60
#endif

private:
	void AttachCameraComponent(APawn* InOuter);
	void DetachCameraComponent();

	void T4SetMouseLocation(const int InX, const int InY); // #30
	bool T4GetMousePosition(float& InLocationX, float& InLocationY) const; // #30

	APawn* GetTargetPawnSelected(); // #52

protected:
	ET4LayerType LayerType;

private:
	FT4ObjectID GameObjectID;
	FT4ObjectID ObserverObjectID; // #52

	TWeakObjectPtr<AT4PlayerDefaultPawn> CachedDefaultPawn;

	bool bCameraTypeDirty; // #40
	ET4CameraType CameraTypeSelected; // #40
	bool bCameraMoveLocked;
	FVector2D SaveMouseLocation;

	float CachedCameraSpringTargetArmLength;
	FRotator CachedCameraRotation;

	// #40
	float CameraFOV;
	float CameraZoomSpeed;
	float CameraZoomDistanceMin;
	float CameraZoomDistanceMax;
	// ~#40

	// #48
	FName MainWeaponDataIDName;
	// ~#48

	UPROPERTY(Transient)
	UT4SpringArmComponent* CameraSpringArmComponent;

	UPROPERTY(Transient)
	UT4CameraComponent* CameraComponent;

#if WITH_EDITOR
	IT4EditorViewportClient* EditorViewportClient; // #30
	FT4OnViewTargetChanged OnViewTargetChanged; // #39
#endif
};
