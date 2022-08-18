// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExAttribute() {}
// Cross Module References
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	EXABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeOwnerInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EXABILITYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeValueType;
	static UEnum* EAttributeValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttributeValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttributeValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EAttributeValueType"));
		}
		return Z_Registration_Info_UEnum_EAttributeValueType.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EAttributeValueType>()
	{
		return EAttributeValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::Enumerators[] = {
		{ "EAttributeValueType::AVT_CurrentValue", (int64)EAttributeValueType::AVT_CurrentValue },
		{ "EAttributeValueType::AVT_MinimumValue", (int64)EAttributeValueType::AVT_MinimumValue },
		{ "EAttributeValueType::AVT_MaximumValue", (int64)EAttributeValueType::AVT_MaximumValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		"EAttributeValueType",
		"EAttributeValueType",
		Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType()
	{
		if (!Z_Registration_Info_UEnum_EAttributeValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeValueType.InnerSingleton, Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttributeValueType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeOwnerInfo;
class UScriptStruct* FAttributeOwnerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeOwnerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeOwnerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeOwnerInfo, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("AttributeOwnerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeOwnerInfo.OuterSingleton;
}
template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<FAttributeOwnerInfo>()
{
	return FAttributeOwnerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningAbilityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbilityComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeOwnerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeOwnerInfo, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent = { "OwningAbilityComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeOwnerInfo, OwningAbilityComponent), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeOwnerInfo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_OwningAbilityComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_AttributeOwnerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeOwnerInfo.InnerSingleton, Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeOwnerInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics
	{
		struct _Script_ExAbilitySystem_eventOnValueChanged_Parms
		{
			float NewValue;
			float OldValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ExAbilitySystem_eventOnValueChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ExAbilitySystem_eventOnValueChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem, nullptr, "OnValueChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::_Script_ExAbilitySystem_eventOnValueChanged_Parms), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventChangeCurrentValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "ChangeCurrentValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::ExAttribute_eventChangeCurrentValue_Parms), Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_ChangeCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_ChangeCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics
	{
		struct ExAttribute_eventChangeMaximumValue_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventChangeMaximumValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "ChangeMaximumValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::ExAttribute_eventChangeMaximumValue_Parms), Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_ChangeMaximumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_ChangeMaximumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics
	{
		struct ExAttribute_eventChangeMinimumValue_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventChangeMinimumValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "ChangeMinimumValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::ExAttribute_eventChangeMinimumValue_Parms), Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_ChangeMinimumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_ChangeMinimumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics
	{
		struct ExAttribute_eventGetCurrentValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetCurrentValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetCurrentValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::ExAttribute_eventGetCurrentValue_Parms), Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics
	{
		struct ExAttribute_eventGetMaximumValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetMaximumValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetMaximumValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::ExAttribute_eventGetMaximumValue_Parms), Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetMaximumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_GetMaximumValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics
	{
		struct ExAttribute_eventGetMinimumValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetMinimumValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetMinimumValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::ExAttribute_eventGetMinimumValue_Parms), Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetMinimumValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_GetMinimumValue_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetOwningAbilityComponent_Parms, ReturnValue), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetOwningAbilityComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::ExAttribute_eventGetOwningAbilityComponent_Parms), Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics
	{
		struct ExAttribute_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAttribute_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::ExAttribute_eventGetOwningActor_Parms), Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PostAttributeChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PostAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_PostAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "DisplayName", "Post Attribute Change" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PostAttributeChange_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PreAttributeChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PreAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_PreAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attribute" },
		{ "DisplayName", "Pre Attribute Change" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAttribute, nullptr, "PreAttributeChange_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExAttribute);
	UClass* Z_Construct_UClass_UExAttribute_NoRegister()
	{
		return UExAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UExAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChangedValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangedValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldCurrentValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldMinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldMaximumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentValueChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMinimumValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMinimumValueChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaximumValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaximumValueChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExAttribute_ChangeCurrentValue, "ChangeCurrentValue" }, // 683321179
		{ &Z_Construct_UFunction_UExAttribute_ChangeMaximumValue, "ChangeMaximumValue" }, // 2204309881
		{ &Z_Construct_UFunction_UExAttribute_ChangeMinimumValue, "ChangeMinimumValue" }, // 3733814824
		{ &Z_Construct_UFunction_UExAttribute_GetCurrentValue, "GetCurrentValue" }, // 3507713782
		{ &Z_Construct_UFunction_UExAttribute_GetMaximumValue, "GetMaximumValue" }, // 3082704452
		{ &Z_Construct_UFunction_UExAttribute_GetMinimumValue, "GetMinimumValue" }, // 2398755472
		{ &Z_Construct_UFunction_UExAttribute_GetOwningAbilityComponent, "GetOwningAbilityComponent" }, // 3633065727
		{ &Z_Construct_UFunction_UExAttribute_GetOwningActor, "GetOwningActor" }, // 3461938606
		{ &Z_Construct_UFunction_UExAttribute_PostAttributeChange, "PostAttributeChange" }, // 288109485
		{ &Z_Construct_UFunction_UExAttribute_PostAttributeChange_BP, "PostAttributeChange_BP" }, // 890316605
		{ &Z_Construct_UFunction_UExAttribute_PreAttributeChange, "PreAttributeChange" }, // 2759273493
		{ &Z_Construct_UFunction_UExAttribute_PreAttributeChange_BP, "PreAttributeChange_BP" }, // 1683588742
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag = { "AttributeTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, AttributeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag_MetaData)) }; // 802167388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo = { "OwnerInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OwnerInfo), Z_Construct_UScriptStruct_FAttributeOwnerInfo, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo_MetaData)) }; // 900129160
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue = { "ChangedValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, ChangedValue), Z_Construct_UEnum_ExAbilitySystem_EAttributeValueType, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_MetaData)) }; // 935404292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue = { "OldCurrentValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OldCurrentValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, MinimumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue = { "OldMinimumValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OldMinimumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, MaximumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue = { "OldMaximumValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OldMaximumValue), METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged_MetaData[] = {
		{ "Category", "Attribute|Events" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged = { "OnCurrentValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OnCurrentValueChanged), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged_MetaData)) }; // 4242659004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged_MetaData[] = {
		{ "Category", "Attribute|Events" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged = { "OnMinimumValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OnMinimumValueChanged), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged_MetaData)) }; // 4242659004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged_MetaData[] = {
		{ "Category", "Attribute|Events" },
		{ "ModuleRelativePath", "Public/ExAttribute.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged = { "OnMaximumValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAttribute, OnMaximumValueChanged), Z_Construct_UDelegateFunction_ExAbilitySystem_OnValueChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged_MetaData)) }; // 4242659004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_AttributeTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OwnerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_ChangedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_CurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OldCurrentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_MinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_MaximumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OldMaximumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OnCurrentValueChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMinimumValueChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAttribute_Statics::NewProp_OnMaximumValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExAttribute_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UExAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExAttribute.OuterSingleton, Z_Construct_UClass_UExAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExAttribute.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExAttribute>()
	{
		return UExAttribute::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExAttribute);
	struct Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::EnumInfo[] = {
		{ EAttributeValueType_StaticEnum, TEXT("EAttributeValueType"), &Z_Registration_Info_UEnum_EAttributeValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 935404292U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::ScriptStructInfo[] = {
		{ FAttributeOwnerInfo::StaticStruct, Z_Construct_UScriptStruct_FAttributeOwnerInfo_Statics::NewStructOps, TEXT("AttributeOwnerInfo"), &Z_Registration_Info_UScriptStruct_AttributeOwnerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeOwnerInfo), 900129160U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExAttribute, UExAttribute::StaticClass, TEXT("UExAttribute"), &Z_Registration_Info_UClass_UExAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExAttribute), 3358041538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_998457251(TEXT("/Script/ExAbilitySystem"),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAttribute_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
