// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Data/Table/T4ContentTable_Effect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentTable_Effect() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentEffectTableRow();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ContiAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FT4ContentEffectTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentEffectTableRow, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ContentEffectTableRow"), sizeof(FT4ContentEffectTableRow), Get_Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ContentEffectTableRow>()
{
	return FT4ContentEffectTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentEffectTableRow(FT4ContentEffectTableRow::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ContentEffectTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentEffectTableRow
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentEffectTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentEffectTableRow")),new UScriptStruct::TCppStructOps<FT4ContentEffectTableRow>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentEffectTableRow;
	struct Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContiAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ContiAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Effect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentEffectTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_ContiAsset_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_ContiAsset = { "ContiAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentEffectTableRow, ContiAsset), Z_Construct_UClass_UT4ContiAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_ContiAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_ContiAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentEffectTableRow, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentEffectTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentEffectTableRow, UID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_UID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_ContiAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::NewProp_UID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ContentEffectTableRow",
		sizeof(FT4ContentEffectTableRow),
		alignof(FT4ContentEffectTableRow),
		Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentEffectTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentEffectTableRow"), sizeof(FT4ContentEffectTableRow), Get_Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentEffectTableRow_Hash() { return 1364527970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
