// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Component/T4SkinnedMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4SkinnedMeshComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkinnedMeshComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4SkinnedMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
// End Cross Module References
	void UT4SkinnedMeshComponent::StaticRegisterNativesUT4SkinnedMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4SkinnedMeshComponent_NoRegister()
	{
		return UT4SkinnedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4SkinnedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4SkinnedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkinnedMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4SkinnedMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "Object/Component/T4SkinnedMeshComponent.h" },
		{ "ModuleRelativePath", "Private/Object/Component/T4SkinnedMeshComponent.h" },
		{ "ToolTip", "https://docs.unrealengine.com/en-us/Engine/Content/Types/SkeletalMeshes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4SkinnedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4SkinnedMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4SkinnedMeshComponent_Statics::ClassParams = {
		&UT4SkinnedMeshComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UT4SkinnedMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4SkinnedMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4SkinnedMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4SkinnedMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4SkinnedMeshComponent, 3672986392);
	template<> T4ENGINE_API UClass* StaticClass<UT4SkinnedMeshComponent>()
	{
		return UT4SkinnedMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4SkinnedMeshComponent(Z_Construct_UClass_UT4SkinnedMeshComponent, &UT4SkinnedMeshComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4SkinnedMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4SkinnedMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
