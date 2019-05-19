// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Classes/Action/T4ActionContiAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ActionContiAsset() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ActionContiAsset_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4ActionContiAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4RootAction();
// End Cross Module References
	void UT4ActionContiAsset::StaticRegisterNativesUT4ActionContiAsset()
	{
	}
	UClass* Z_Construct_UClass_UT4ActionContiAsset_NoRegister()
	{
		return UT4ActionContiAsset::StaticClass();
	}
	struct Z_Construct_UClass_UT4ActionContiAsset_Statics
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
	UObject* (*const Z_Construct_UClass_UT4ActionContiAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Tech4Labs" },
		{ "ClassGroupNames", "Tech4Labs" },
		{ "IncludePath", "Action/T4ActionContiAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionContiAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Action/T4ActionContiAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionContiAsset, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_ThumbnailImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_RootAction_MetaData[] = {
		{ "Category", "T4ActionContiAsset" },
		{ "ModuleRelativePath", "Classes/Action/T4ActionContiAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_RootAction = { "RootAction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4ActionContiAsset, RootAction), Z_Construct_UScriptStruct_FT4RootAction, METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_RootAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_RootAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4ActionContiAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4ActionContiAsset_Statics::NewProp_RootAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4ActionContiAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4ActionContiAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4ActionContiAsset_Statics::ClassParams = {
		&UT4ActionContiAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UT4ActionContiAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4ActionContiAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4ActionContiAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4ActionContiAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4ActionContiAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4ActionContiAsset, 1971645241);
	template<> T4ENGINE_API UClass* StaticClass<UT4ActionContiAsset>()
	{
		return UT4ActionContiAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4ActionContiAsset(Z_Construct_UClass_UT4ActionContiAsset, &UT4ActionContiAsset::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4ActionContiAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4ActionContiAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UT4ActionContiAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
