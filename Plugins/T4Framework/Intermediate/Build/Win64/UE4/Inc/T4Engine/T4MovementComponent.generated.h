// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef T4ENGINE_T4MovementComponent_generated_h
#error "T4MovementComponent.generated.h already included, missing '#pragma once' in T4MovementComponent.h"
#endif
#define T4ENGINE_T4MovementComponent_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTouched) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleTouched(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4MovementComponent(); \
	friend struct Z_Construct_UClass_UT4MovementComponent_Statics; \
public: \
	DECLARE_CLASS(UT4MovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(UT4MovementComponent)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUT4MovementComponent(); \
	friend struct Z_Construct_UClass_UT4MovementComponent_Statics; \
public: \
	DECLARE_CLASS(UT4MovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(UT4MovementComponent)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4MovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4MovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4MovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4MovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4MovementComponent(UT4MovementComponent&&); \
	NO_API UT4MovementComponent(const UT4MovementComponent&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4MovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4MovementComponent(UT4MovementComponent&&); \
	NO_API UT4MovementComponent(const UT4MovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4MovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4MovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4MovementComponent)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PostPhysicsTickFunction() { return STRUCT_OFFSET(UT4MovementComponent, PostPhysicsTickFunction); }


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_19_PROLOG
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4MovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4ENGINE_API UClass* StaticClass<class UT4MovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_Component_T4MovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
