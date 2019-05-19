// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/AI/Component/T4PathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PathFollowingComponent() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4PathFollowingComponent_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4PathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
// End Cross Module References
	void UT4PathFollowingComponent::StaticRegisterNativesUT4PathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UT4PathFollowingComponent_NoRegister()
	{
		return UT4PathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4PathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Component/T4PathFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/AI/Component/T4PathFollowingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4PathFollowingComponent_Statics::ClassParams = {
		&UT4PathFollowingComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4PathFollowingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4PathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4PathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4PathFollowingComponent, 2928738072);
	template<> T4FRAMEWORK_API UClass* StaticClass<UT4PathFollowingComponent>()
	{
		return UT4PathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4PathFollowingComponent(Z_Construct_UClass_UT4PathFollowingComponent, &UT4PathFollowingComponent::StaticClass, TEXT("/Script/T4Framework"), TEXT("UT4PathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
