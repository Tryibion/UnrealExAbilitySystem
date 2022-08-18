// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExAbilityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExAbilityComponent() {}
// Cross Module References
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbility_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(UExAbilityComponent::execRemoveTagFromOwnedTags)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTagFromOwnedTags(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execAddTagToOwnedTags)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTagToOwnedTags(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execSendGameplayTagEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendGameplayTagEvent(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execGetAttributeOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExAttribute**)Z_Param__Result=P_THIS->GetAttributeOfClass(Z_Param_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execCheckIfHasAttributeByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfHasAttributeByClass(Z_Param_Attribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execRemoveEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEffect(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execGrantEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GrantEffect(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execRemoveActiveEffect)
	{
		P_GET_OBJECT(UExEffect,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActiveEffect(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execAddActiveEffect)
	{
		P_GET_OBJECT(UExEffect,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActiveEffect(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execCreateAttribute)
	{
		P_GET_OBJECT(UClass,Z_Param_DefaultAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateAttribute(Z_Param_DefaultAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execRemoveActiveAbility)
	{
		P_GET_OBJECT(UExAbility,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActiveAbility(Z_Param_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execAddActiveAbility)
	{
		P_GET_OBJECT(UExAbility,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActiveAbility(Z_Param_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execCheckIfAbilityIsActive)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIfAbilityIsActive(Z_Param_Ability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execGetActiveAbilities)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UExAbility*>*)Z_Param__Result=P_THIS->GetActiveAbilities();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execTryActivateAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_GET_OBJECT_REF(UExAbility,Z_Param_Out_AbilityInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryActivateAbility(Z_Param_Ability,Z_Param_Out_AbilityInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbilityComponent::execGrantAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_Ability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GrantAbility(Z_Param_Ability);
		P_NATIVE_END;
	}
	void UExAbilityComponent::StaticRegisterNativesUExAbilityComponent()
	{
		UClass* Class = UExAbilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActiveAbility", &UExAbilityComponent::execAddActiveAbility },
			{ "AddActiveEffect", &UExAbilityComponent::execAddActiveEffect },
			{ "AddTagToOwnedTags", &UExAbilityComponent::execAddTagToOwnedTags },
			{ "CheckIfAbilityIsActive", &UExAbilityComponent::execCheckIfAbilityIsActive },
			{ "CheckIfHasAttributeByClass", &UExAbilityComponent::execCheckIfHasAttributeByClass },
			{ "CreateAttribute", &UExAbilityComponent::execCreateAttribute },
			{ "GetActiveAbilities", &UExAbilityComponent::execGetActiveAbilities },
			{ "GetAttributeOfClass", &UExAbilityComponent::execGetAttributeOfClass },
			{ "GrantAbility", &UExAbilityComponent::execGrantAbility },
			{ "GrantEffect", &UExAbilityComponent::execGrantEffect },
			{ "RemoveActiveAbility", &UExAbilityComponent::execRemoveActiveAbility },
			{ "RemoveActiveEffect", &UExAbilityComponent::execRemoveActiveEffect },
			{ "RemoveEffect", &UExAbilityComponent::execRemoveEffect },
			{ "RemoveTagFromOwnedTags", &UExAbilityComponent::execRemoveTagFromOwnedTags },
			{ "SendGameplayTagEvent", &UExAbilityComponent::execSendGameplayTagEvent },
			{ "TryActivateAbility", &UExAbilityComponent::execTryActivateAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics
	{
		struct ExAbilityComponent_eventAddActiveAbility_Parms
		{
			UExAbility* Ability;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventAddActiveAbility_Parms, Ability), Z_Construct_UClass_UExAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "AddActiveAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::ExAbilityComponent_eventAddActiveAbility_Parms), Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics
	{
		struct ExAbilityComponent_eventAddActiveEffect_Parms
		{
			UExEffect* Effect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventAddActiveEffect_Parms, Effect), Z_Construct_UClass_UExEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "AddActiveEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::ExAbilityComponent_eventAddActiveEffect_Parms), Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics
	{
		struct ExAbilityComponent_eventAddTagToOwnedTags_Parms
		{
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventAddTagToOwnedTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "AddTagToOwnedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::ExAbilityComponent_eventAddTagToOwnedTags_Parms), Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics
	{
		struct ExAbilityComponent_eventCheckIfAbilityIsActive_Parms
		{
			TSubclassOf<UExAbility>  Ability;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventCheckIfAbilityIsActive_Parms, Ability), Z_Construct_UClass_UExAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbilityComponent_eventCheckIfAbilityIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbilityComponent_eventCheckIfAbilityIsActive_Parms), &Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Abilities" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "CheckIfAbilityIsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::ExAbilityComponent_eventCheckIfAbilityIsActive_Parms), Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics
	{
		struct ExAbilityComponent_eventCheckIfHasAttributeByClass_Parms
		{
			TSubclassOf<UExAttribute>  Attribute;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Attribute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventCheckIfHasAttributeByClass_Parms, Attribute), Z_Construct_UClass_UExAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbilityComponent_eventCheckIfHasAttributeByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbilityComponent_eventCheckIfHasAttributeByClass_Parms), &Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Attributes" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "CheckIfHasAttributeByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::ExAbilityComponent_eventCheckIfHasAttributeByClass_Parms), Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics
	{
		struct ExAbilityComponent_eventCreateAttribute_Parms
		{
			TSubclassOf<UExAttribute>  DefaultAttribute;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::NewProp_DefaultAttribute = { "DefaultAttribute", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventCreateAttribute_Parms, DefaultAttribute), Z_Construct_UClass_UExAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::NewProp_DefaultAttribute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "CreateAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::ExAbilityComponent_eventCreateAttribute_Parms), Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_CreateAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_CreateAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics
	{
		struct ExAbilityComponent_eventGetActiveAbilities_Parms
		{
			TArray<UExAbility*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventGetActiveAbilities_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Abilities" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "GetActiveAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::ExAbilityComponent_eventGetActiveAbilities_Parms), Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics
	{
		struct ExAbilityComponent_eventGetAttributeOfClass_Parms
		{
			TSubclassOf<UExAttribute>  Attribute;
			UExAttribute* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventGetAttributeOfClass_Parms, Attribute), Z_Construct_UClass_UExAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventGetAttributeOfClass_Parms, ReturnValue), Z_Construct_UClass_UExAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Attributes" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "GetAttributeOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::ExAbilityComponent_eventGetAttributeOfClass_Parms), Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics
	{
		struct ExAbilityComponent_eventGrantAbility_Parms
		{
			TSubclassOf<UExAbility>  Ability;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventGrantAbility_Parms, Ability), Z_Construct_UClass_UExAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbilityComponent_eventGrantAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbilityComponent_eventGrantAbility_Parms), &Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Abilities" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "GrantAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::ExAbilityComponent_eventGrantAbility_Parms), Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_GrantAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_GrantAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics
	{
		struct ExAbilityComponent_eventGrantEffect_Parms
		{
			TSubclassOf<UExEffect>  Effect;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventGrantEffect_Parms, Effect), Z_Construct_UClass_UExEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbilityComponent_eventGrantEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbilityComponent_eventGrantEffect_Parms), &Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Effects" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "GrantEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::ExAbilityComponent_eventGrantEffect_Parms), Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_GrantEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_GrantEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics
	{
		struct ExAbilityComponent_eventRemoveActiveAbility_Parms
		{
			UExAbility* Ability;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventRemoveActiveAbility_Parms, Ability), Z_Construct_UClass_UExAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::NewProp_Ability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "RemoveActiveAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::ExAbilityComponent_eventRemoveActiveAbility_Parms), Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics
	{
		struct ExAbilityComponent_eventRemoveActiveEffect_Parms
		{
			UExEffect* Effect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventRemoveActiveEffect_Parms, Effect), Z_Construct_UClass_UExEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "RemoveActiveEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::ExAbilityComponent_eventRemoveActiveEffect_Parms), Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics
	{
		struct ExAbilityComponent_eventRemoveEffect_Parms
		{
			TSubclassOf<UExEffect>  Effect;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventRemoveEffect_Parms, Effect), Z_Construct_UClass_UExEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Effects" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "RemoveEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::ExAbilityComponent_eventRemoveEffect_Parms), Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_RemoveEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_RemoveEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics
	{
		struct ExAbilityComponent_eventRemoveTagFromOwnedTags_Parms
		{
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventRemoveTagFromOwnedTags_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "RemoveTagFromOwnedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::ExAbilityComponent_eventRemoveTagFromOwnedTags_Parms), Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics
	{
		struct ExAbilityComponent_eventSendGameplayTagEvent_Parms
		{
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventSendGameplayTagEvent_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 802167388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "SendGameplayTagEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::ExAbilityComponent_eventSendGameplayTagEvent_Parms), Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics
	{
		struct ExAbilityComponent_eventTryActivateAbility_Parms
		{
			TSubclassOf<UExAbility>  Ability;
			UExAbility* AbilityInstance;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityInstance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventTryActivateAbility_Parms, Ability), Z_Construct_UClass_UExAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_AbilityInstance = { "AbilityInstance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityComponent_eventTryActivateAbility_Parms, AbilityInstance), Z_Construct_UClass_UExAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbilityComponent_eventTryActivateAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbilityComponent_eventTryActivateAbility_Parms), &Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_Ability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_AbilityInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Abilities" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityComponent, nullptr, "TryActivateAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::ExAbilityComponent_eventTryActivateAbility_Parms), Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExAbilityComponent);
	UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister()
	{
		return UExAbilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExAbilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAttributes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultEffects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExAbilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExAbilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExAbilityComponent_AddActiveAbility, "AddActiveAbility" }, // 2837699157
		{ &Z_Construct_UFunction_UExAbilityComponent_AddActiveEffect, "AddActiveEffect" }, // 3825770801
		{ &Z_Construct_UFunction_UExAbilityComponent_AddTagToOwnedTags, "AddTagToOwnedTags" }, // 2124010528
		{ &Z_Construct_UFunction_UExAbilityComponent_CheckIfAbilityIsActive, "CheckIfAbilityIsActive" }, // 1513607267
		{ &Z_Construct_UFunction_UExAbilityComponent_CheckIfHasAttributeByClass, "CheckIfHasAttributeByClass" }, // 3743905609
		{ &Z_Construct_UFunction_UExAbilityComponent_CreateAttribute, "CreateAttribute" }, // 3965264565
		{ &Z_Construct_UFunction_UExAbilityComponent_GetActiveAbilities, "GetActiveAbilities" }, // 3590353252
		{ &Z_Construct_UFunction_UExAbilityComponent_GetAttributeOfClass, "GetAttributeOfClass" }, // 2728949485
		{ &Z_Construct_UFunction_UExAbilityComponent_GrantAbility, "GrantAbility" }, // 1780852349
		{ &Z_Construct_UFunction_UExAbilityComponent_GrantEffect, "GrantEffect" }, // 933959021
		{ &Z_Construct_UFunction_UExAbilityComponent_RemoveActiveAbility, "RemoveActiveAbility" }, // 2825664774
		{ &Z_Construct_UFunction_UExAbilityComponent_RemoveActiveEffect, "RemoveActiveEffect" }, // 3217766305
		{ &Z_Construct_UFunction_UExAbilityComponent_RemoveEffect, "RemoveEffect" }, // 992847802
		{ &Z_Construct_UFunction_UExAbilityComponent_RemoveTagFromOwnedTags, "RemoveTagFromOwnedTags" }, // 3484287134
		{ &Z_Construct_UFunction_UExAbilityComponent_SendGameplayTagEvent, "SendGameplayTagEvent" }, // 980979339
		{ &Z_Construct_UFunction_UExAbilityComponent_TryActivateAbility, "TryActivateAbility" }, // 3174541088
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ExAbilityComponent.h" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAttributes_Inner = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Ability System|Attributes" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, DefaultAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAttributes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "Ability System|Attributes" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_Attributes_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "Ability System|Abilities" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAbilities_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Ability System|Abilities" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0024080000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_GrantedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_GrantedAbilities_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveAbilities_Inner = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveAbilities_MetaData[] = {
		{ "Category", "Ability System|Abilities" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveAbilities = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, ActiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveAbilities_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultEffects_Inner = { "DefaultEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultEffects_MetaData[] = {
		{ "Category", "Ability System|Effects" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultEffects = { "DefaultEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, DefaultEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultEffects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveEffects_Inner = { "ActiveEffects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveEffects_MetaData[] = {
		{ "Category", "Ability System|Effects" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveEffects = { "ActiveEffects", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, ActiveEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_OwnerTags_MetaData[] = {
		{ "Category", "Ability System" },
		{ "ModuleRelativePath", "Public/ExAbilityComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_OwnerTags = { "OwnerTags", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbilityComponent, OwnerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_OwnerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_OwnerTags_MetaData)) }; // 506667518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExAbilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_DefaultEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_ActiveEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbilityComponent_Statics::NewProp_OwnerTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExAbilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExAbilityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExAbilityComponent_Statics::ClassParams = {
		&UExAbilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExAbilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExAbilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExAbilityComponent()
	{
		if (!Z_Registration_Info_UClass_UExAbilityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExAbilityComponent.OuterSingleton, Z_Construct_UClass_UExAbilityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExAbilityComponent.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExAbilityComponent>()
	{
		return UExAbilityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExAbilityComponent);
	struct Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExAbilityComponent, UExAbilityComponent::StaticClass, TEXT("UExAbilityComponent"), &Z_Registration_Info_UClass_UExAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExAbilityComponent), 3454012726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_2420720408(TEXT("/Script/ExAbilitySystem"),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
