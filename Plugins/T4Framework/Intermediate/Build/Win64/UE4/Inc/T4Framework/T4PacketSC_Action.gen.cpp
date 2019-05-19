// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Public/Protocol/T4PacketSC_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketSC_Action() {}
// Cross Module References
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketEffectSC();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketStoC();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
	T4FRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketAttackSC();
// End Cross Module References
class UScriptStruct* FT4PacketEffectSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketEffectSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketEffectSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketEffectSC"), sizeof(FT4PacketEffectSC), Get_Z_Construct_UScriptStruct_FT4PacketEffectSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketEffectSC>()
{
	return FT4PacketEffectSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketEffectSC(FT4PacketEffectSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketEffectSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEffectSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEffectSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketEffectSC")),new UScriptStruct::TCppStructOps<FT4PacketEffectSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketEffectSC;
	struct Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackerObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackerObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketEffectSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_AttackerObjectID_MetaData[] = {
		{ "Category", "T4PacketEffectSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_AttackerObjectID = { "AttackerObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketEffectSC, AttackerObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_AttackerObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_AttackerObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_EffectNameInTable_MetaData[] = {
		{ "Category", "T4PacketEffectSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_EffectNameInTable = { "EffectNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketEffectSC, EffectNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_EffectNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_EffectNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketEffectSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketEffectSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_AttackerObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_EffectNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketEffectSC",
		sizeof(FT4PacketEffectSC),
		alignof(FT4PacketEffectSC),
		Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketEffectSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketEffectSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketEffectSC"), sizeof(FT4PacketEffectSC), Get_Z_Construct_UScriptStruct_FT4PacketEffectSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketEffectSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketEffectSC_Hash() { return 470310221U; }
class UScriptStruct* FT4PacketAttackSC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4FRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketAttackSC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketAttackSC, Z_Construct_UPackage__Script_T4Framework(), TEXT("T4PacketAttackSC"), sizeof(FT4PacketAttackSC), Get_Z_Construct_UScriptStruct_FT4PacketAttackSC_Hash());
	}
	return Singleton;
}
template<> T4FRAMEWORK_API UScriptStruct* StaticStruct<FT4PacketAttackSC>()
{
	return FT4PacketAttackSC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketAttackSC(FT4PacketAttackSC::StaticStruct, TEXT("/Script/T4Framework"), TEXT("T4PacketAttackSC"), false, nullptr, nullptr);
static struct FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketAttackSC
{
	FScriptStruct_T4Framework_StaticRegisterNativesFT4PacketAttackSC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketAttackSC")),new UScriptStruct::TCppStructOps<FT4PacketAttackSC>);
	}
} ScriptStruct_T4Framework_StaticRegisterNativesFT4PacketAttackSC;
	struct Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetrObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetrObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
		{ "ToolTip", "ET4PacketStoC::Attack\nET4PacketStoC::Effect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketAttackSC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_TargetrObjectID_MetaData[] = {
		{ "Category", "T4PacketAttackSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_TargetrObjectID = { "TargetrObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketAttackSC, TargetrObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_TargetrObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_TargetrObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_SkillNameInTable_MetaData[] = {
		{ "Category", "T4PacketAttackSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_SkillNameInTable = { "SkillNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketAttackSC, SkillNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_SkillNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_SkillNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_ObjectID_MetaData[] = {
		{ "Category", "T4PacketAttackSC" },
		{ "ModuleRelativePath", "Public/Protocol/T4PacketSC_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_ObjectID = { "ObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketAttackSC, ObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_ObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_ObjectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_TargetrObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_SkillNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::NewProp_ObjectID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
		Z_Construct_UScriptStruct_FT4PacketStoC,
		&NewStructOps,
		"T4PacketAttackSC",
		sizeof(FT4PacketAttackSC),
		alignof(FT4PacketAttackSC),
		Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketAttackSC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketAttackSC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Framework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketAttackSC"), sizeof(FT4PacketAttackSC), Get_Z_Construct_UScriptStruct_FT4PacketAttackSC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketAttackSC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketAttackSC_Hash() { return 1145141552U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
