// Copyright 2019 Tech4 Labs, Inc. All Rights Reserved.

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
	World,
	Actor,
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
enum class ET4EntityWorldType : uint8
{
	Normal,
	Seamless, // TODO : M3

	Max
};

UENUM()
enum class ET4EntityActorMeshType : uint8
{
	FullBody,
	Composite, // TODO : #37

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
enum class ET4EntityAnimInstanceType
{
	Human,
	Animal,

	None
};

USTRUCT(BlueprintType)
struct FT4EntityKey
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4EntityType Type;

	UPROPERTY(EditAnywhere)
	FName Name;

public:
	FT4EntityKey()
		: Type(ET4EntityType::None)
		, Name(NAME_None)
	{
	}

	FT4EntityKey(const FName& InName)
		: Type(ET4EntityType::None)
		, Name(InName)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const TCHAR* InName)
		: Type(InType)
		, Name(InName)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const FName& InName)
		: Type(InType)
		, Name(InName)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const FString& InName)
		: Type(InType)
		, Name(*InName)
	{
	}

	FT4EntityKey(const FT4EntityKey& InDBKey)
		: Type(InDBKey.Type)
		, Name(InDBKey.Name)
	{
	}

	FORCEINLINE FT4EntityKey operator=(const FT4EntityKey& InRhs)
	{
		Type = InRhs.Type;
		Name = InRhs.Name;
		return *this;
	}

	FORCEINLINE FT4EntityKey operator=(const FString& InRhs)
	{
		Name = *(InRhs);
		return *this;
	}

	FORCEINLINE bool operator==(const FT4EntityKey& InRhs) const
	{
		return (Name == InRhs.Name && Type == InRhs.Type) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4EntityKey& InRhs) const
	{
		return (Name != InRhs.Name || Type != InRhs.Type) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4EntityKey& InRhs)
	{
		return HashCombine(GetTypeHash(InRhs.Type), GetTypeHash(InRhs.Name.ToString()));
	}

	FORCEINLINE bool IsValid() const
	{
		return (ET4EntityType::None != Type && Name != NAME_None) ? true : false;
	}

	FORCEINLINE bool CheckType(const ET4EntityType InType) const
	{
		return (Type == InType) ? true : false;
	}

	FORCEINLINE FString ToNameString() const
	{
		return Name.ToString();
	}

	FORCEINLINE const TCHAR* ToTypeString() const
	{
		static const TCHAR* EntityTypeStrings[] =
		{
			TEXT("World"),
			TEXT("Actor"),
			TEXT("Prop"),
			TEXT("Item"), // #37 : Costume or Weapon
			TEXT("Costume"), // #37
			TEXT("Weapon"),
			TEXT("Max"),
		};
		static_assert(ARRAY_COUNT(EntityTypeStrings) == (uint8)(ET4EntityType::None) + 1, "Entity doesn't match!");
		check(uint8(Type) < ARRAY_COUNT(EntityTypeStrings));
		return EntityTypeStrings[uint8(Type)];
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(
			TEXT("FT4EntityKey:%s=%s"),
			*(ToNameString()),
			ToTypeString()
		);
	}
};
