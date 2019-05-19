// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/T4GameObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4GameObject() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_AT4GameObject_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_AT4GameObject();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void AT4GameObject::StaticRegisterNativesAT4GameObject()
	{
	}
	UClass* Z_Construct_UClass_AT4GameObject_NoRegister()
	{
		return AT4GameObject::StaticClass();
	}
	struct Z_Construct_UClass_AT4GameObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4GameObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4GameObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Object/T4GameObject.h" },
		{ "ModuleRelativePath", "Private/Object/T4GameObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4GameObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4GameObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4GameObject_Statics::ClassParams = {
		&AT4GameObject::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT4GameObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4GameObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4GameObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4GameObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4GameObject, 3353202551);
	template<> T4ENGINE_API UClass* StaticClass<AT4GameObject>()
	{
		return AT4GameObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4GameObject(Z_Construct_UClass_AT4GameObject, &AT4GameObject::StaticClass, TEXT("/Script/T4Engine"), TEXT("AT4GameObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4GameObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
