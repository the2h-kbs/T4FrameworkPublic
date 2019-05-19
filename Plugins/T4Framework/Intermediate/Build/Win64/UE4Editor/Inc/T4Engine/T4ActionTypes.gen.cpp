// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4ActionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionTypes() {}
// Cross Module References
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4EditorDirtyType();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4RotationType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4MoveType();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4LifecyclePolicy();
	T4ENGINE_API UEnum* Z_Construct_UEnum_T4Engine_ET4ActionType();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey();
// End Cross Module References
	static UEnum* ET4EditorDirtyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4EditorDirtyType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4EditorDirtyType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4EditorDirtyType>()
	{
		return ET4EditorDirtyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4EditorDirtyType(ET4EditorDirtyType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4EditorDirtyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4EditorDirtyType_Hash() { return 946512509U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4EditorDirtyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4EditorDirtyType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4EditorDirtyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4EditorDirtyType::All", (int64)ET4EditorDirtyType::All },
				{ "ET4EditorDirtyType::Attribute", (int64)ET4EditorDirtyType::Attribute },
				{ "ET4EditorDirtyType::Data", (int64)ET4EditorDirtyType::Data },
				{ "ET4EditorDirtyType::None", (int64)ET4EditorDirtyType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4EditorDirtyType",
				"ET4EditorDirtyType",
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
	static UEnum* ET4RotationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4RotationType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4RotationType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4RotationType>()
	{
		return ET4RotationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4RotationType(ET4RotationType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4RotationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4RotationType_Hash() { return 1547893428U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4RotationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4RotationType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4RotationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4RotationType::Current", (int64)ET4RotationType::Current },
				{ "ET4RotationType::Location", (int64)ET4RotationType::Location },
				{ "ET4RotationType::Direction", (int64)ET4RotationType::Direction },
				{ "ET4RotationType::TargetObject", (int64)ET4RotationType::TargetObject },
				{ "ET4RotationType::Default", (int64)ET4RotationType::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4RotationType",
				"ET4RotationType",
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
	static UEnum* ET4MoveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4MoveType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4MoveType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4MoveType>()
	{
		return ET4MoveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4MoveType(ET4MoveType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4MoveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4MoveType_Hash() { return 168229767U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4MoveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4MoveType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4MoveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4MoveType::Sync", (int64)ET4MoveType::Sync },
				{ "ET4MoveType::Async", (int64)ET4MoveType::Async },
				{ "ET4MoveType::Count", (int64)ET4MoveType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4MoveType",
				"ET4MoveType",
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
	static UEnum* ET4LifecyclePolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4LifecyclePolicy, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4LifecyclePolicy"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4LifecyclePolicy>()
	{
		return ET4LifecyclePolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4LifecyclePolicy(ET4LifecyclePolicy_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4LifecyclePolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4LifecyclePolicy_Hash() { return 2656809011U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4LifecyclePolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4LifecyclePolicy"), 0, Get_Z_Construct_UEnum_T4Engine_ET4LifecyclePolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4LifecyclePolicy::Duration", (int64)ET4LifecyclePolicy::Duration },
				{ "ET4LifecyclePolicy::Looping", (int64)ET4LifecyclePolicy::Looping },
				{ "ET4LifecyclePolicy::Default", (int64)ET4LifecyclePolicy::Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
				{ "ToolTip", "#24" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4LifecyclePolicy",
				"ET4LifecyclePolicy",
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
	static UEnum* ET4ActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_T4Engine_ET4ActionType, Z_Construct_UPackage__Script_T4Engine(), TEXT("ET4ActionType"));
		}
		return Singleton;
	}
	template<> T4ENGINE_API UEnum* StaticEnum<ET4ActionType>()
	{
		return ET4ActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ET4ActionType(ET4ActionType_StaticEnum, TEXT("/Script/T4Engine"), TEXT("ET4ActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_T4Engine_ET4ActionType_Hash() { return 4181585746U; }
	UEnum* Z_Construct_UEnum_T4Engine_ET4ActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ET4ActionType"), 0, Get_Z_Construct_UEnum_T4Engine_ET4ActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ET4ActionType::Root", (int64)ET4ActionType::Root },
				{ "ET4ActionType::ChangeWorld", (int64)ET4ActionType::ChangeWorld },
				{ "ET4ActionType::ChangePlayer", (int64)ET4ActionType::ChangePlayer },
				{ "ET4ActionType::ObjectEnter", (int64)ET4ActionType::ObjectEnter },
				{ "ET4ActionType::ObjectLeave", (int64)ET4ActionType::ObjectLeave },
				{ "ET4ActionType::Possess", (int64)ET4ActionType::Possess },
				{ "ET4ActionType::MoveTo", (int64)ET4ActionType::MoveTo },
				{ "ET4ActionType::JumpTo", (int64)ET4ActionType::JumpTo },
				{ "ET4ActionType::TeleportTo", (int64)ET4ActionType::TeleportTo },
				{ "ET4ActionType::EquipWeapon", (int64)ET4ActionType::EquipWeapon },
				{ "ET4ActionType::ExchangeCostume", (int64)ET4ActionType::ExchangeCostume },
				{ "ET4ActionType::LockOn", (int64)ET4ActionType::LockOn },
				{ "ET4ActionType::MoveSpeed", (int64)ET4ActionType::MoveSpeed },
				{ "ET4ActionType::Rotation", (int64)ET4ActionType::Rotation },
				{ "ET4ActionType::Animation", (int64)ET4ActionType::Animation },
				{ "ET4ActionType::Particle", (int64)ET4ActionType::Particle },
				{ "ET4ActionType::Conti", (int64)ET4ActionType::Conti },
				{ "ET4ActionType::Stop", (int64)ET4ActionType::Stop },
				{ "ET4ActionType::EditorDirty", (int64)ET4ActionType::EditorDirty },
				{ "ET4ActionType::None", (int64)ET4ActionType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ChangeWorld.ToolTip", "begin World" },
				{ "EditorDirty.ToolTip", "begin Editor" },
				{ "ExchangeCostume.ToolTip", "#22" },
				{ "LockOn.ToolTip", "#37" },
				{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
				{ "None.ToolTip", "#37" },
				{ "Possess.ToolTip", "begin Object" },
				{ "Stop.ToolTip", "#24" },
				{ "ToolTip", "http://api.unrealengine.com/KOR/Programming/UnrealArchitecture/Reference/Properties/\n // WARN : Action \xec\xb6\x94\xea\xb0\x80 \xec\x8b\x9c\xeb\x8a\x94 \xec\x95\x84\xeb\x9e\x98 \xed\x85\x8c\xea\xb7\xb8\xeb\xa5\xbc \xec\xb0\xbe\xec\x95\x84 \xec\xb6\x94\xea\xb0\x80\xeb\x90\x9c \xec\x95\xa1\xec\x85\x98\xec\x9d\x84 \xea\xb5\xac\xed\x98\x84\xed\x95\xb4\xec\xa3\xbc\xec\x96\xb4\xec\x95\xbc \xed\x95\xa8!!\n// #T4_ADD_ACTION_TAG" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_T4Engine,
				nullptr,
				"ET4ActionType",
				"ET4ActionType",
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
class UScriptStruct* FT4ActionKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ActionKey, Z_Construct_UPackage__Script_T4Engine(), TEXT("T4ActionKey"), sizeof(FT4ActionKey), Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash());
	}
	return Singleton;
}
template<> T4ENGINE_API UScriptStruct* StaticStruct<FT4ActionKey>()
{
	return FT4ActionKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ActionKey(FT4ActionKey::StaticStruct, TEXT("/Script/T4Engine"), TEXT("T4ActionKey"), false, nullptr, nullptr);
static struct FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionKey
{
	FScriptStruct_T4Engine_StaticRegisterNativesFT4ActionKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ActionKey")),new UScriptStruct::TCppStructOps<FT4ActionKey>);
	}
} ScriptStruct_T4Engine_StaticRegisterNativesFT4ActionKey;
	struct Z_Construct_UScriptStruct_FT4ActionKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrimary_MetaData[];
#endif
		static void NewProp_bPrimary_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrimary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
		{ "ToolTip", "#20" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ActionKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
		{ "ToolTip", "#20 : \xea\xbc\xad \xed\x95\x98\xeb\x82\x98\xeb\xa7\x8c \xec\x8b\xa4\xed\x96\x89\xeb\x90\x98\xec\x96\xb4\xec\x95\xbc \xed\x95\xa0 \xea\xb2\xbd\xec\x9a\xb0 \xec\x82\xac\xec\x9a\xa9..." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName = { "DebugKeyName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionKey, DebugKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_MetaData[] = {
		{ "Category", "T4ActionKey" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_SetBit(void* Obj)
	{
		((FT4ActionKey*)Obj)->bPrimary = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary = { "bPrimary", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FT4ActionKey), &Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "T4ActionKey" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ActionKey, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_DebugKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_bPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ActionKey_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ActionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
		nullptr,
		&NewStructOps,
		"T4ActionKey",
		sizeof(FT4ActionKey),
		alignof(FT4ActionKey),
		Z_Construct_UScriptStruct_FT4ActionKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ActionKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ActionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ActionKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ActionKey"), sizeof(FT4ActionKey), Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ActionKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ActionKey_Hash() { return 2188189796U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
