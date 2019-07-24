// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineActionKey.h"
#include "T4EngineActionTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */

// WARN : Action 추가 시는 아래 테그를 찾아 추가된 액션을 구현해주어야 함!!
// #T4_ADD_ACTION_TAG

UENUM()
enum class ET4ActionType : uint32
{
	Branch, // #54

	// begin World

	ChangeWorld,

	ObjectEnter,
	ObjectLeave,

	// begin Object

	MoveAsync, // #40
	MoveSync, // #40
	Jump,
	Roll, // #46
	Teleport,
	Turn,

	SpecialMove, // #54

	MoveStop, // #52
	MoveSpeedSync, // #52

	LockOn,

	EquipWeapon, // #22
	UnEquipWeapon, // #48
	ExchangeCostume, // #37

	Animation,
	Particle,
	Decal, // #54

	TimeScale, // #54
	CameraWork, // #54

	Conti, // #24

	Stop,

	Dummy, // #56 : Conti Editor 에서 Invisible or Isolate 로 출력을 제어할 때 더미용으로 사용 (delay, duration 동작 보장)

	// begin Editor
	EditorReload, // #37

	None,
};

// #24
UENUM()
enum class ET4LifecyclePolicy : uint8
{
	Auto, // #56
	Duration,

	Looping UMETA(Hidden), // Code-Base, Other Solution

	Default, // Default = Auto
};

UENUM()
enum class ET4LoadingPolicy : uint8
{
	Async, // Default

	Sync, // #8, #56 : 사용 제한 필요!!! 만약을 대비해 준비는 해둔 것!

	Default UMETA(Hidden) // Default = Async
};

// #54
UENUM()
enum class ET4BranchCondition : uint8
{
	Always,
	
	CompareActiveName,

	Default, // Default = Auto
};

UENUM()
enum class ET4AttachParent : uint8 // #54
{
	Object, // Default
	World,

	Default,
};

UENUM()
enum class ET4TurnType : uint8
{
	Current,

	TargetLocation,
	TargetDirection,
	TargetObject,

	TargetYawAngle, // #40, #44

	Default,
};

UENUM()
enum class ET4EditorReload : uint8
{
	All,
	Attribute,
	Data,

	None,
};
