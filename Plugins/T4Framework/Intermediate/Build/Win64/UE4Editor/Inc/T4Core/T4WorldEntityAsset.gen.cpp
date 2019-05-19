// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Core/Classes/Entity/T4WorldEntityAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4WorldEntityAsset() {}
// Cross Module References
	T4CORE_API UScriptStruct* Z_Construct_UScriptStruct_FT4EntityNormalWorldData();
	UPackage* Z_Construct_UPackage__Script_T4Core();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4WorldEntityAsset_NoRegister();
	T4CORE_API UClass* Z_Construct_UClass_UT4WorldEntityAsset();
	T4CORE_API UClass* Z_Construct_UClass_UT4EntityAsset();
	T4CORE_API UEnum* Z_Construct_UEnum_T4Core_ET4EntityWorldType();
// End Cross Module References
class UScriptStruct* FT4EntityNormalWorldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern T4CORE_API uint32 Get_Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FT4EntityNormalWorldData, Z_Construct_UPackage__Script_T4Core(), TEXT("T4EntityNormalWorldData"), sizeof(FT4EntityNormalWorldData), Get_Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Hash());
	}
	return Singleton;
}
template<> T4CORE_API UScriptStruct* StaticStruct<FT4EntityNormalWorldData>()
{
	return FT4EntityNormalWorldData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FT4EntityNormalWorldData(FT4EntityNormalWorldData::StaticStruct, TEXT("/Script/T4Core"), TEXT("T4EntityNormalWorldData"), false, nullptr, nullptr);
static struct FScriptStruct_T4Core_StaticRegisterNativesFT4EntityNormalWorldData
{
	FScriptStruct_T4Core_StaticRegisterNativesFT4EntityNormalWorldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("T4EntityNormalWorldData")),new UScriptStruct::TCppStructOps<FT4EntityNormalWorldData>);
	}
} ScriptStruct_T4Core_StaticRegisterNativesFT4EntityNormalWorldData;
	struct Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4WorldEntityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FT4EntityNormalWorldData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::NewProp_LevelPath_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Classes/Entity/T4WorldEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FT4EntityNormalWorldData, LevelPath), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::NewProp_LevelPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::NewProp_LevelPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::NewProp_LevelPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
		nullptr,
		&NewStructOps,
		"T4EntityNormalWorldData",
		sizeof(FT4EntityNormalWorldData),
		alignof(FT4EntityNormalWorldData),
		Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FT4EntityNormalWorldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_T4Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("T4EntityNormalWorldData"), sizeof(FT4EntityNormalWorldData), Get_Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FT4EntityNormalWorldData_Hash() { return 3056092027U; }
	void UT4WorldEntityAsset::StaticRegisterNativesUT4WorldEntityAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4WorldEntityAsset_NoRegister()
	{
		return UT4WorldEntityAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4WorldEntityAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalWorldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalWorldData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4WorldEntityAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UT4EntityAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldEntityAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Entity/T4WorldEntityAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Entity/T4WorldEntityAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_NormalWorldData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Classes/Entity/T4WorldEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_NormalWorldData = { "NormalWorldData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldEntityAsset, NormalWorldData), Z_Construct_UScriptStruct_FT4EntityNormalWorldData, METADATA_PARAMS(Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_NormalWorldData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_NormalWorldData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_WorldType_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Classes/Entity/T4WorldEntityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4WorldEntityAsset, WorldType), Z_Construct_UEnum_T4Core_ET4EntityWorldType, METADATA_PARAMS(Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_WorldType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_WorldType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_WorldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4WorldEntityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_NormalWorldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_WorldType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4WorldEntityAsset_Statics::NewProp_WorldType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4WorldEntityAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4WorldEntityAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4WorldEntityAsset_Statics::ClassParams = {
		&UT4WorldEntityAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4WorldEntityAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4WorldEntityAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4WorldEntityAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4WorldEntityAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4WorldEntityAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4WorldEntityAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4WorldEntityAsset, 2396091347);
	template<> T4CORE_API UClass* StaticClass<UT4WorldEntityAsset>()
	{
		return UT4WorldEntityAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4WorldEntityAsset(Z_Construct_UClass_UT4WorldEntityAsset, &UT4WorldEntityAsset::StaticClass, TEXT("/Script/T4Core"), TEXT("UT4WorldEntityAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4WorldEntityAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4WorldEntityAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
