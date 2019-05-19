// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/AssetTypeActions/AssetTypeActions_T4PropEntityAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTypeActions_T4PropEntityAsset() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4PropEntityAsset_Factory_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4PropEntityAsset_Factory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
// End Cross Module References
	void UT4PropEntityAsset_Factory::StaticRegisterNativesUT4PropEntityAsset_Factory()
	{
	}
	UClass* Z_Construct_UClass_UT4PropEntityAsset_Factory_NoRegister()
	{
		return UT4PropEntityAsset_Factory::StaticClass();
	}
	struct Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetTypeActions_T4PropEntityAsset.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetTypeActions_T4PropEntityAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PropEntityAsset_Factory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics::ClassParams = {
		&UT4PropEntityAsset_Factory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PropEntityAsset_Factory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PropEntityAsset_Factory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PropEntityAsset_Factory, 2365218374);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<UT4PropEntityAsset_Factory>()
	{
		return UT4PropEntityAsset_Factory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PropEntityAsset_Factory(Z_Construct_UClass_UT4PropEntityAsset_Factory, &UT4PropEntityAsset_Factory::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("UT4PropEntityAsset_Factory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PropEntityAsset_Factory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
