// Copyright 2019 SoonBo Noh. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "T4Engine/Public/Action/T4ActionKey.h" // #48
#include "T4GameTableDataTypes.generated.h"

/**
  * #48
 */
UENUM()
enum class ET4GameDataType : uint8
{
	World,
	Player,
	NPC,
	FO,
	Item_Weapon, // #48
	Item_Costume, // #48

	Skill,
	SkillSet, // #50
	Effect,

	Nums,
};

USTRUCT()
struct FT4GameDataID
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	ET4GameDataType Type;

	UPROPERTY(EditAnywhere)
	FName RowName;

public:
	FT4GameDataID()
		: Type(ET4GameDataType::Nums)
		, RowName(NAME_None)
	{
	}

	FT4GameDataID(const ET4GameDataType InType)
		: Type(InType)
		, RowName(NAME_None)
	{
	}

	FT4GameDataID(const ET4GameDataType InType, const TCHAR* InRowName)
		: Type(InType)
		, RowName(InRowName)
	{
	}

	FT4GameDataID(const ET4GameDataType InType, const FName& InRowName)
		: Type(InType)
		, RowName(InRowName)
	{
	}

	FT4GameDataID(const ET4GameDataType InType, const FString& InRowName)
		: Type(InType)
		, RowName(*InRowName)
	{
	}

	FT4GameDataID(const FT4GameDataID& InGameDataID)
		: Type(InGameDataID.Type)
		, RowName(InGameDataID.RowName)
	{
	}

	FORCEINLINE FT4GameDataID operator=(const FT4GameDataID& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4GameDataID operator=(const FString& InRhs)
	{
		RowName = *(InRhs);
		return *this;
	}

	FORCEINLINE bool operator==(const FT4GameDataID& InRhs) const
	{
		return (RowName == InRhs.RowName && Type == InRhs.Type) ? true : false;
	}

	FORCEINLINE bool operator!=(const FT4GameDataID& InRhs) const
	{
		return (RowName != InRhs.RowName || Type != InRhs.Type) ? true : false;
	}

	FORCEINLINE friend uint32 GetTypeHash(const FT4GameDataID& InRhs)
	{
		return HashCombine(GetTypeHash(InRhs.Type), GetTypeHash(InRhs.RowName.ToString()));
	}

	FORCEINLINE bool IsValid() const
	{
		return (ET4GameDataType::Nums != Type && RowName != NAME_None) ? true : false;
	}

	FORCEINLINE bool CheckType(const ET4GameDataType InType) const
	{
		return (Type == InType) ? true : false;
	}

	FORCEINLINE FT4ActionKey ToPrimaryActionKey() const // #48
	{
		return FT4ActionKey(RowName, true);
	}

	FORCEINLINE FT4ActionKey ToOverlapActionKey() const // #49
	{
		return FT4ActionKey(RowName, false);
	}

	FORCEINLINE FString ToNameString() const
	{
		return RowName.ToString();
	}

	FORCEINLINE const TCHAR* ToTypeString() const
	{
		static const TCHAR* GameTableTypeStrings[] =
		{
			TEXT("World"),
			TEXT("Player"),
			TEXT("NPC"),
			TEXT("FO"),
			TEXT("Item_Weapon"), // #37
			TEXT("Item_Costume"),
			TEXT("Skill"),
			TEXT("SkillSet"), // #50
			TEXT("Effect"),
			TEXT("None"),
		};
		static_assert(ARRAY_COUNT(GameTableTypeStrings) == (uint8)(ET4GameDataType::Nums) + 1, "GameTableType doesn't match!");
		check(uint8(Type) < ARRAY_COUNT(GameTableTypeStrings));
		return GameTableTypeStrings[uint8(Type)];
	}

	FORCEINLINE FString ToString() const
	{
		return FString::Printf(
			TEXT("FT4GameDataID:%s=%s"),
			*(ToNameString()),
			ToTypeString()
		);
	}
};

static const FT4GameDataID InvalidGameDataID;

USTRUCT()
struct FT4GameSkillDataID : public FT4GameDataID
{
	GENERATED_USTRUCT_BODY()

public:
	FT4GameSkillDataID()
		: FT4GameDataID(ET4GameDataType::Skill)
	{
	}

	FT4GameSkillDataID(const FName& InRowName)
		: FT4GameDataID(ET4GameDataType::Skill, InRowName)
	{
	}

	FORCEINLINE FT4GameDataID operator=(const FT4GameSkillDataID& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}

	FORCEINLINE FT4GameSkillDataID operator=(const FT4GameDataID& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}
};

USTRUCT()
struct FT4GameEffectDataID : public FT4GameDataID
{
	GENERATED_USTRUCT_BODY()

public:
	FT4GameEffectDataID()
		: FT4GameDataID(ET4GameDataType::Effect)
	{
	}

	FT4GameEffectDataID(const FName& InRowName)
		: FT4GameDataID(ET4GameDataType::Effect, InRowName)
	{
	}

	FORCEINLINE FT4GameDataID operator=(const FT4GameEffectDataID& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}
};

// #50
USTRUCT()
struct FT4GameItemWeaponDataID : public FT4GameDataID
{
	GENERATED_USTRUCT_BODY()

public:
	FT4GameItemWeaponDataID()
		: FT4GameDataID(ET4GameDataType::Item_Weapon)
	{
	}

	FORCEINLINE FT4GameDataID operator=(const FT4GameItemWeaponDataID& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}
};

// #50
USTRUCT()
struct FT4GameSkillSetDataID : public FT4GameDataID
{
	GENERATED_USTRUCT_BODY()

public:
	FT4GameSkillSetDataID()
		: FT4GameDataID(ET4GameDataType::SkillSet)
	{
	}

	FORCEINLINE FT4GameDataID operator=(const FT4GameSkillSetDataID& InRhs)
	{
		Type = InRhs.Type;
		RowName = InRhs.RowName;
		return *this;
	}
};