// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Assets/Conti/T4ContiAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ContiAsset() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ContiAsset_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ContiAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RootAction();
// End Cross Module References
	void UT4ContiAsset::StaticRegisterNativesUT4ContiAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ContiAsset_NoRegister()
	{
		return UT4ContiAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ContiAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4ContiAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContiAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Assets/Conti/T4ContiAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Assets/Conti/T4ContiAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Assets/Conti/T4ContiAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContiAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_ThumbnailImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_RootAction_MetaData[] = {
		{ "Category", "T4ContiAsset" },
		{ "ModuleRelativePath", "Classes/Assets/Conti/T4ContiAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_RootAction = { "RootAction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ContiAsset, RootAction), Z_Construct_UScriptStruct_FT4RootAction, METADATA_PARAMS(Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_RootAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_RootAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ContiAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ContiAsset_Statics::NewProp_RootAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ContiAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ContiAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ContiAsset_Statics::ClassParams = {
		&UT4ContiAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ContiAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4ContiAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ContiAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4ContiAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ContiAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ContiAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ContiAsset, 765496609);
	template<> T4ENGINE_API UClass* StaticClass<UT4ContiAsset>()
	{
		return UT4ContiAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ContiAsset(Z_Construct_UClass_UT4ContiAsset, &UT4ContiAsset::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4ContiAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ContiAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ContiAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
