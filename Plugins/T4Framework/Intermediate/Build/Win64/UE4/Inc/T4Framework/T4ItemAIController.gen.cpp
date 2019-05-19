// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Framework/Classes/AI/T4ItemAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4ItemAIController() {}
// Cross Module References
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4ItemAIController_NoRegister();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_AT4ItemAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_T4Framework();
	T4FRAMEWORK_API UClass* Z_Construct_UClass_UT4PathFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	void AT4ItemAIController::StaticRegisterNativesAT4ItemAIController()
	{
	}
	UClass* Z_Construct_UClass_AT4ItemAIController_NoRegister()
	{
		return AT4ItemAIController::StaticClass();
	}
	struct Z_Construct_UClass_AT4ItemAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_T4PathFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_T4PathFollowingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4ItemAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Framework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ItemAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/T4ItemAIController.h" },
		{ "ModuleRelativePath", "Classes/AI/T4ItemAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_T4PathFollowingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AI/T4ItemAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_T4PathFollowingComponent = { "T4PathFollowingComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4ItemAIController, T4PathFollowingComponent), Z_Construct_UClass_UT4PathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_T4PathFollowingComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_T4PathFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/T4ItemAIController.h" },
		{ "ToolTip", "Cached BT component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4ItemAIController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BehaviorTreeAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BehaviorTreeAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BlackboardDataAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/T4ItemAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BlackboardDataAsset = { "BlackboardDataAsset", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4ItemAIController, BlackboardDataAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BlackboardDataAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BlackboardDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4ItemAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_T4PathFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BehaviorTreeAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4ItemAIController_Statics::NewProp_BlackboardDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4ItemAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4ItemAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AT4ItemAIController_Statics::ClassParams = {
		&AT4ItemAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4ItemAIController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AT4ItemAIController_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AT4ItemAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AT4ItemAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4ItemAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AT4ItemAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AT4ItemAIController, 277207961);
	template<> T4FRAMEWORK_API UClass* StaticClass<AT4ItemAIController>()
	{
		return AT4ItemAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AT4ItemAIController(Z_Construct_UClass_AT4ItemAIController, &AT4ItemAIController::StaticClass, TEXT("/Script/T4Framework"), TEXT("AT4ItemAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4ItemAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
