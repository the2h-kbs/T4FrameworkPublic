// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4PropEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PropEntityAsset() {}
// Cross Module References
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityMeshType();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute();
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute();
	T4CORE_API UClass* Z_Construct_UClass_UT4PropEntityAsset_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4PropEntityAsset();
	T4CORE_API UClass* Z_Construct_UClass_UT4EntityAsset();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityPropType();
// End Cross Module References
class UScriptStruct* FT4EntityPropNormalMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityPropNormalMeshData"), sizeof(FT4EntityPropNormalMeshData), Get_Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityPropNormalMeshData>()
{
	return FT4EntityPropNormalMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropNormalMeshData(FT4EntityPropNormalMeshData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityPropNormalMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropNormalMeshData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropNormalMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropNormalMeshData")),new UScriptStruct::TCppStructOps<FT4EntityPropNormalMeshData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropNormalMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParticleSystemPath;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropNormalMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_ParticleSystemPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_ParticleSystemPath = { "ParticleSystemPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropNormalMeshData, ParticleSystemPath), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_ParticleSystemPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_ParticleSystemPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropNormalMeshData, SkeletalMeshPath), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_SkeletalMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_SkeletalMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_StaticMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropNormalMeshData, StaticMeshPath), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_StaticMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_StaticMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityPropNormalMeshData, MeshType), Z_Construct_UEnum_T4Core_ET4EntityMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_MeshType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_ParticleSystemPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_SkeletalMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_StaticMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::NewProp_MeshType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityPropNormalMeshData",
		sizeof(FT4EntityPropNormalMeshData),
		alignof(FT4EntityPropNormalMeshData),
		Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropNormalMeshData"), sizeof(FT4EntityPropNormalMeshData), Get_Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData_Hash() { return 1430458545U; }
class UScriptStruct* FT4EntityPropRenderingAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityPropRenderingAttribute"), sizeof(FT4EntityPropRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityPropRenderingAttribute>()
{
	return FT4EntityPropRenderingAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropRenderingAttribute(FT4EntityPropRenderingAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityPropRenderingAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropRenderingAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropRenderingAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropRenderingAttribute")),new UScriptStruct::TCppStructOps<FT4EntityPropRenderingAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropRenderingAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropRenderingAttribute>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		Z_Construct_UScriptStruct_FT4EntityBaseRenderingAttribute,
		&NewStructOps,
		"T4EntityPropRenderingAttribute",
		sizeof(FT4EntityPropRenderingAttribute),
		alignof(FT4EntityPropRenderingAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropRenderingAttribute"), sizeof(FT4EntityPropRenderingAttribute), Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute_Hash() { return 53027526U; }
class UScriptStruct* FT4EntityPropPhysicalAttribute::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityPropPhysicalAttribute"), sizeof(FT4EntityPropPhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityPropPhysicalAttribute>()
{
	return FT4EntityPropPhysicalAttribute::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityPropPhysicalAttribute(FT4EntityPropPhysicalAttribute::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityPropPhysicalAttribute"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropPhysicalAttribute
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropPhysicalAttribute()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityPropPhysicalAttribute")),new UScriptStruct::TCppStructOps<FT4EntityPropPhysicalAttribute>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityPropPhysicalAttribute;
	struct Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityPropPhysicalAttribute>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		Z_Construct_UScriptStruct_FT4EntityBasePhysicalAttribute,
		&NewStructOps,
		"T4EntityPropPhysicalAttribute",
		sizeof(FT4EntityPropPhysicalAttribute),
		alignof(FT4EntityPropPhysicalAttribute),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityPropPhysicalAttribute"), sizeof(FT4EntityPropPhysicalAttribute), Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute_Hash() { return 2481947035U; }
	void UT4PropEntityAsset::StaticRegisterNativesUT4PropEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4PropEntityAsset_NoRegister()
	{
		return UT4PropEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4PropEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalMeshData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rendering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Physical_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Physical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PropEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Entity/T4PropEntityAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_NormalMeshData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_NormalMeshData = { "NormalMeshData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PropEntityAsset, NormalMeshData), Z_Construct_UScriptStruct_FT4EntityPropNormalMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_NormalMeshData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_NormalMeshData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Rendering_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Rendering = { "Rendering", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PropEntityAsset, Rendering), Z_Construct_UScriptStruct_FT4EntityPropRenderingAttribute, METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Rendering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Rendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical = { "Physical", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PropEntityAsset, Physical), Z_Construct_UScriptStruct_FT4EntityPropPhysicalAttribute, METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_PropType_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4PropEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_PropType = { "PropType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PropEntityAsset, PropType), Z_Construct_UEnum_T4Core_ET4EntityPropType, METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_PropType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_PropType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_PropType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4PropEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_NormalMeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Rendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_Physical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_PropType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PropEntityAsset_Statics::NewProp_PropType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PropEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PropEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PropEntityAsset_Statics::ClassParams = {
		&UT4PropEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4PropEntityAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PropEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PropEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PropEntityAsset, 307747075);
	template<> T4CORE_API UClass* StaticClass<UT4PropEntityAsset>()
	{
		return UT4PropEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PropEntityAsset(Z_Construct_UClass_UT4PropEntityAsset, &UT4PropEntityAsset::StaticClass, TEXT("/Script/T4Core"), TEXT("UT4PropEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PropEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4PropEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
