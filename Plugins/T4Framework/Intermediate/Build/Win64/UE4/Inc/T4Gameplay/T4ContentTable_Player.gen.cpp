// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Data/Table/T4ContentTable_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentTable_Player() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentPlayerTableRow();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	T4CORE_API UClass* Z_Construct_UClass_UT4ActorEntityAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FT4ContentPlayerTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ContentPlayerTableRow"), sizeof(FT4ContentPlayerTableRow), Get_Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ContentPlayerTableRow>()
{
	return FT4ContentPlayerTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentPlayerTableRow(FT4ContentPlayerTableRow::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ContentPlayerTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentPlayerTableRow
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentPlayerTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentPlayerTableRow")),new UScriptStruct::TCppStructOps<FT4ContentPlayerTableRow>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentPlayerTableRow;
	struct Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EntityAsset;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Player.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentPlayerTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentPlayerTableRow, EntityAsset), Z_Construct_UClass_UT4ActorEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_EntityAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_EntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentPlayerTableRow, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentPlayerTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentPlayerTableRow, UID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_UID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_EntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::NewProp_UID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ContentPlayerTableRow",
		sizeof(FT4ContentPlayerTableRow),
		alignof(FT4ContentPlayerTableRow),
		Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentPlayerTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentPlayerTableRow"), sizeof(FT4ContentPlayerTableRow), Get_Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentPlayerTableRow_Hash() { return 511244184U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
