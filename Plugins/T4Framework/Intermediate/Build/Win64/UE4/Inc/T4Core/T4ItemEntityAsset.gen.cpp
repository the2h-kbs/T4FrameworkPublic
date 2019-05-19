// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4ItemEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ItemEntityAsset() {}
// Cross Module References
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemDropMeshData();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityMeshType();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute();
	T4CORE_API UClass* Z_Construct_UClass_UT4ItemEntityAsset_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4ItemEntityAsset();
	T4CORE_API UClass* Z_Construct_UClass_UT4EntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityItemDropMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityItemDropMeshData"), sizeof(FT4EntityItemDropMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityItemDropMeshData>()
{
	return FT4EntityItemDropMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemDropMeshData(FT4EntityItemDropMeshData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityItemDropMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemDropMeshData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemDropMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemDropMeshData")),new UScriptStruct::TCppStructOps<FT4EntityItemDropMeshData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemDropMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMeshPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemDropMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, SkeletalMeshPath), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, StaticMeshPath), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemDropMeshData, MeshType), Z_Construct_UEnum_T4Core_ET4EntityMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_SkeletalMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_StaticMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::NewProp_MeshType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityItemDropMeshData",
		sizeof(FT4EntityItemDropMeshData),
		alignof(FT4EntityItemDropMeshData),
		Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemDropMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemDropMeshData"), sizeof(FT4EntityItemDropMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemDropMeshData_Hash() { return 329555680U; }
class UScriptStruct* FT4EntityItemRenderingAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityItemRenderingAttribute"), sizeof(FT4EntityItemRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityItemRenderingAttribute>()
{
	return FT4EntityItemRenderingAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemRenderingAttribute(FT4EntityItemRenderingAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityItemRenderingAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemRenderingAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemRenderingAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemRenderingAttribute")),new UScriptStruct::TCppStructOps<FT4EntityItemRenderingAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemRenderingAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemRenderingAttribute>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute,
		&NewStructOps,
		"T4EntityItemRenderingAttribute",
		sizeof(FT4EntityItemRenderingAttribute),
		alignof(FT4EntityItemRenderingAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemRenderingAttribute"), sizeof(FT4EntityItemRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute_Hash() { return 2774161157U; }
class UScriptStruct* FT4EntityItemPhysicalAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityItemPhysicalAttribute"), sizeof(FT4EntityItemPhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityItemPhysicalAttribute>()
{
	return FT4EntityItemPhysicalAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemPhysicalAttribute(FT4EntityItemPhysicalAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityItemPhysicalAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemPhysicalAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemPhysicalAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemPhysicalAttribute")),new UScriptStruct::TCppStructOps<FT4EntityItemPhysicalAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemPhysicalAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemPhysicalAttribute>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute,
		&NewStructOps,
		"T4EntityItemPhysicalAttribute",
		sizeof(FT4EntityItemPhysicalAttribute),
		alignof(FT4EntityItemPhysicalAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemPhysicalAttribute"), sizeof(FT4EntityItemPhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute_Hash() { return 3583792876U; }
	void UT4ItemEntityAsset::StaticRegisterNativesUT4ItemEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ItemEntityAsset_NoRegister()
	{
		return UT4ItemEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ItemEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropMeshRendering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropMeshRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropMeshPhysical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DropMeshPhysical;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ItemEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Entity/T4ItemEntityAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData = { "DropMeshData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemEntityAsset, DropMeshData), Z_Construct_UScriptStruct_FT4EntityItemDropMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering = { "DropMeshRendering", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemEntityAsset, DropMeshRendering), Z_Construct_UScriptStruct_FT4EntityItemRenderingAttribute, METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4ItemEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical = { "DropMeshPhysical", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ItemEntityAsset, DropMeshPhysical), Z_Construct_UScriptStruct_FT4EntityItemPhysicalAttribute, METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ItemEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ItemEntityAsset_Statics::NewProp_DropMeshPhysical,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ItemEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ItemEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ItemEntityAsset_Statics::ClassParams = {
		&UT4ItemEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ItemEntityAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ItemEntityAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4ItemEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ItemEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ItemEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ItemEntityAsset, 3579345124);
	template<> T4CORE_API UClass* StaticClass<UT4ItemEntityAsset>()
	{
		return UT4ItemEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ItemEntityAsset(Z_Construct_UClass_UT4ItemEntityAsset, &UT4ItemEntityAsset::StaticClass, TEXT("/Script/T4Core"), TEXT("UT4ItemEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ItemEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ItemEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
