// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UExAttribute;
class UExEffect;
class UExAbility;
#ifdef EXABILITYSYSTEM_ExAbilityComponent_generated_h
#error "ExAbilityComponent.generated.h already included, missing '#pragma once' in ExAbilityComponent.h"
#endif
#define EXABILITYSYSTEM_ExAbilityComponent_generated_h

#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_SPARSE_DATA
#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveTagFromOwnedTags); \
	DECLARE_FUNCTION(execAddTagToOwnedTags); \
	DECLARE_FUNCTION(execSendGameplayTagEvent); \
	DECLARE_FUNCTION(execGetAttributeOfClass); \
	DECLARE_FUNCTION(execCheckIfHasAttributeByClass); \
	DECLARE_FUNCTION(execRemoveEffect); \
	DECLARE_FUNCTION(execGrantEffect); \
	DECLARE_FUNCTION(execRemoveActiveEffect); \
	DECLARE_FUNCTION(execAddActiveEffect); \
	DECLARE_FUNCTION(execCreateAttribute); \
	DECLARE_FUNCTION(execRemoveActiveAbility); \
	DECLARE_FUNCTION(execAddActiveAbility); \
	DECLARE_FUNCTION(execCheckIfAbilityIsActive); \
	DECLARE_FUNCTION(execGetActiveAbilities); \
	DECLARE_FUNCTION(execTryActivateAbility); \
	DECLARE_FUNCTION(execGrantAbility);


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveTagFromOwnedTags); \
	DECLARE_FUNCTION(execAddTagToOwnedTags); \
	DECLARE_FUNCTION(execSendGameplayTagEvent); \
	DECLARE_FUNCTION(execGetAttributeOfClass); \
	DECLARE_FUNCTION(execCheckIfHasAttributeByClass); \
	DECLARE_FUNCTION(execRemoveEffect); \
	DECLARE_FUNCTION(execGrantEffect); \
	DECLARE_FUNCTION(execRemoveActiveEffect); \
	DECLARE_FUNCTION(execAddActiveEffect); \
	DECLARE_FUNCTION(execCreateAttribute); \
	DECLARE_FUNCTION(execRemoveActiveAbility); \
	DECLARE_FUNCTION(execAddActiveAbility); \
	DECLARE_FUNCTION(execCheckIfAbilityIsActive); \
	DECLARE_FUNCTION(execGetActiveAbilities); \
	DECLARE_FUNCTION(execTryActivateAbility); \
	DECLARE_FUNCTION(execGrantAbility);


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExAbilityComponent(); \
	friend struct Z_Construct_UClass_UExAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UExAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExAbilityComponent)


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUExAbilityComponent(); \
	friend struct Z_Construct_UClass_UExAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UExAbilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExAbilityComponent)


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExAbilityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExAbilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAbilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAbilityComponent(UExAbilityComponent&&); \
	NO_API UExAbilityComponent(const UExAbilityComponent&); \
public:


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAbilityComponent(UExAbilityComponent&&); \
	NO_API UExAbilityComponent(const UExAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExAbilityComponent)


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_17_PROLOG
#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_SPARSE_DATA \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_RPC_WRAPPERS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_INCLASS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_SPARSE_DATA \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXABILITYSYSTEM_API UClass* StaticClass<class UExAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
