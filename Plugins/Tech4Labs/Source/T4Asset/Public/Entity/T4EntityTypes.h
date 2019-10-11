// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EntityTypes.generated.h"

/**
  * http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/
 */
// WARN : #35 : Entity Type 을 추가한다면 아래 테그로 검색해서 모두 추가해줄 것!
// #T4_ADD_ENTITY_TAG
UENUM()
enum class ET4EntityType : uint8
{
	Map,
	Character, // #71 : Actor => Character
	Prop,
	Item, // #37 : Costume or Weapon
	Costume, // #37
	Weapon, // #37

	None
};

UENUM()
enum class ET4EntityMeshType : uint8
{
	StaticMesh,
	SkeletalMesh,
	ParticleSystem,

	None
};
UENUM()
enum class ET4EntityCharacterMeshType : uint8
{
	FullBody,
	Composite, // TODO : #37

	None
};

UENUM()
enum class ET4EntityCharacterModularType : uint8 // #72
{
	MasterPose UMETA(DisplayName = "MasterPose : Physics(X), Morph Target(O)"),
	MeshMerge UMETA(DisplayName = "MeshMerge : Physics(O), Morph Target(X)"),

	None
};

UENUM()
enum class ET4EntityPropMeshType : uint8
{
	Normal,
	RigidBody, // TODO : M3
	Prefab, // TODO : M3

	None
};

UENUM()
enum class ET4EntityReactionType : uint8 // #76
{
	Die,
	Resurrect,
	
	Hit,

	None,
};
