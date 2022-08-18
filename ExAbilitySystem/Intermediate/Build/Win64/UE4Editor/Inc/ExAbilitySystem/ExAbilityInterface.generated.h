// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UExAbilityComponent;
#ifdef EXABILITYSYSTEM_ExAbilityInterface_generated_h
#error "ExAbilityInterface.generated.h already included, missing '#pragma once' in ExAbilityInterface.h"
#endif
#define EXABILITYSYSTEM_ExAbilityInterface_generated_h

#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_SPARSE_DATA
#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_RPC_WRAPPERS \
	virtual UExAbilityComponent* GetAbilitySystemComponent_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UExAbilityComponent* GetAbilitySystemComponent_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_EVENT_PARMS \
	struct ExAbilityInterface_eventGetAbilitySystemComponent_Parms \
	{ \
		UExAbilityComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ExAbilityInterface_eventGetAbilitySystemComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_CALLBACK_WRAPPERS
#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExAbilityInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAbilityInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAbilityInterface(UExAbilityInterface&&); \
	NO_API UExAbilityInterface(const UExAbilityInterface&); \
public:


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExAbilityInterface(UExAbilityInterface&&); \
	NO_API UExAbilityInterface(const UExAbilityInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExAbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExAbilityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExAbilityInterface)


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExAbilityInterface(); \
	friend struct Z_Construct_UClass_UExAbilityInterface_Statics; \
public: \
	DECLARE_CLASS(UExAbilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ExAbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UExAbilityInterface)


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_GENERATED_UINTERFACE_BODY() \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_GENERATED_UINTERFACE_BODY() \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExAbilityInterface() {} \
public: \
	typedef UExAbilityInterface UClassType; \
	typedef IExAbilityInterface ThisClass; \
	static UExAbilityComponent* Execute_GetAbilitySystemComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IExAbilityInterface() {} \
public: \
	typedef UExAbilityInterface UClassType; \
	typedef IExAbilityInterface ThisClass; \
	static UExAbilityComponent* Execute_GetAbilitySystemComponent(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_11_PROLOG \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_EVENT_PARMS


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_SPARSE_DATA \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_RPC_WRAPPERS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_CALLBACK_WRAPPERS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_SPARSE_DATA \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_CALLBACK_WRAPPERS \
	TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXABILITYSYSTEM_API UClass* StaticClass<class UExAbilityInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
