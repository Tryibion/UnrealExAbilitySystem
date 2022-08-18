// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UExAbilityComponent;
class AActor;
#ifdef EXABILITYSYSTEM_ExAttribute_generated_h
#error "ExAttribute.generated.h already included, missing '#pragma once' in ExAttribute.h"
#endif
#define EXABILITYSYSTEM_ExAttribute_generated_h

#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics; \
	EXABILITYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<struct FAttributeOwnerInfo>();

#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_37_DELEGATE \
struct _Script_ExAbilitySystem_eventOnValueChanged_Parms \
{ \
	float NewValue; \
	float OldValue; \
}; \
static inline void FOnValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnValueChanged, float NewValue, float OldValue) \
{ \
	_Script_ExAbilitySystem_eventOnValueChanged_Parms Parms; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	OnValueChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_SPARSE_DATA
#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_RPC_WRAPPERS \
	virtual void PreAttributeChange_BP_Implementation(); \
	virtual void PostAttributeChange_BP_Implementation(); \
 \
	DECLARE_FUNCTION(execPreAttributeChange_BP); \
	DECLARE_FUNCTION(execPreAttributeChange); \
	DECLARE_FUNCTION(execPostAttributeChange_BP); \
	DECLARE_FUNCTION(execPostAttributeChange); \
	DECLARE_FUNCTION(execGetMaximumValue); \
	DECLARE_FUNCTION(execGetMinimumValue); \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execChangeMaximumValue); \
	DECLARE_FUNCTION(execChangeMinimumValue); \
	DECLARE_FUNCTION(execChangeCurrentValue); \
	DECLARE_FUNCTION(execGetOwningAbilityComponent); \
	DECLARE_FUNCTION(execGetOwningActor);


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PreAttributeChange_BP_Implementation(); \
	virtual void PostAttributeChange_BP_Implementation(); \
 \
	DECLARE_FUNCTION(execPreAttributeChange_BP); \
	DECLARE_FUNCTION(execPreAttributeChange); \
	DECLARE_FUNCTION(execPostAttributeChange_BP); \
	DECLARE_FUNCTION(execPostAttributeChange); \
	DECLARE_FUNCTION(execGetMaximumValue); \
	DECLARE_FUNCTION(execGetMinimumValue); \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execChangeMaximumValue); \
	DECLARE_FUNCTION(execChangeMinimumValue); \
	DECLARE_FUNCTION(execChangeCurrentValue); \
	DECLARE_FUNCTION(execGetOwningAbilityComponent); \
	DECLARE_FUNCTION(execGetOwningActor);


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_EVENT_PARMS
#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_CALLBACK_WRAPPERS
#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExAttribute(); \
	friend struct Z_Construct_UClass_UExAttribute_Statics; \
public: \
	DECLARE_CLASS(UExAttribute, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ExAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExAttribute)


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUExAttribute(); \
	friend struct Z_Construct_UClass_UExAttribute_Statics; \
public: \
	DECLARE_CLASS(UExAttribute, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ExAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExAttribute)


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExAttribute(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExAttribute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAttribute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAttribute(UExAttribute&&); \
	NO_API UExAttribute(const UExAttribute&); \
public:


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAttribute(UExAttribute&&); \
	NO_API UExAttribute(const UExAttribute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAttribute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAttribute); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UExAttribute)


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentValue() { return STRUCT_OFFSET(UExAttribute, CurrentValue); } \
	FORCEINLINE static uint32 __PPO__OldCurrentValue() { return STRUCT_OFFSET(UExAttribute, OldCurrentValue); } \
	FORCEINLINE static uint32 __PPO__MinimumValue() { return STRUCT_OFFSET(UExAttribute, MinimumValue); } \
	FORCEINLINE static uint32 __PPO__OldMinimumValue() { return STRUCT_OFFSET(UExAttribute, OldMinimumValue); } \
	FORCEINLINE static uint32 __PPO__MaximumValue() { return STRUCT_OFFSET(UExAttribute, MaximumValue); } \
	FORCEINLINE static uint32 __PPO__OldMaximumValue() { return STRUCT_OFFSET(UExAttribute, OldMaximumValue); }


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_41_PROLOG \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_EVENT_PARMS


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_PRIVATE_PROPERTY_OFFSET \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_SPARSE_DATA \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_RPC_WRAPPERS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_CALLBACK_WRAPPERS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_INCLASS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_PRIVATE_PROPERTY_OFFSET \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_SPARSE_DATA \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_CALLBACK_WRAPPERS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_INCLASS_NO_PURE_DECLS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXABILITYSYSTEM_API UClass* StaticClass<class UExAttribute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h


#define FOREACH_ENUM_EATTRIBUTEVALUETYPE(op) \
	op(EAttributeValueType::AVT_CurrentValue) \
	op(EAttributeValueType::AVT_MinimumValue) \
	op(EAttributeValueType::AVT_MaximumValue) 

enum class EAttributeValueType : uint8;
template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EAttributeValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
