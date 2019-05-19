// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Subobject/T4ItemSkeletalObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ItemSkeletalObject() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4ItemSkeletalObject_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4ItemSkeletalObject();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4GameObject();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4CapsuleComponent_NoRegister();
// End Cross Module References
	void AT4ItemSkeletalObject::StaticRegisterNativesAT4ItemSkeletalObject()
	{
	}
	UClass* Z_Construct_UClass_AT4ItemSkeletalObject_NoRegister()
	{
		return AT4ItemSkeletalObject::StaticClass();
	}
	struct Z_Construct_UClass_AT4ItemSkeletalObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4ItemSkeletalObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4GameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ItemSkeletalObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Object/Subobject/T4ItemSkeletalObject.h" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4ItemSkeletalObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4ItemSkeletalObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4ItemSkeletalObject, SkeletalMeshComponent), Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Object/Subobject/T4ItemSkeletalObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4ItemSkeletalObject, CapsuleComponent), Z_Construct_UClass_UT4CapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4ItemSkeletalObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4ItemSkeletalObject_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4ItemSkeletalObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4ItemSkeletalObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4ItemSkeletalObject_Statics::ClassParams = {
		&AT4ItemSkeletalObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4ItemSkeletalObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AT4ItemSkeletalObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT4ItemSkeletalObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4ItemSkeletalObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4ItemSkeletalObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4ItemSkeletalObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4ItemSkeletalObject, 717950584);
	template<> T4ENGINE_API UClass* StaticClass<AT4ItemSkeletalObject>()
	{
		return AT4ItemSkeletalObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4ItemSkeletalObject(Z_Construct_UClass_AT4ItemSkeletalObject, &AT4ItemSkeletalObject::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4ItemSkeletalObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4ItemSkeletalObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
