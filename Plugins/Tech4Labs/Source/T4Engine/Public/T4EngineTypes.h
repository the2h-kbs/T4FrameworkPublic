// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Core/Public/T4CoreTypes.h"
#include "T4EngineTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
typedef int32 FT4AnimInstanceID;

UENUM()
enum class ET4WorldType : uint8
{
	Null,
	Client,
	Server,

	Max	UMETA(Hidden)
};

UENUM()
enum class ET4ObjectType : uint8
{
	Character,
	PropStatic,
	PropSkeletal,
	PropParticle,
	ItemStatic,
	ItemSkeletal,

	World,

	None UMETA(Hidden)
};

UENUM()
enum class ET4SpawnMode : uint8 // #54
{
	All,
	Client,
	Server,

	Editor,

	Max	UMETA(Hidden)
};

UENUM()
enum class ET4ControllerType : uint8
{
	Player,
	NPC,

	None UMETA(Hidden)
};

enum ET4InputMode
{
	GameAndUI,
	GameOnly,
};

enum ET4CameraType
{
	TPS,
	ShoulderView, // #40

	Editor,
	None,
};

UENUM()
enum class ET4MoveMode : uint8
{
	Sync,
	Async,

	Current, // #52
	Count,
};

UENUM()
enum class ET4CollisionChannel : uint8
{
	WorldStatic,
	SpawnObject,
	CollisionVisibility,

	Max	UMETA(Hidden)
};

// #38
enum ET4MoveSpeed
{
	Stand,
	Walk,
	Run,
	FastRun,

	Count,
};

UENUM()
enum class ET4AnimInstance
{
	Human_Basic, // #38
	Human_Locomotion, // #38

	Animal,

	None
};

enum ET4AnimStatePriority
{
	AnimPriority_High,
	AnimPriority_Medium,
	AnimPriority_Low,
};

enum ET4MoveAngle // #38
{
	MoveAngle_Front,
	MoveAngle_Back,
	MoveAngle_Left,
	MoveAngle_Right,

	MoveAngle_Nums,
};

enum ET4TurnAngle // #44
{
	TurnAngle_Left,
	TurnAngle_Right,
	TurnAngle_Back,
	TurnAngle_Same,

	TurnAngle_Nums,
};

enum ET4FootStance // #38, #44
{
	FootStance_Left,
	FootStance_Right,
	FootStance_Unarmed,

	FootStance_Nums,
};
