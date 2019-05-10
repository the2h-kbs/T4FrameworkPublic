// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Public/Protocol/T4PacketCS_Status.h"
#include "Public/Protocol/T4PacketCS_Move.h"
#include "Public/Protocol/T4PacketCS_Action.h"
#include "Public/Protocol/T4PacketCS_Command.h"
#include "Public/Protocol/T4PacketCS.h" // #25

#include "Public/Protocol/T4PacketSC_World.h"
#include "Public/Protocol/T4PacketSC_Status.h"
#include "Public/Protocol/T4PacketSC_Move.h"
#include "Public/Protocol/T4PacketSC_Action.h"
#include "Public/Protocol/T4PacketSC.h" // #25

#include "T4Engine/Classes/Action/T4ActionMinimal.h"

#include "T4Engine/Public/T4Engine.h"

#include "GameFramework/PlayerController.h"

#include "T4PlayerController.generated.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Framework/Controller/PlayerController/index.html
 */
class AT4PlayerDefaultPawn;
class UT4SpringArmComponent;
class UT4CameraComponent;
class IT4PacketHandlerSC;
class IT4PacketHandlerCS;
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
	// IT4Controller
	ET4SceneLayer GetSceneLayer() const override { return SceneLayer; }
	ET4ControllerType GetType() const override { return ET4ControllerType::Player; }

	bool SetTargetObject(const FT4ObjectID& InNewTargetID) override;
	void ClearTargetObject(bool bInSetDefaultPawn) override;

	bool HasTargetObject() const override { return TargetObjectID.IsValid(); }
	const FT4ObjectID& GetTargetObjectID() const override { return TargetObjectID; }
	IT4GameObject* GetTargetObject() const override;
	IT4ActionRoot* GetTargetObjectActionRoot() const override; // #23

	bool HasPlayingAction(const FT4ActionKey& InActionKey) const override; // #20

	IT4NPController* CastNPCController() override { return nullptr; }
	IT4PlayerController* CastPlayerController() override { return static_cast<IT4PlayerController*>(this); }

public:
	// IT4PlayerController
	bool CheckAuthority() const override { return HasAuthority(); }

	UInputComponent* NewInputComponent() override;
	void SetInputComponent(UInputComponent* InInputComponent) override;
	void OnSetInputMode(ET4InputMode InMode) override;

	FRotator GetViewControlRotation() const override;

	ET4CameraType GetCameraType() const override { return ET4CameraType::TPS; }

	FVector GetCameraLocation() const override;
	FRotator GetCameraRotation() const override;
	FVector GetCameraLookAtLocation() const override; // #30

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
#endif

private:
	IT4GameObject* GetGameObject(const FT4ObjectID& InObjectID) const;

	void AttachCameraComponent(APawn* InOuter, USceneComponent* InParentComponent);
	void DetachCameraComponent();

	void T4SetMouseLocation(const int InX, const int InY); // #30
	bool T4GetMousePosition(float& InLocationX, float& InLocationY) const; // #30

private:
	ET4SceneLayer SceneLayer;
	FT4ObjectID TargetObjectID;

	bool bCameraMoveLocked;
	FVector2D SaveMouseLocation;

	TWeakObjectPtr<AT4PlayerDefaultPawn> CachedDefaultPawn;

	TWeakObjectPtr<UT4SpringArmComponent> CameraSpringArmComponent;
	TWeakObjectPtr<UT4CameraComponent> CameraComponent;

	float CachedCameraSpringTargetArmLength;
	FRotator CachedCameraRotation;

#if WITH_EDITOR
	IT4EditorViewportClient* EditorViewportClient; // #30
#endif

	// #27 : Protocol
	bool CS_RecvPacket_Validate(const FT4PacketCtoS* InPacket);
	void CS_RecvPacket_Implementation(const FT4PacketCtoS* InPacket);

	void SC_RecvPacket_Implementation(const FT4PacketStoC* InPacket);

private:
	friend class FT4PacketHandlerCS;

	// #T4_ADD_PACKET_TAG
	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_MoveWarmup(const FT4PacketMoveWarmupCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_JumpWarmup(const FT4PacketJumpWarmupCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Locked(const FT4PacketLockedCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_UnLocked(const FT4PacketUnLockedCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Equip(const FT4PacketEquipCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_UnEquip(const FT4PacketUnEquipCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_Attack(const FT4PacketAttackCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdChangeWorld(const FT4PacketCmdChangeWorldCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdPCEnter(const FT4PacketCmdPCEnterCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdPCLeave(const FT4PacketCmdPCLeaveCS& InPacket);

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdNPCEnter(const FT4PacketCmdNPCEnterCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdNPCLeave(const FT4PacketCmdNPCLeaveCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdFOEnter(const FT4PacketCmdFOEnterCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdFOLeave(const FT4PacketCmdFOLeaveCS& InPacket); // #31

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdItemEnter(const FT4PacketCmdItemEnterCS& InPacket); // #41

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdItemLeave(const FT4PacketCmdItemLeaveCS& InPacket); // #41

	UFUNCTION(Reliable, server, WithValidation)
	void CS_RecvPacket_CmdTeleport(const FT4PacketCmdTeleportCS& InPacket);

private:
	friend class FT4PacketHandlerSC;

	// #T4_ADD_PACKET_TAG
	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ChangeWorld(const FT4PacketChangeWorldSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MyPCEnter(const FT4PacketMyPCEnterSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_PCEnter(const FT4PacketPCEnterSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_PCLeave(const FT4PacketPCLeaveSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_NPCEnter(const FT4PacketNPCEnterSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_NPCLeave(const FT4PacketNPCLeaveSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_FOEnter(const FT4PacketFOEnterSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_FOLeave(const FT4PacketFOLeaveSC& InPacket); // #31

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ItemEnter(const FT4PacketItemEnterSC& InPacket); // #41

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_ItemLeave(const FT4PacketItemLeaveSC& InPacket); // #41

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_MoveTo(const FT4PacketMoveToSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_JumpTo(const FT4PacketJumpToSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_TeleportTo(const FT4PacketTeleportToSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Locked(const FT4PacketLockedSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_UnLocked(const FT4PacketUnLockedSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Equip(const FT4PacketEquipSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_UnEquip(const FT4PacketUnEquipSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Attack(const FT4PacketAttackSC& InPacket);

	UFUNCTION(Reliable, client)
	void SC_RecvPacket_Effect(const FT4PacketEffectSC& InPacket);
};
