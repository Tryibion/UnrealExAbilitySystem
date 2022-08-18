// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FLatentActionInfo;
class UExAbilityComponent;
class AActor;
#ifdef EXABILITYSYSTEM_ExAbility_generated_h
#error "ExAbility.generated.h already included, missing '#pragma once' in ExAbility.h"
#endif
#define EXABILITYSYSTEM_ExAbility_generated_h

#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics; \
	EXABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FAbilityOwnerInfo>();

#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_SPARSE_DATA
#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_RPC_WRAPPERS \
	virtual void CancelAbility_BP_Implementation(); \
	virtual void EndAbility_BP_Implementation(); \
	virtual void ActivateAbility_BP_Implementation(); \
	virtual bool CanActivateAbility_BP_Implementation(); \
 \
	DECLARE_FUNCTION(execWaitForTag); \
	DECLARE_FUNCTION(execGetOwningAbilityComponent); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execCommitAbility); \
	DECLARE_FUNCTION(execCancelAbility_BP); \
	DECLARE_FUNCTION(execCancelAbility); \
	DECLARE_FUNCTION(execEndAbility_BP); \
	DECLARE_FUNCTION(execEndAbility); \
	DECLARE_FUNCTION(execActivateAbility_BP); \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execCanActivateAbility_BP); \
	DECLARE_FUNCTION(execCanActivateAbility);


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CancelAbility_BP_Implementation(); \
	virtual void EndAbility_BP_Implementation(); \
	virtual void ActivateAbility_BP_Implementation(); \
	virtual bool CanActivateAbility_BP_Implementation(); \
 \
	DECLARE_FUNCTION(execWaitForTag); \
	DECLARE_FUNCTION(execGetOwningAbilityComponent); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execCommitAbility); \
	DECLARE_FUNCTION(execCancelAbility_BP); \
	DECLARE_FUNCTION(execCancelAbility); \
	DECLARE_FUNCTION(execEndAbility_BP); \
	DECLARE_FUNCTION(execEndAbility); \
	DECLARE_FUNCTION(execActivateAbility_BP); \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execCanActivateAbility_BP); \
	DECLARE_FUNCTION(execCanActivateAbility);


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_EVENT_PARMS \
	struct ExAbility_eventCanActivateAbility_BP_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ExAbility_eventCanActivateAbility_BP_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_CALLBACK_WRAPPERS
#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExAbility(); \
	friend struct Z_Construct_UClass_UExAbility_Statics; \
public: \
	DECLARE_CLASS(UExAbility, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ExAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExAbility)


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUExAbility(); \
	friend struct Z_Construct_UClass_UExAbility_Statics; \
public: \
	DECLARE_CLASS(UExAbility, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ExAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExAbility)


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExAbility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAbility(UExAbility&&); \
	NO_API UExAbility(const UExAbility&); \
public:


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAbility(UExAbility&&); \
	NO_API UExAbility(const UExAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAbility); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UExAbility)


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_63_PROLOG \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_EVENT_PARMS


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_SPARSE_DATA \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_RPC_WRAPPERS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_CALLBACK_WRAPPERS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_INCLASS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_SPARSE_DATA \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_CALLBACK_WRAPPERS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_INCLASS_NO_PURE_DECLS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXABILITYSYSTEM_API UClass* StaticClass<class UExAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
