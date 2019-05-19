// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Component/T4SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SkeletalMeshComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4SkeletalMeshComponent::StaticRegisterNativesUT4SkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4SkeletalMeshComponent_NoRegister()
	{
		return UT4SkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4SkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4SkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4SkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "Object/Component/T4SkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Private/Object/Component/T4SkeletalMeshComponent.h" },
		{ "ToolTip", "https://docs.unrealengine.com/en-us/Engine/Content/Types/SkeletalMeshes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4SkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4SkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4SkeletalMeshComponent_Statics::ClassParams = {
		&UT4SkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4SkeletalMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4SkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4SkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4SkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4SkeletalMeshComponent, 1937035712);
	template<> T4ENGINE_API UClass* StaticClass<UT4SkeletalMeshComponent>()
	{
		return UT4SkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4SkeletalMeshComponent(Z_Construct_UClass_UT4SkeletalMeshComponent, &UT4SkeletalMeshComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4SkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4SkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
