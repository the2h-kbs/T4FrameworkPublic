// Copyright 2019 Tech4 Labs. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Classes/Action/T4ActionTypes.h"
#include "Public/T4EngineTypes.h"
#include "Public/T4EngineStructs.h"
#include "T4Core/Classes/Entity/T4EntityTypes.h"

#include "GenericPlatform/ICursor.h"
#include "CollisionQueryParams.h"

/**
  * http://api.unrealengine.com/KOR/Gameplay/Networking/Travelling/
 */
struct FT4WorldAction;
struct FT4ActionParameters; // #28

class IT4GameWorld;
class IT4GameObject;

class IT4Controller;
class IT4AIController;
class IT4PlayerController;

struct FT4ObjectAction;
struct FT4StopAction;
struct FT4ObjectEnterAction;
struct FT4ActionParameters; // #28

struct FT4PacketCtoS;
struct FT4PacketStoC;

class UInputComponent;
class AController;

class T4ENGINE_API IT4AnimControl
{
public:
	virtual ~IT4AnimControl() {}

	virtual float GetDurationSec(
		ET4AnimMontageLayer InAnimMontageLayer, 
		const FName& InSectionName
	) = 0;

	virtual FT4AnimInstanceID PlayAnimation(
		ET4AnimMontageLayer InAnimMontageLayer,
		const FName& InSectionName
	) = 0;

	virtual bool IsPlayingAnimation(FT4AnimInstanceID InAnimInstanceID) = 0;
};

class T4ENGINE_API IT4ActionNode // #23
{
public:
	virtual ~IT4ActionNode() {}

	virtual bool IsPlaying() const = 0;
	virtual bool IsLooping() const = 0;

	virtual IT4ActionNode* GetParentNode() const = 0;

	virtual IT4ActionNode* AddChildNode(const FT4ObjectAction* InAction) = 0;
	virtual bool RemoveChildNode(const FT4StopAction* InAction) = 0;

	virtual uint32 NumChildActions() const = 0;
};

class T4ENGINE_API IT4ActionRoot // #23
{
public:
	virtual ~IT4ActionRoot() {}

	virtual bool IsPlaying(const FT4ActionKey& InActionKey) const = 0;
	virtual bool IsLooping(const FT4ActionKey& InActionKey) const = 0;

	virtual IT4ActionNode* GetChildNodeByPrimary(const FT4ActionKey& InPrimaryActionKey) = 0;
	virtual bool GetChildNodes(
		const FT4ActionKey& InSameActionKey, 
		TArray<IT4ActionNode*>& OutNodes
	) = 0;

	virtual uint32 NumPlayingActions() const = 0;
};

class T4ENGINE_API IT4GameObject
{
public:
	virtual ~IT4GameObject() {}

	virtual ET4SceneLayer GetSceneLayer() const = 0;
	virtual ET4ObjectType GetType() const = 0;

	virtual const FT4ObjectID& GetObjectID() const = 0;

	virtual const FName& GetName() const = 0;

	virtual const FT4EntityKey& GetEntityKey() const = 0; // #35
	virtual const FName& GetContentUniqueName() const = 0;

	virtual bool IsLoadComplated() const = 0;

	virtual void OnReset() = 0;

	virtual bool OnExecute(
		const FT4ObjectAction* InAction, // WARN : only reference
		const FT4ActionParameters* InActionParam = nullptr // WARN : only reference
	) = 0;

	virtual bool IsPlayer() const = 0;

	// #34 : for Server All or Client Only Player
	virtual IT4Controller* GetController() const = 0; // #34
	virtual void SetController(IT4Controller* InController) = 0; // #34

	virtual APawn* GetPawn() = 0;

	virtual IT4AnimControl* GetAnimControl() const = 0; // #14
	virtual IT4ActionRoot* GetActionRoot() const = 0; // #20
	virtual const FT4GameObjectProperty& GetPropertyConst() const = 0; // #34

	virtual bool HasPlayingAction(const FT4ActionKey& InActionKey) const = 0;

	virtual const FVector GetCOMLocation() const = 0; // #18 : WARN : Center of mass 캐릭터의 경우 Coll Capsule 의 중점이다.
	virtual const FVector GetGroundLocation() const = 0;
	virtual const FRotator GetRotation() const = 0;
	virtual const FVector GetMovementVelocity() const = 0;
	virtual const float GetMovementSpeed() const = 0;

	virtual bool GetSocketLocation(const FName& InSocketName, FVector& OutLocation) const = 0; // #18
	virtual bool GetSocketRotation(
		const FName& InSocketName, 
		ERelativeTransformSpace InTransformSpace, 
		FRotator& OutRotation
	) const = 0; // #18

	virtual void SetHeightOffset(float InOffset) = 0; // #18
};

class T4ENGINE_API IT4ObjectFactory
{
public:
	virtual ~IT4ObjectFactory() {};

	virtual IT4GameObject* CreateGameObject(
		ET4SceneLayer InSceneLayer,
		const FT4ObjectEnterAction* InAction
	) = 0;

	virtual void DestroyGameObject(IT4GameObject* InObject) = 0;
};

// #34
class T4ENGINE_API IT4Controller
{
public:
	virtual ~IT4Controller() {}

	virtual ET4SceneLayer GetSceneLayer() const = 0;
	virtual ET4ControllerType GetType() const = 0;

	virtual bool SetTargetObject(const FT4ObjectID& InNewTargetID) = 0;
	virtual void ClearTargetObject(bool bInSetDefaultPawn) = 0;

	virtual bool HasTargetObject() const = 0;
	virtual const FT4ObjectID& GetTargetObjectID() const = 0;
	virtual IT4GameObject* GetTargetObject() const = 0;
	virtual IT4ActionRoot* GetTargetObjectActionRoot() const = 0;

	virtual bool HasPlayingAction(const FT4ActionKey& InActionKey) const = 0; // #20

	virtual IT4AIController* CastAIController() = 0;
	virtual IT4PlayerController* CastPlayerController() = 0;
};

class T4ENGINE_API IT4AIController : public IT4Controller
{
public:
	virtual ~IT4AIController() {}
};

class T4ENGINE_API IT4PlayerController : public IT4Controller
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

	virtual FVector GetCameraLocation() const = 0;
	virtual FRotator GetCameraRotation() const = 0;
	virtual FVector GetCameraLookAtLocation() const = 0; // #30

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
#endif
};

typedef TArray<IT4GameObject*>::TConstIterator FConstGameObjectIterator;

class T4ENGINE_API IT4GameWorld
{
public:
	virtual ~IT4GameWorld() {}

	virtual ET4SceneLayer GetSceneLayer() const = 0;
	virtual ET4WorldType GetType() const = 0;

	virtual void OnReset() = 0;

	virtual void OnProcessPre(float InDeltaTime) = 0; // #34 : OnWorldPreActorTick
	virtual void OnProcessPost(float InDeltaTime) = 0; // #34 : OnWorldPostActorTick

	virtual bool OnExecute(
		const FT4WorldAction* InAction, // WARN : only reference
		const FT4ActionParameters* InActionParam = nullptr // WARN : only reference
	) = 0;

	virtual UWorld* GetWorld() const = 0;
	
	virtual uint32 GetNumObjects() const = 0;

	virtual FConstGameObjectIterator GetObjectIterator() const = 0;

	virtual IT4GameObject* FindObject(const FT4ObjectID& InObjectID) const = 0;

	virtual bool QueryLineTraceSingle(
		ET4CollisionChannel InCollisionChannel,
		const FVector& InStartLocation,
		const FVector& InEndLocation,
		const FCollisionQueryParams& InCollisionQueryParams, // FCollisionQueryParams::DefaultQueryParam
		FT4HitSingleResult& OutHitResult
	) = 0;

	virtual bool QueryLineTraceSingle(
		ET4CollisionChannel InCollisionChannel,
		const FVector& InStartLocation, 
		const FVector& InStartDirection,
		const float InMaxDistance, // DefaultLineTraceMaxDistance
		const FCollisionQueryParams& InCollisionQueryParams, // FCollisionQueryParams::DefaultQueryParam
		FT4HitSingleResult& OutHitResult
	) = 0;

	virtual bool GetRandomLocationInNavigableRadius(
		const FVector& InOrigin, 
		float InMaxRadius,
		FVector& OutLocation
	) = 0; // #31

	virtual bool ProjectPointToNavigation(
		const FVector& InGoal,
		const FVector& InExtent, // INVALID_NAVEXTENT, FVector::ZeroVector
		FVector& OutLocation
	) = 0; // #31

	// Client Only
	virtual FVector GetCameraLocation() const = 0;
	virtual FRotator GetCameraRotation() const = 0;

	virtual IT4PlayerController* GetPlayerController() = 0;
	virtual bool SetPlayerController(IT4PlayerController* InPlayerController) = 0;

	virtual bool HasPlayerObject() const = 0;
	virtual bool IsPlayerObject(const FT4ObjectID& InObjectID) const = 0;
	virtual bool IsPlayerObject(IT4GameObject* InGameObject) const = 0;

	// Server Only
	virtual bool QueryNearestObjects(
		const FVector& InOriginLocation,
		const float InMaxDistance,
		const ET4ControllerType InControllerType,
		TArray<IT4GameObject*>& OutObjects
	) = 0; // #34
};

T4ENGINE_API IT4GameWorld* CreateT4GameWorld(
	ET4WorldType InWorldType,
	FWorldContext* InWorldContext
);
T4ENGINE_API void DestroyT4GameWorld(IT4GameWorld* InGameWorld);

T4ENGINE_API IT4GameWorld* GetT4GameWorld(ET4SceneLayer InSceneWorld);

T4ENGINE_API IT4ObjectFactory* GetT4ObjectFactory();