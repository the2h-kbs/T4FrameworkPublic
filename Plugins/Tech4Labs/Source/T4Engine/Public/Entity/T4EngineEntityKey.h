// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4EngineEntityTypes.h"
#include "T4EngineEntityKey.generated.h"

/**
  * #54
 */
USTRUCT(BlueprintType)
struct FT4EntityKey
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	ET4EntityType Type;

	UPROPERTY(EditAnywhere)
	FName AssetName;

public:
	FT4EntityKey()
		: Type(ET4EntityType::None)
		, AssetName(NAME_None)
	{
	}

	FT4EntityKey(const FName& InName)
		: Type(ET4EntityType::None)
		, AssetName(InName)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const TCHAR* InAssetName)
		: Type(InType)
		, AssetName(InAssetName)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const FName& InAssetName)
		: Type(InType)
		, AssetName(InAssetName)
	{
	}

	FT4EntityKey(const ET4EntityType InType, const FString& InAssetName)
		: Type(InType)
		, AssetName(*InAssetName)
	{
	}

	FT4EntityKey(const FT4EntityKey& InEntityKey)
		: Type(InEntityKey.Type)
		, AssetName(InEntityKey.AssetName)
	{
	}

	FORCEINLINE FT4EntityKey operator=(const FT4EntityKey& InRhs)
	{
		Type = InRhs.Type;
		AssetName = InRhs.AssetName;
		return *this;
	}

	FORCEINLINE FT4EntityKey operator=(const FString& InRhs)
	{
		AssetName = *(InRhs);
		return *this;
	}

	FORCEINLINE bool operator==(const FT4EntityKey& InRhs) const
	{
		return (AssetName == InRhs.AssetName && Type == InRhs.Type) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4EntityKey& InRhs) const
	{
		return (AssetName != InRhs.AssetName || Type != InRhs.Type) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4EntityKey& InRhs)
	{
		return HashCombine(GetTypeHash(InRhs.Type), GetTypeHash(InRhs.AssetName.ToString()));
	}

	FORCEINLINE bool IsValid() const
	{
		return (ET4EntityType::None != Type && AssetName != NAME_None) ? true : false;
	}

	FORCEINLINE bool CheckType(const ET4EntityType InType) const
	{
		return (Type == InType) ? true : false;
	}

	FORCEINLINE FString ToNameString() const
	{
		return AssetName.ToString();
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
