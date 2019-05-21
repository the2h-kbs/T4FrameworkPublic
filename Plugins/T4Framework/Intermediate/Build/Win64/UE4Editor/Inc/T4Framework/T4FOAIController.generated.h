// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef T4FRAMEWORK_T4FOAIController_generated_h
#error "T4FOAIController.generated.h already included, missing '#pragma once' in T4FOAIController.h"
#endif
#define T4FRAMEWORK_T4FOAIController_generated_h

#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_RPC_WRAPPERS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4FOAIController(); \
	friend struct Z_Construct_UClass_AT4FOAIController_Statics; \
public: \
	DECLARE_CLASS(AT4FOAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(AT4FOAIController)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAT4FOAIController(); \
	friend struct Z_Construct_UClass_AT4FOAIController_Statics; \
public: \
	DECLARE_CLASS(AT4FOAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/T4Framework"), NO_API) \
	DECLARE_SERIALIZER(AT4FOAIController)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4FOAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4FOAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4FOAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4FOAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4FOAIController(AT4FOAIController&&); \
	NO_API AT4FOAIController(const AT4FOAIController&); \
public:


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4FOAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4FOAIController(AT4FOAIController&&); \
	NO_API AT4FOAIController(const AT4FOAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4FOAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4FOAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4FOAIController)


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardDataAsset() { return STRUCT_OFFSET(AT4FOAIController, BlackboardDataAsset); } \
	FORCEINLINE static uint32 __PPO__BehaviorTreeAsset() { return STRUCT_OFFSET(AT4FOAIController, BehaviorTreeAsset); } \
	FORCEINLINE static uint32 __PPO__T4PathFollowingComponent() { return STRUCT_OFFSET(AT4FOAIController, T4PathFollowingComponent); }


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_23_PROLOG
#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_RPC_WRAPPERS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_INCLASS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_PRIVATE_PROPERTY_OFFSET \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_INCLASS_NO_PURE_DECLS \
	T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class T4FOAIController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> T4FRAMEWORK_API UClass* StaticClass<class AT4FOAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID T4FrameworkDeploy_Plugins_T4Framework_Source_T4Framework_Classes_AI_T4FOAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
