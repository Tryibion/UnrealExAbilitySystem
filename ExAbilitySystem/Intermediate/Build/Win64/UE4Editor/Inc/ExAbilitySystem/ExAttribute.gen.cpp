// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExAttribute() {}
// Cross Module References
	EXABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType();
	EXABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeOwnerInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics
	{
		struct _Script_ExAbilitySystem_eventOnValueChanged_Parms
		{
			float NewValue;
			float OldValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ExAbilitySystem_eventOnValueChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ExAbilitySystem_eventOnValueChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem, nullptr, "OnValueChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_ExAbilitySystem_eventOnValueChanged_Parms), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAttributeValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EAttributeValueType"));
		}
		return Singleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EAttributeValueType>()
	{
		return EAttributeValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttributeValueType(EAttributeValueType_StaticEnum, TEXT("/Script/ExAbilitySystem"), TEXT("EAttributeValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Hash() { return 1319066716U; }
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttributeValueType"), 0, Get_Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttributeValueType::AVT_CurrentValue", (int64)EAttributeValueType::AVT_CurrentValue },
				{ "EAttributeValueType::AVT_MinimumValue", (int64)EAttributeValueType::AVT_MinimumValue },
				{ "EAttributeValueType::AVT_MaximumValue", (int64)EAttributeValueType::AVT_MaximumValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AVT_CurrentValue.DisplayName", "Current Value" },
				{ "AVT_CurrentValue.Name", "EAttributeValueType::AVT_CurrentValue" },
				{ "AVT_MaximumValue.DisplayName", "Maximum Value" },
				{ "AVT_MaximumValue.Name", "EAttributeValueType::AVT_MaximumValue" },
				{ "AVT_MinimumValue.DisplayName", "Minimum Value" },
				{ "AVT_MinimumValue.Name", "EAttributeValueType::AVT_MinimumValue" },
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ExAttribute.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
				nullptr,
				"EAttributeValueType",
				"EAttributeValueType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAttributeOwnerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXABILITYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAttributeOwnerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeOwnerInfo, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("AttributeOwnerInfo"), sizeof(FAttributeOwnerInfo), Get_Z_Construct_UScriptStruct_FAttributeOwnerInfo_Hash());
	}
	return Singleton;
}
template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<FAttributeOwnerInfo>()
{
	return FAttributeOwnerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributeOwnerInfo(FAttributeOwnerInfo::StaticStruct, TEXT("/Script/ExAbilitySystem"), TEXT("AttributeOwnerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ExAbilitySystem_StaticRegisterNativesFAttributeOwnerInfo
{
	FScriptStruct_ExAbilitySystem_StaticRegisterNativesFAttributeOwnerInfo()
	{
		UScriptStruct::DeferCppStructOps<FAttributeOwnerInfo>(FName(TEXT("AttributeOwnerInfo")));
	}
} ScriptStruct_ExAbilitySystem_StaticRegisterNativesFAttributeOwnerInfo;
	struct Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningAbilityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbilityComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeOwnerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeOwnerInfo, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent = { "OwningAbilityComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeOwnerInfo, OwningAbilityComponent), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeOwnerInfo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		&NewStructOps,
		"AttributeOwnerInfo",
		sizeof(FAttributeOwnerInfo),
		alignof(FAttributeOwnerInfo),
		Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeOwnerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributeOwnerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributeOwnerInfo"), sizeof(FAttributeOwnerInfo), Get_Z_Construct_UScriptStruct_FAttributeOwnerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributeOwnerInfo_Hash() { return 2423980452U; }
	DEFINE_FUNCTION(UExAttribute::execPreAttributeChange_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreAttributeChange_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execPreAttributeChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreAttributeChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execPostAttributeChange_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAttributeChange_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execPostAttributeChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostAttributeChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execGetMaximumValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaximumValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execGetMinimumValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinimumValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execGetCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execChangeMaximumValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMaximumValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execChangeMinimumValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMinimumValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execChangeCurrentValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeCurrentValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execGetOwningAbilityComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExAbilityComponent**)Z_Param__Result=P_THIS->GetOwningAbilityComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAttribute::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	static FName NAME_UExAttribute_PostAttributeChange_BP = FName(TEXT("PostAttributeChange_BP"));
	void UExAttribute::PostAttributeChange_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UExAttribute_PostAttributeChange_BP),NULL);
	}
	static FName NAME_UExAttribute_PreAttributeChange_BP = FName(TEXT("PreAttributeChange_BP"));
	void UExAttribute::PreAttributeChange_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UExAttribute_PreAttributeChange_BP),NULL);
	}
	void UExAttribute::StaticRegisterNativesUExAttribute()
	{
		UClass* Class = UExAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeCurrentValue", &UExAttribute::execChangeCurrentValue },
			{ "ChangeMaximumValue", &UExAttribute::execChangeMaximumValue },
			{ "ChangeMinimumValue", &UExAttribute::execChangeMinimumValue },
			{ "GetCurrentValue", &UExAttribute::execGetCurrentValue },
			{ "GetMaximumValue", &UExAttribute::execGetMaximumValue },
			{ "GetMinimumValue", &UExAttribute::execGetMinimumValue },
			{ "GetOwningAbilityComponent", &UExAttribute::execGetOwningAbilityComponent },
			{ "GetOwningActor", &UExAttribute::execGetOwningActor },
			{ "PostAttributeChange", &UExAttribute::execPostAttributeChange },
			{ "PostAttributeChange_BP", &UExAttribute::execPostAttributeChange_BP },
			{ "PreAttributeChange", &UExAttribute::execPreAttributeChange },
			{ "PreAttributeChange_BP", &UExAttribute::execPreAttributeChange_BP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics
	{
		struct ExAttribute_eventChangeCurrentValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventChangeCurrentValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "ChangeCurrentValue", nullptr, nullptr, sizeof(ExAttribute_eventChangeCurrentValue_Parms), Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_ChangeCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics
	{
		struct ExAttribute_eventChangeMaximumValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventChangeMaximumValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "ChangeMaximumValue", nullptr, nullptr, sizeof(ExAttribute_eventChangeMaximumValue_Parms), Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_ChangeMaximumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics
	{
		struct ExAttribute_eventChangeMinimumValue_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventChangeMinimumValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "ChangeMinimumValue", nullptr, nullptr, sizeof(ExAttribute_eventChangeMinimumValue_Parms), Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_ChangeMinimumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics
	{
		struct ExAttribute_eventGetCurrentValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetCurrentValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetCurrentValue", nullptr, nullptr, sizeof(ExAttribute_eventGetCurrentValue_Parms), Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics
	{
		struct ExAttribute_eventGetMaximumValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetMaximumValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetMaximumValue", nullptr, nullptr, sizeof(ExAttribute_eventGetMaximumValue_Parms), Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetMaximumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics
	{
		struct ExAttribute_eventGetMinimumValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetMinimumValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetMinimumValue", nullptr, nullptr, sizeof(ExAttribute_eventGetMinimumValue_Parms), Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetMinimumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics
	{
		struct ExAttribute_eventGetOwningAbilityComponent_Parms
		{
			UExAbilityComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetOwningAbilityComponent_Parms, ReturnValue), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetOwningAbilityComponent", nullptr, nullptr, sizeof(ExAttribute_eventGetOwningAbilityComponent_Parms), Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics
	{
		struct ExAttribute_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(ExAttribute_eventGetOwningActor_Parms), Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PostAttributeChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PostAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "DisplayName", "Post Attribute Change" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PostAttributeChange_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PreAttributeChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PreAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "DisplayName", "Pre Attribute Change" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PreAttributeChange_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExAttribute_NoRegister()
	{
		return UExAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UExAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChangedValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChangedValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldCurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldCurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMinimumValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldMinimumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaximumValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldMaximumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCurrentValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMinimumValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinimumValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaximumValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaximumValueChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExAttribute_ChangeCurrentValue, "ChangeCurrentValue" }, // 1568572306
		{ &Z_Construct_UFunction_UExAttribute_ChangeMaximumValue, "ChangeMaximumValue" }, // 2895956238
		{ &Z_Construct_UFunction_UExAttribute_ChangeMinimumValue, "ChangeMinimumValue" }, // 1359859355
		{ &Z_Construct_UFunction_UExAttribute_GetCurrentValue, "GetCurrentValue" }, // 1506814631
		{ &Z_Construct_UFunction_UExAttribute_GetMaximumValue, "GetMaximumValue" }, // 3896494398
		{ &Z_Construct_UFunction_UExAttribute_GetMinimumValue, "GetMinimumValue" }, // 2195294301
		{ &Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent, "GetOwningAbilityComponent" }, // 801847502
		{ &Z_Construct_UFunction_UExAttribute_GetOwningActor, "GetOwningActor" }, // 1923207167
		{ &Z_Construct_UFunction_UExAttribute_PostAttributeChange, "PostAttributeChange" }, // 1602128397
		{ &Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP, "PostAttributeChange_BP" }, // 3827973915
		{ &Z_Construct_UFunction_UExAttribute_PreAttributeChange, "PreAttributeChange" }, // 2561160568
		{ &Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP, "PreAttributeChange_BP" }, // 706373676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo = { "OwnerInfo", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OwnerInfo), Z_Construct_UScriptStruct_FAttributeOwnerInfo, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue = { "ChangedValue", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, ChangedValue), Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue = { "OldCurrentValue", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OldCurrentValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, MinimumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue = { "OldMinimumValue", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OldMinimumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, MaximumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue = { "OldMaximumValue", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OldMaximumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged_MetaData[] = {
		{ "Category", "Attribute|Events" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged = { "OnCurrentValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OnCurrentValueChanged), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged_MetaData[] = {
		{ "Category", "Attribute|Events" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged = { "OnMinimumValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OnMinimumValueChanged), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged_MetaData[] = {
		{ "Category", "Attribute|Events" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged = { "OnMaximumValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OnMaximumValueChanged), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExAttribute_Statics::ClassParams = {
		&UExAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExAttribute, 2674766915);
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExAttribute>()
	{
		return UExAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExAttribute(Z_Construct_UClass_UExAttribute, &UExAttribute::StaticClass, TEXT("/Script/ExAbilitySystem"), TEXT("UExAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
