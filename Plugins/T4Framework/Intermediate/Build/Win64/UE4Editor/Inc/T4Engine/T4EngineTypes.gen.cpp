// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Public/T4EngineTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4EngineTypes() {}
// Cross Module References
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4CollisionChannel();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4AnimMontageLayer();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ControllerType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ObjectType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4WorldType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
// End Cross Module References
	static UEnum* ET4CollisionChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4CollisionChannel, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4CollisionChannel"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4CollisionChannel>()
	{
		return ET4CollisionChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4CollisionChannel(ET4CollisionChannel_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4CollisionChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4CollisionChannel_Hash() { return 423034885U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4CollisionChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4CollisionChannel"), 0, Get_Z_Construct_UEnum_T4Engine_ET4CollisionChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4CollisionChannel::WorldStatic", (int64)ET4CollisionChannel::WorldStatic },
				{ "ET4CollisionChannel::SpawnObject", (int64)ET4CollisionChannel::SpawnObject },
				{ "ET4CollisionChannel::CollisionVisibility", (int64)ET4CollisionChannel::CollisionVisibility },
				{ "ET4CollisionChannel::Max", (int64)ET4CollisionChannel::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4CollisionChannel",
				"ET4CollisionChannel",
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
	static UEnum* ET4AnimMontageLayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4AnimMontageLayer, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4AnimMontageLayer"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4AnimMontageLayer>()
	{
		return ET4AnimMontageLayer_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4AnimMontageLayer(ET4AnimMontageLayer_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4AnimMontageLayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4AnimMontageLayer_Hash() { return 4290971316U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4AnimMontageLayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4AnimMontageLayer"), 0, Get_Z_Construct_UEnum_T4Engine_ET4AnimMontageLayer_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4AnimMontageLayer::Movement", (int64)ET4AnimMontageLayer::Movement },
				{ "ET4AnimMontageLayer::Skill", (int64)ET4AnimMontageLayer::Skill },
				{ "ET4AnimMontageLayer::Max", (int64)ET4AnimMontageLayer::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4AnimMontageLayer",
				"ET4AnimMontageLayer",
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
	static UEnum* ET4ControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4ControllerType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4ControllerType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4ControllerType>()
	{
		return ET4ControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ControllerType(ET4ControllerType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4ControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4ControllerType_Hash() { return 337082803U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4ControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ControllerType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4ControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ControllerType::Player", (int64)ET4ControllerType::Player },
				{ "ET4ControllerType::NPCAI", (int64)ET4ControllerType::NPCAI },
				{ "ET4ControllerType::All", (int64)ET4ControllerType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Hidden", "" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4ControllerType",
				"ET4ControllerType",
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
	static UEnum* ET4ObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4ObjectType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4ObjectType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4ObjectType>()
	{
		return ET4ObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ObjectType(ET4ObjectType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4ObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4ObjectType_Hash() { return 2103013462U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4ObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ObjectType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4ObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ObjectType::NullObject", (int64)ET4ObjectType::NullObject },
				{ "ET4ObjectType::GameObject", (int64)ET4ObjectType::GameObject },
				{ "ET4ObjectType::Max", (int64)ET4ObjectType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4ObjectType",
				"ET4ObjectType",
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
	static UEnum* ET4WorldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4WorldType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4WorldType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4WorldType>()
	{
		return ET4WorldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4WorldType(ET4WorldType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4WorldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4WorldType_Hash() { return 3532793344U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4WorldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4WorldType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4WorldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4WorldType::Null", (int64)ET4WorldType::Null },
				{ "ET4WorldType::Client", (int64)ET4WorldType::Client },
				{ "ET4WorldType::Server", (int64)ET4WorldType::Server },
				{ "ET4WorldType::Max", (int64)ET4WorldType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Max.Hidden", "" },
				{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
				{ "ToolTip", "http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4WorldType",
				"ET4WorldType",
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
class UScriptStruct* FT4ObjectID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ObjectID, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ObjectID"), sizeof(FT4ObjectID), Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ObjectID>()
{
	return FT4ObjectID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ObjectID(FT4ObjectID::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ObjectID"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectID
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ObjectID")),new UScriptStruct::TCppStructOps<FT4ObjectID>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ObjectID;
	struct Z_Construct_UScriptStruct_FT4ObjectID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ObjectID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "T4ObjectID" },
		{ "ModuleRelativePath", "Public/T4EngineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ObjectID, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ObjectID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ObjectID_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ObjectID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ObjectID",
		sizeof(FT4ObjectID),
		alignof(FT4ObjectID),
		Z_Construct_UScriptStruct_FT4ObjectID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ObjectID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ObjectID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ObjectID"), sizeof(FT4ObjectID), Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ObjectID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ObjectID_Hash() { return 2700027051U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
