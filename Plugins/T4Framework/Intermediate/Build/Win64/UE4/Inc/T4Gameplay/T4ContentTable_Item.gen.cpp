// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Data/Table/T4ContentTable_Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContentTable_Item() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4ContentItemTableRow();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4ItemEntityAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FT4ContentItemTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4ContentItemTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4ContentItemTableRow, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4ContentItemTableRow"), sizeof(FT4ContentItemTableRow), Get_Z_Construct_UScriptStruct_FT4ContentItemTableRow_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4ContentItemTableRow>()
{
	return FT4ContentItemTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4ContentItemTableRow(FT4ContentItemTableRow::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4ContentItemTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentItemTableRow
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentItemTableRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4ContentItemTableRow")),new UScriptStruct::TCppStructOps<FT4ContentItemTableRow>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4ContentItemTableRow;
	struct Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BehaviorTreePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardDataPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BlackboardDataPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipBoneOrSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EquipBoneOrSocketName;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4ContentItemTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BehaviorTreePath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BehaviorTreePath = { "BehaviorTreePath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentItemTableRow, BehaviorTreePath), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BehaviorTreePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BehaviorTreePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BlackboardDataPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BlackboardDataPath = { "BlackboardDataPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentItemTableRow, BlackboardDataPath), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BlackboardDataPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BlackboardDataPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EquipBoneOrSocketName_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EquipBoneOrSocketName = { "EquipBoneOrSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentItemTableRow, EquipBoneOrSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EquipBoneOrSocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EquipBoneOrSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EntityAsset_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EntityAsset = { "EntityAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentItemTableRow, EntityAsset), Z_Construct_UClass_UT4ItemEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EntityAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EntityAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentItemTableRow, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentItemTableRow, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Private/Data/Table/T4ContentTable_Item.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4ContentItemTableRow, UID), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_UID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_UID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BehaviorTreePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_BlackboardDataPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EquipBoneOrSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_EntityAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::NewProp_UID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"T4ContentItemTableRow",
		sizeof(FT4ContentItemTableRow),
		alignof(FT4ContentItemTableRow),
		Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4ContentItemTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4ContentItemTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4ContentItemTableRow"), sizeof(FT4ContentItemTableRow), Get_Z_Construct_UScriptStruct_FT4ContentItemTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4ContentItemTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4ContentItemTableRow_Hash() { return 2081617008U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
