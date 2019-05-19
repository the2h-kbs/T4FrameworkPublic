// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4ActorEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActorEntityAsset() {}
// Cross Module References
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorAnimationData();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityAnimInstanceType();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData();
	T4CORE_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute();
	T4CORE_API UClass* Z_Construct_UClass_UT4ActorEntityAsset_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4ActorEntityAsset();
	T4CORE_API UClass* Z_Construct_UClass_UT4EntityAsset();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityActorType();
// End Cross Module References
class UScriptStruct* FT4EntityActorAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityActorAnimationData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityActorAnimationData"), sizeof(FT4EntityActorAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityActorAnimationData>()
{
	return FT4EntityActorAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityActorAnimationData(FT4EntityActorAnimationData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityActorAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorAnimationData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityActorAnimationData")),new UScriptStruct::TCppStructOps<FT4EntityActorAnimationData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorAnimationData;
	struct Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockOnBSPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LockOnBSPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveBSPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MoveBSPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementMontagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MovementMontagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillMontagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkillMontagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBPPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimBPPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimInstanceType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AnimInstanceType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityActorAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_LockOnBSPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_LockOnBSPath = { "LockOnBSPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorAnimationData, LockOnBSPath), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_LockOnBSPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_LockOnBSPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MoveBSPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MoveBSPath = { "MoveBSPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorAnimationData, MoveBSPath), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MoveBSPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MoveBSPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MovementMontagePath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MovementMontagePath = { "MovementMontagePath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorAnimationData, MovementMontagePath), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MovementMontagePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MovementMontagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_SkillMontagePath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_SkillMontagePath = { "SkillMontagePath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorAnimationData, SkillMontagePath), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_SkillMontagePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_SkillMontagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimBPPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimBPPath = { "AnimBPPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorAnimationData, AnimBPPath), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimBPPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimBPPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimInstanceType_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimInstanceType = { "AnimInstanceType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorAnimationData, AnimInstanceType), Z_Construct_UEnum_T4Core_ET4EntityAnimInstanceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimInstanceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimInstanceType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimInstanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_LockOnBSPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MoveBSPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_MovementMontagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_SkillMontagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimBPPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimInstanceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::NewProp_AnimInstanceType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityActorAnimationData",
		sizeof(FT4EntityActorAnimationData),
		alignof(FT4EntityActorAnimationData),
		Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityActorAnimationData"), sizeof(FT4EntityActorAnimationData), Get_Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorAnimationData_Hash() { return 2136554631U; }
class UScriptStruct* FT4EntityActorCompositeMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityActorCompositeMeshData"), sizeof(FT4EntityActorCompositeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityActorCompositeMeshData>()
{
	return FT4EntityActorCompositeMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityActorCompositeMeshData(FT4EntityActorCompositeMeshData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityActorCompositeMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorCompositeMeshData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorCompositeMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityActorCompositeMeshData")),new UScriptStruct::TCppStructOps<FT4EntityActorCompositeMeshData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorCompositeMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPartsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultPartsData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultPartsData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultPartsData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPartName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MasterPartName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityActorCompositeMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData_MetaData[] = {
		{ "Category", "DataPath" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData = { "DefaultPartsData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorCompositeMeshData, DefaultPartsData), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData_Key_KeyProp = { "DefaultPartsData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData_ValueProp = { "DefaultPartsData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_MasterPartName_MetaData[] = {
		{ "Category", "DataPath" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_MasterPartName = { "MasterPartName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorCompositeMeshData, MasterPartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_MasterPartName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_MasterPartName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_DefaultPartsData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::NewProp_MasterPartName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityActorCompositeMeshData",
		sizeof(FT4EntityActorCompositeMeshData),
		alignof(FT4EntityActorCompositeMeshData),
		Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityActorCompositeMeshData"), sizeof(FT4EntityActorCompositeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData_Hash() { return 577361198U; }
class UScriptStruct* FT4EntityActorCompositePartMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityActorCompositePartMeshData"), sizeof(FT4EntityActorCompositePartMeshData), Get_Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityActorCompositePartMeshData>()
{
	return FT4EntityActorCompositePartMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityActorCompositePartMeshData(FT4EntityActorCompositePartMeshData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityActorCompositePartMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorCompositePartMeshData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorCompositePartMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityActorCompositePartMeshData")),new UScriptStruct::TCppStructOps<FT4EntityActorCompositePartMeshData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorCompositePartMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeEntityAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CostumeEntityAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityActorCompositePartMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::NewProp_CostumeEntityAsset_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::NewProp_CostumeEntityAsset = { "CostumeEntityAsset", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorCompositePartMeshData, CostumeEntityAsset), Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::NewProp_CostumeEntityAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::NewProp_CostumeEntityAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::NewProp_CostumeEntityAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityActorCompositePartMeshData",
		sizeof(FT4EntityActorCompositePartMeshData),
		alignof(FT4EntityActorCompositePartMeshData),
		Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityActorCompositePartMeshData"), sizeof(FT4EntityActorCompositePartMeshData), Get_Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorCompositePartMeshData_Hash() { return 2811157896U; }
class UScriptStruct* FT4EntityActorFullBodyMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityActorFullBodyMeshData"), sizeof(FT4EntityActorFullBodyMeshData), Get_Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityActorFullBodyMeshData>()
{
	return FT4EntityActorFullBodyMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityActorFullBodyMeshData(FT4EntityActorFullBodyMeshData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityActorFullBodyMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorFullBodyMeshData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorFullBodyMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityActorFullBodyMeshData")),new UScriptStruct::TCppStructOps<FT4EntityActorFullBodyMeshData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorFullBodyMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMeshPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityActorFullBodyMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorFullBodyMeshData, SkeletalMeshPath), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::NewProp_SkeletalMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::NewProp_SkeletalMeshPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::NewProp_SkeletalMeshPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityActorFullBodyMeshData",
		sizeof(FT4EntityActorFullBodyMeshData),
		alignof(FT4EntityActorFullBodyMeshData),
		Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityActorFullBodyMeshData"), sizeof(FT4EntityActorFullBodyMeshData), Get_Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData_Hash() { return 3275465309U; }
class UScriptStruct* FT4EntityActorRenderingAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityActorRenderingAttribute"), sizeof(FT4EntityActorRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityActorRenderingAttribute>()
{
	return FT4EntityActorRenderingAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityActorRenderingAttribute(FT4EntityActorRenderingAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityActorRenderingAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorRenderingAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorRenderingAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityActorRenderingAttribute")),new UScriptStruct::TCppStructOps<FT4EntityActorRenderingAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorRenderingAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityActorRenderingAttribute>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute,
		&NewStructOps,
		"T4EntityActorRenderingAttribute",
		sizeof(FT4EntityActorRenderingAttribute),
		alignof(FT4EntityActorRenderingAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityActorRenderingAttribute"), sizeof(FT4EntityActorRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute_Hash() { return 3420496285U; }
class UScriptStruct* FT4EntityActorPhysicalAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityActorPhysicalAttribute"), sizeof(FT4EntityActorPhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityActorPhysicalAttribute>()
{
	return FT4EntityActorPhysicalAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityActorPhysicalAttribute(FT4EntityActorPhysicalAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityActorPhysicalAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorPhysicalAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorPhysicalAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityActorPhysicalAttribute")),new UScriptStruct::TCppStructOps<FT4EntityActorPhysicalAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityActorPhysicalAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRateYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRateYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpZVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockOnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockOnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityActorPhysicalAttribute>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RotationRateYaw_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "1080" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RotationRateYaw = { "RotationRateYaw", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorPhysicalAttribute, RotationRateYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RotationRateYaw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RotationRateYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_JumpZVelocity_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_JumpZVelocity = { "JumpZVelocity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorPhysicalAttribute, JumpZVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_JumpZVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_JumpZVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_LockOnSpeed_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "500" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_LockOnSpeed = { "LockOnSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorPhysicalAttribute, LockOnSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_LockOnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_LockOnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "500" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorPhysicalAttribute, WalkSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_WalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Physical" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityActorPhysicalAttribute, RunSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RunSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RunSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RotationRateYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_JumpZVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_LockOnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::NewProp_RunSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute,
		&NewStructOps,
		"T4EntityActorPhysicalAttribute",
		sizeof(FT4EntityActorPhysicalAttribute),
		alignof(FT4EntityActorPhysicalAttribute),
		Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityActorPhysicalAttribute"), sizeof(FT4EntityActorPhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute_Hash() { return 3272699892U; }
	void UT4ActorEntityAsset::StaticRegisterNativesUT4ActorEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ActorEntityAsset_NoRegister()
	{
		return UT4ActorEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActorEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopmpositeMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CopmpositeMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullBodyMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FullBodyMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rendering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Physical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActorType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActorEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Entity/T4ActorEntityAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_AnimationData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActorEntityAsset, AnimationData), Z_Construct_UScriptStruct_FT4EntityActorAnimationData, METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_AnimationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_AnimationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_CopmpositeMeshData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_CopmpositeMeshData = { "CopmpositeMeshData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActorEntityAsset, CopmpositeMeshData), Z_Construct_UScriptStruct_FT4EntityActorCompositeMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_CopmpositeMeshData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_CopmpositeMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_FullBodyMeshData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_FullBodyMeshData = { "FullBodyMeshData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActorEntityAsset, FullBodyMeshData), Z_Construct_UScriptStruct_FT4EntityActorFullBodyMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_FullBodyMeshData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_FullBodyMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Rendering_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Rendering = { "Rendering", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActorEntityAsset, Rendering), Z_Construct_UScriptStruct_FT4EntityActorRenderingAttribute, METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Rendering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Rendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Physical_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Physical = { "Physical", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActorEntityAsset, Physical), Z_Construct_UScriptStruct_FT4EntityActorPhysicalAttribute, METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Physical_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Physical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_ActorType_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4ActorEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_ActorType = { "ActorType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActorEntityAsset, ActorType), Z_Construct_UEnum_T4Core_ET4EntityActorType, METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_ActorType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_ActorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_ActorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActorEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_AnimationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_CopmpositeMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_FullBodyMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Rendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_Physical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_ActorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActorEntityAsset_Statics::NewProp_ActorType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActorEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActorEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActorEntityAsset_Statics::ClassParams = {
		&UT4ActorEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActorEntityAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActorEntityAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4ActorEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActorEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActorEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActorEntityAsset, 3000940150);
	template<> T4CORE_API UClass* StaticClass<UT4ActorEntityAsset>()
	{
		return UT4ActorEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActorEntityAsset(Z_Construct_UClass_UT4ActorEntityAsset, &UT4ActorEntityAsset::StaticClass, TEXT("/Script/T4Core"), TEXT("UT4ActorEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActorEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ActorEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
