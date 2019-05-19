// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4CostumeEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CostumeEntityAsset() {}
// Cross Module References
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4CostumeEntityAsset();
	T4CORE_API UClass* Z_Construct_UClass_UT4ItemEntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityItemCostumeMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityItemCostumeMeshData"), sizeof(FT4EntityItemCostumeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityItemCostumeMeshData>()
{
	return FT4EntityItemCostumeMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemCostumeMeshData(FT4EntityItemCostumeMeshData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityItemCostumeMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemCostumeMeshData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemCostumeMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemCostumeMeshData")),new UScriptStruct::TCppStructOps<FT4EntityItemCostumeMeshData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemCostumeMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
		{ "ToolTip", "#37" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemCostumeMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemCostumeMeshData, SkeletalMeshPath), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::NewProp_SkeletalMeshPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityItemCostumeMeshData",
		sizeof(FT4EntityItemCostumeMeshData),
		alignof(FT4EntityItemCostumeMeshData),
		Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemCostumeMeshData"), sizeof(FT4EntityItemCostumeMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData_Hash() { return 2524103477U; }
	void UT4CostumeEntityAsset::StaticRegisterNativesUT4CostumeEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4CostumeEntityAsset_NoRegister()
	{
		return UT4CostumeEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4CostumeEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CostumeEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ItemEntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CostumeEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Entity/T4CostumeEntityAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4CostumeEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4CostumeEntityAsset, MeshData), Z_Construct_UScriptStruct_FT4EntityItemCostumeMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4CostumeEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4CostumeEntityAsset_Statics::NewProp_MeshData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CostumeEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4CostumeEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4CostumeEntityAsset_Statics::ClassParams = {
		&UT4CostumeEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4CostumeEntityAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4CostumeEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CostumeEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4CostumeEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4CostumeEntityAsset, 780964944);
	template<> T4CORE_API UClass* StaticClass<UT4CostumeEntityAsset>()
	{
		return UT4CostumeEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4CostumeEntityAsset(Z_Construct_UClass_UT4CostumeEntityAsset, &UT4CostumeEntityAsset::StaticClass, TEXT("/Script/T4Core"), TEXT("UT4CostumeEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CostumeEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4CostumeEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
