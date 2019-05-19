// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4WeaponEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WeaponEntityAsset() {}
// Cross Module References
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityMeshType();
	T4CORE_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4WeaponEntityAsset();
	T4CORE_API UClass* Z_Construct_UClass_UT4ItemEntityAsset();
// End Cross Module References
class UScriptStruct* FT4EntityItemWeaponMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityItemWeaponMeshData"), sizeof(FT4EntityItemWeaponMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityItemWeaponMeshData>()
{
	return FT4EntityItemWeaponMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityItemWeaponMeshData(FT4EntityItemWeaponMeshData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityItemWeaponMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemWeaponMeshData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemWeaponMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityItemWeaponMeshData")),new UScriptStruct::TCppStructOps<FT4EntityItemWeaponMeshData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityItemWeaponMeshData;
	struct Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityItemWeaponMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, SkeletalMeshPath), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, StaticMeshPath), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityItemWeaponMeshData, MeshType), Z_Construct_UEnum_T4Core_ET4EntityMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_SkeletalMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_StaticMeshPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::NewProp_MeshType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityItemWeaponMeshData",
		sizeof(FT4EntityItemWeaponMeshData),
		alignof(FT4EntityItemWeaponMeshData),
		Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityItemWeaponMeshData"), sizeof(FT4EntityItemWeaponMeshData), Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData_Hash() { return 768341600U; }
	void UT4WeaponEntityAsset::StaticRegisterNativesUT4WeaponEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4WeaponEntityAsset_NoRegister()
	{
		return UT4WeaponEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4WeaponEntityAsset_Statics
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
	UObject* (*const Z_Construct_UClass_UT4WeaponEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4ItemEntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WeaponEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Entity/T4WeaponEntityAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4WeaponEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WeaponEntityAsset, MeshData), Z_Construct_UScriptStruct_FT4EntityItemWeaponMeshData, METADATA_PARAMS(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4WeaponEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WeaponEntityAsset_Statics::NewProp_MeshData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WeaponEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WeaponEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WeaponEntityAsset_Statics::ClassParams = {
		&UT4WeaponEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4WeaponEntityAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4WeaponEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WeaponEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WeaponEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WeaponEntityAsset, 2032404657);
	template<> T4CORE_API UClass* StaticClass<UT4WeaponEntityAsset>()
	{
		return UT4WeaponEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WeaponEntityAsset(Z_Construct_UClass_UT4WeaponEntityAsset, &UT4WeaponEntityAsset::StaticClass, TEXT("/Script/T4Core"), TEXT("UT4WeaponEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WeaponEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4WeaponEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
