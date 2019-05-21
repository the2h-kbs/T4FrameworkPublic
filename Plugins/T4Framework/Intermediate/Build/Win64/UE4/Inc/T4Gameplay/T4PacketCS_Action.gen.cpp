// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Gameplay/Private/Network/Protocol/T4PacketCS_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PacketCS_Action() {}
// Cross Module References
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketAttackCS();
	UPackage* Z_Construct_UPackage__Script_T4Gameplay();
	T4GAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FT4PacketCtoS();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4ObjectID();
// End Cross Module References
class UScriptStruct* FT4PacketAttackCS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4GAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FT4PacketAttackCS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4PacketAttackCS, Z_Construct_UPackage__Script_T4Gameplay(), TEXT("T4PacketAttackCS"), sizeof(FT4PacketAttackCS), Get_Z_Construct_UScriptStruct_FT4PacketAttackCS_Hash());
	}
	return Singleton;
}
template<> T4GAMEPLAY_API UScriptStruct* StaticStruct<FT4PacketAttackCS>()
{
	return FT4PacketAttackCS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4PacketAttackCS(FT4PacketAttackCS::StaticStruct, TEXT("/Script/T4Gameplay"), TEXT("T4PacketAttackCS"), false, nullptr, nullptr);
static struct FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketAttackCS
{
	FScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketAttackCS()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4PacketAttackCS")),new UScriptStruct::TCppStructOps<FT4PacketAttackCS>);
	}
} ScriptStruct_T4Gameplay_StaticRegisterNativesFT4PacketAttackCS;
	struct Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetObjectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetObjectID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameInTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkillNameInTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Action.h" },
		{ "ToolTip", "ET4PacketCtoS::Attack" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4PacketAttackCS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_TargetObjectID_MetaData[] = {
		{ "Category", "T4PacketAttackCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_TargetObjectID = { "TargetObjectID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketAttackCS, TargetObjectID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_TargetObjectID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_TargetObjectID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SkillNameInTable_MetaData[] = {
		{ "Category", "T4PacketAttackCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SkillNameInTable = { "SkillNameInTable", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketAttackCS, SkillNameInTable), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SkillNameInTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SkillNameInTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SenderID_MetaData[] = {
		{ "Category", "T4PacketAttackCS" },
		{ "ModuleRelativePath", "Private/Network/Protocol/T4PacketCS_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SenderID = { "SenderID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4PacketAttackCS, SenderID), Z_Construct_UScriptStruct_FT4ObjectID, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SenderID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SenderID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_TargetObjectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SkillNameInTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::NewProp_SenderID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Gameplay,
		Z_Construct_UScriptStruct_FT4PacketCtoS,
		&NewStructOps,
		"T4PacketAttackCS",
		sizeof(FT4PacketAttackCS),
		alignof(FT4PacketAttackCS),
		Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4PacketAttackCS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4PacketAttackCS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Gameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4PacketAttackCS"), sizeof(FT4PacketAttackCS), Get_Z_Construct_UScriptStruct_FT4PacketAttackCS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4PacketAttackCS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4PacketAttackCS_Hash() { return 2208962168U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
