// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4EntityTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EntityTypes() {}
// Cross Module References
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityAnimInstanceType();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityPropType();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityActorType();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityWorldType();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityMeshType();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityType();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityKey();
// End Cross Module References
	static UEnum* ET4EntityAnimInstanceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Core_ET4EntityAnimInstanceType, Z_Construct_UPackage__Script_T4Core(), TEXT("ET4EntityAnimInstanceType"));
		}
		return Singleton;
	}
	template<> T4CORE_API UEnum* StaticEnum<ET4EntityAnimInstanceType>()
	{
		return ET4EntityAnimInstanceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityAnimInstanceType(ET4EntityAnimInstanceType_StaticEnum, TEXT("/Script/T4Core"), TEXT("ET4EntityAnimInstanceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Core_ET4EntityAnimInstanceType_Hash() { return 87819405U; }
	UEnum* Z_Construct_UEnum_T4Core_ET4EntityAnimInstanceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityAnimInstanceType"), 0, Get_Z_Construct_UEnum_T4Core_ET4EntityAnimInstanceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityAnimInstanceType::None", (int64)ET4EntityAnimInstanceType::None },
				{ "ET4EntityAnimInstanceType::Human", (int64)ET4EntityAnimInstanceType::Human },
				{ "ET4EntityAnimInstanceType::Animal", (int64)ET4EntityAnimInstanceType::Animal },
				{ "ET4EntityAnimInstanceType::Max", (int64)ET4EntityAnimInstanceType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Core,
				nullptr,
				"ET4EntityAnimInstanceType",
				"ET4EntityAnimInstanceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4EntityPropType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Core_ET4EntityPropType, Z_Construct_UPackage__Script_T4Core(), TEXT("ET4EntityPropType"));
		}
		return Singleton;
	}
	template<> T4CORE_API UEnum* StaticEnum<ET4EntityPropType>()
	{
		return ET4EntityPropType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityPropType(ET4EntityPropType_StaticEnum, TEXT("/Script/T4Core"), TEXT("ET4EntityPropType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Core_ET4EntityPropType_Hash() { return 933427050U; }
	UEnum* Z_Construct_UEnum_T4Core_ET4EntityPropType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityPropType"), 0, Get_Z_Construct_UEnum_T4Core_ET4EntityPropType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityPropType::Normal", (int64)ET4EntityPropType::Normal },
				{ "ET4EntityPropType::RigidBody", (int64)ET4EntityPropType::RigidBody },
				{ "ET4EntityPropType::Prefab", (int64)ET4EntityPropType::Prefab },
				{ "ET4EntityPropType::Max", (int64)ET4EntityPropType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "Max.ToolTip", "TODO : M3" },
				{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
				{ "Prefab.ToolTip", "TODO : M3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Core,
				nullptr,
				"ET4EntityPropType",
				"ET4EntityPropType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4EntityActorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Core_ET4EntityActorType, Z_Construct_UPackage__Script_T4Core(), TEXT("ET4EntityActorType"));
		}
		return Singleton;
	}
	template<> T4CORE_API UEnum* StaticEnum<ET4EntityActorType>()
	{
		return ET4EntityActorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityActorType(ET4EntityActorType_StaticEnum, TEXT("/Script/T4Core"), TEXT("ET4EntityActorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Core_ET4EntityActorType_Hash() { return 3587140142U; }
	UEnum* Z_Construct_UEnum_T4Core_ET4EntityActorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityActorType"), 0, Get_Z_Construct_UEnum_T4Core_ET4EntityActorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityActorType::FullBody", (int64)ET4EntityActorType::FullBody },
				{ "ET4EntityActorType::Composite", (int64)ET4EntityActorType::Composite },
				{ "ET4EntityActorType::Max", (int64)ET4EntityActorType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "Max.ToolTip", "TODO : #37" },
				{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Core,
				nullptr,
				"ET4EntityActorType",
				"ET4EntityActorType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4EntityWorldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Core_ET4EntityWorldType, Z_Construct_UPackage__Script_T4Core(), TEXT("ET4EntityWorldType"));
		}
		return Singleton;
	}
	template<> T4CORE_API UEnum* StaticEnum<ET4EntityWorldType>()
	{
		return ET4EntityWorldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityWorldType(ET4EntityWorldType_StaticEnum, TEXT("/Script/T4Core"), TEXT("ET4EntityWorldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Core_ET4EntityWorldType_Hash() { return 3122300459U; }
	UEnum* Z_Construct_UEnum_T4Core_ET4EntityWorldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityWorldType"), 0, Get_Z_Construct_UEnum_T4Core_ET4EntityWorldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityWorldType::Normal", (int64)ET4EntityWorldType::Normal },
				{ "ET4EntityWorldType::Seamless", (int64)ET4EntityWorldType::Seamless },
				{ "ET4EntityWorldType::Max", (int64)ET4EntityWorldType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "Max.ToolTip", "TODO : M3" },
				{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Core,
				nullptr,
				"ET4EntityWorldType",
				"ET4EntityWorldType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4EntityMeshType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Core_ET4EntityMeshType, Z_Construct_UPackage__Script_T4Core(), TEXT("ET4EntityMeshType"));
		}
		return Singleton;
	}
	template<> T4CORE_API UEnum* StaticEnum<ET4EntityMeshType>()
	{
		return ET4EntityMeshType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityMeshType(ET4EntityMeshType_StaticEnum, TEXT("/Script/T4Core"), TEXT("ET4EntityMeshType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Core_ET4EntityMeshType_Hash() { return 906248312U; }
	UEnum* Z_Construct_UEnum_T4Core_ET4EntityMeshType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityMeshType"), 0, Get_Z_Construct_UEnum_T4Core_ET4EntityMeshType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityMeshType::StaticMesh", (int64)ET4EntityMeshType::StaticMesh },
				{ "ET4EntityMeshType::SkeletalMesh", (int64)ET4EntityMeshType::SkeletalMesh },
				{ "ET4EntityMeshType::ParticleSystem", (int64)ET4EntityMeshType::ParticleSystem },
				{ "ET4EntityMeshType::Max", (int64)ET4EntityMeshType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Core,
				nullptr,
				"ET4EntityMeshType",
				"ET4EntityMeshType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ET4EntityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Core_ET4EntityType, Z_Construct_UPackage__Script_T4Core(), TEXT("ET4EntityType"));
		}
		return Singleton;
	}
	template<> T4CORE_API UEnum* StaticEnum<ET4EntityType>()
	{
		return ET4EntityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EntityType(ET4EntityType_StaticEnum, TEXT("/Script/T4Core"), TEXT("ET4EntityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Core_ET4EntityType_Hash() { return 2130329789U; }
	UEnum* Z_Construct_UEnum_T4Core_ET4EntityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EntityType"), 0, Get_Z_Construct_UEnum_T4Core_ET4EntityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EntityType::World", (int64)ET4EntityType::World },
				{ "ET4EntityType::Actor", (int64)ET4EntityType::Actor },
				{ "ET4EntityType::Prop", (int64)ET4EntityType::Prop },
				{ "ET4EntityType::Item", (int64)ET4EntityType::Item },
				{ "ET4EntityType::Costume", (int64)ET4EntityType::Costume },
				{ "ET4EntityType::Weapon", (int64)ET4EntityType::Weapon },
				{ "ET4EntityType::None", (int64)ET4EntityType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Costume.ToolTip", "#37 : Costume or Weapon" },
				{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
				{ "None.Hidden", "" },
				{ "None.ToolTip", "#37" },
				{ "ToolTip", "http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/\n // WARN : #35 : Entity Type \xec\x9d\x84 \xec\xb6\x94\xea\xb0\x80\xed\x95\x9c\xeb\x8b\xa4\xeb\xa9\xb4 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa1\x9c \xea\xb2\x80\xec\x83\x89\xed\x95\xb4\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xec\xb6\x94\xea\xb0\x80\xed\x95\xb4\xec\xa4\x84 \xea\xb2\x83!\n// #T4_ADD_ENTITY_TAG" },
				{ "Weapon.ToolTip", "#37" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Core,
				nullptr,
				"ET4EntityType",
				"ET4EntityType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FT4EntityKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityKey, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityKey"), sizeof(FT4EntityKey), Get_Z_Construct_UScriptStruct_FT4EntityKey_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityKey>()
{
	return FT4EntityKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityKey(FT4EntityKey::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityKey
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityKey")),new UScriptStruct::TCppStructOps<FT4EntityKey>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityKey;
	struct Z_Construct_UScriptStruct_FT4EntityKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "T4EntityKey" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityKey, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "T4EntityKey" },
		{ "ModuleRelativePath", "Classes/Entity/T4EntityTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityKey, Type), Z_Construct_UEnum_T4Core_ET4EntityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityKey_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityKey",
		sizeof(FT4EntityKey),
		alignof(FT4EntityKey),
		Z_Construct_UScriptStruct_FT4EntityKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityKey"), sizeof(FT4EntityKey), Get_Z_Construct_UScriptStruct_FT4EntityKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityKey_Hash() { return 1307415324U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
