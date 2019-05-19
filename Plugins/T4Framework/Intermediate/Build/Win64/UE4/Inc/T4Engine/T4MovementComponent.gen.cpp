// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "T4Engine/Private/Object/Component/T4MovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MovementComponent() {}
// Cross Module References
	T4ENGINE_API UClass* Z_Construct_UClass_UT4MovementComponent_NoRegister();
	T4ENGINE_API UClass* Z_Construct_UClass_UT4MovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_T4Engine();
	T4ENGINE_API UFunction* Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	T4ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction();
// End Cross Module References
	void UT4MovementComponent::StaticRegisterNativesUT4MovementComponent()
	{
		UClass* Class = UT4MovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleTouched", &UT4MovementComponent::execCapsuleTouched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics
	{
		struct T4MovementComponent_eventCapsuleTouched_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovementComponent_eventCapsuleTouched_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((T4MovementComponent_eventCapsuleTouched_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4MovementComponent_eventCapsuleTouched_Parms), &Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovementComponent_eventCapsuleTouched_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovementComponent_eventCapsuleTouched_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovementComponent_eventCapsuleTouched_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovementComponent_eventCapsuleTouched_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Object/Component/T4MovementComponent.h" },
		{ "ToolTip", "Called when the collision capsule touches another primitive component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4MovementComponent, nullptr, "CapsuleTouched", sizeof(T4MovementComponent_eventCapsuleTouched_Parms), Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UT4MovementComponent_NoRegister()
	{
		return UT4MovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UT4MovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostPhysicsTickFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostPhysicsTickFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4MovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_T4Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4MovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4MovementComponent_CapsuleTouched, "CapsuleTouched" }, // 2110041059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Object/Component/T4MovementComponent.h" },
		{ "ModuleRelativePath", "Private/Object/Component/T4MovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MovementComponent_Statics::NewProp_PostPhysicsTickFunction_MetaData[] = {
		{ "ModuleRelativePath", "Private/Object/Component/T4MovementComponent.h" },
		{ "ToolTip", "Post-physics tick function for this character" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UT4MovementComponent_Statics::NewProp_PostPhysicsTickFunction = { "PostPhysicsTickFunction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MovementComponent, PostPhysicsTickFunction), Z_Construct_UScriptStruct_FT4MovementComponentPostPhysicsTickFunction, METADATA_PARAMS(Z_Construct_UClass_UT4MovementComponent_Statics::NewProp_PostPhysicsTickFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UT4MovementComponent_Statics::NewProp_PostPhysicsTickFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4MovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MovementComponent_Statics::NewProp_PostPhysicsTickFunction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4MovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4MovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UT4MovementComponent_Statics::ClassParams = {
		&UT4MovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UT4MovementComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UT4MovementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UT4MovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UT4MovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4MovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UT4MovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UT4MovementComponent, 3520866131);
	template<> T4ENGINE_API UClass* StaticClass<UT4MovementComponent>()
	{
		return UT4MovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UT4MovementComponent(Z_Construct_UClass_UT4MovementComponent, &UT4MovementComponent::StaticClass, TEXT("/Script/T4Engine"), TEXT("UT4MovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4MovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
