// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4RehearsalEditor/Private/AssetTypeActions/AssetTypeActions_T4ActionContiAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTypeActions_T4ActionContiAsset() {}
// Cross Module References
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4ActionContiAsset_Factory_NoRegister();
	T4REHEARSALEDITOR_API UClass* Z_Construct_UClass_UT4ActionContiAsset_Factory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_T4RehearsalEditor();
// End Cross Module References
	void UT4ActionContiAsset_Factory::StaticRegisterNativesUT4ActionContiAsset_Factory()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionContiAsset_Factory_NoRegister()
	{
		return UT4ActionContiAsset_Factory::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_T4RehearsalEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTypeActions/AssetTypeActions_T4ActionContiAsset.h" },
		{ "ModuleRelativePath", "Private/AssetTypeActions/AssetTypeActions_T4ActionContiAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionContiAsset_Factory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics::ClassParams = {
		&UT4ActionContiAsset_Factory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionContiAsset_Factory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionContiAsset_Factory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionContiAsset_Factory, 4029984047);
	template<> T4REHEARSALEDITOR_API UClass* StaticClass<UT4ActionContiAsset_Factory>()
	{
		return UT4ActionContiAsset_Factory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionContiAsset_Factory(Z_Construct_UClass_UT4ActionContiAsset_Factory, &UT4ActionContiAsset_Factory::StaticClass, TEXT("/Script/T4RehearsalEditor"), TEXT("UT4ActionContiAsset_Factory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionContiAsset_Factory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
