// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef T4ENGINE_T4HumanAnimInstance_generated_h
#error "T4HumanAnimInstance.generated.h already included, missing '#pragma once' in T4HumanAnimInstance.h"
#endif
#define T4ENGINE_T4HumanAnimInstance_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMovementMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_InMontage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMovementMontageEnded(Z_Param_InMontage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSkillMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_InMontage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSkillMontageEnded(Z_Param_InMontage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMovementMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_InMontage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMovementMontageEnded(Z_Param_InMontage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSkillMontageEnded) \
	{ \
		P_GET_OBJECT(UAnimMontage,Z_Param_InMontage); \
		P_GET_UBOOL(Z_Param_bInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSkillMontageEnded(Z_Param_InMontage,Z_Param_bInterrupted); \
		P_NATIVE_END; \
	}


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUT4HumanAnimInstance(); \
	friend struct Z_Construct_UClass_UT4HumanAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UT4HumanAnimInstance, UT4BaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(UT4HumanAnimInstance)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUT4HumanAnimInstance(); \
	friend struct Z_Construct_UClass_UT4HumanAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UT4HumanAnimInstance, UT4BaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/T4Engine"), NO_API) \
	DECLARE_SERIALIZER(UT4HumanAnimInstance)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4HumanAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4HumanAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4HumanAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4HumanAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4HumanAnimInstance(UT4HumanAnimInstance&&); \
	NO_API UT4HumanAnimInstance(const UT4HumanAnimInstance&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UT4HumanAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UT4HumanAnimInstance(UT4HumanAnimInstance&&); \
	NO_API UT4HumanAnimInstance(const UT4HumanAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UT4HumanAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4HumanAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4HumanAnimInstance)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementVariables() { return STRUCT_OFFSET(UT4HumanAnimInstance, MovementVariables); } \
	FORCEINLINE static uint32 __PPO__IKVariables() { return STRUCT_OFFSET(UT4HumanAnimInstance, IKVariables); } \
	FORCEINLINE static uint32 __PPO__SkillMontage() { return STRUCT_OFFSET(UT4HumanAnimInstance, SkillMontage); } \
	FORCEINLINE static uint32 __PPO__MovementMontage() { return STRUCT_OFFSET(UT4HumanAnimInstance, MovementMontage); } \
	FORCEINLINE static uint32 __PPO__MoveBlendspace() { return STRUCT_OFFSET(UT4HumanAnimInstance, MoveBlendspace); } \
	FORCEINLINE static uint32 __PPO__LockOnBlendspace() { return STRUCT_OFFSET(UT4HumanAnimInstance, LockOnBlendspace); }


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_14_PROLOG
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4HumanAnimInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4ENGINE_API UClass* StaticClass<class UT4HumanAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Engine_Private_Object_AnimControl_AnimInstance_T4HumanAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
