// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExEffect() {}
// Cross Module References
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType();
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange();
	EXABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEffectAttributeModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffectCalculation_NoRegister();
	EXABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEffectOwnerInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffect_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectActivationType;
	static UEnum* EEffectActivationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectActivationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectActivationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EEffectActivationType"));
		}
		return Z_Registration_Info_UEnum_EEffectActivationType.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EEffectActivationType>()
	{
		return EEffectActivationType_StaticEnum();
	}
	struct Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::Enumerators[] = {
		{ "EEffectActivationType::EAT_Instant", (int64)EEffectActivationType::EAT_Instant },
		{ "EEffectActivationType::EAT_HasDuration", (int64)EEffectActivationType::EAT_HasDuration },
		{ "EEffectActivationType::EAT_Infinite", (int64)EEffectActivationType::EAT_Infinite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAT_HasDuration.DisplayName", "Has Duration" },
		{ "EAT_HasDuration.Name", "EEffectActivationType::EAT_HasDuration" },
		{ "EAT_Infinite.DisplayName", "Infinite" },
		{ "EAT_Infinite.Name", "EEffectActivationType::EAT_Infinite" },
		{ "EAT_Instant.DisplayName", "Instant" },
		{ "EAT_Instant.Name", "EEffectActivationType::EAT_Instant" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		"EEffectActivationType",
		"EEffectActivationType",
		Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType()
	{
		if (!Z_Registration_Info_UEnum_EEffectActivationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectActivationType.InnerSingleton, Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectActivationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectModifyType;
	static UEnum* EEffectModifyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectModifyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectModifyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EEffectModifyType"));
		}
		return Z_Registration_Info_UEnum_EEffectModifyType.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EEffectModifyType>()
	{
		return EEffectModifyType_StaticEnum();
	}
	struct Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::Enumerators[] = {
		{ "EEffectModifyType::EMT_Add", (int64)EEffectModifyType::EMT_Add },
		{ "EEffectModifyType::EMT_Multiply", (int64)EEffectModifyType::EMT_Multiply },
		{ "EEffectModifyType::EMT_Divide", (int64)EEffectModifyType::EMT_Divide },
		{ "EEffectModifyType::EMT_CustomCalculation", (int64)EEffectModifyType::EMT_CustomCalculation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMT_Add.DisplayName", "Add" },
		{ "EMT_Add.Name", "EEffectModifyType::EMT_Add" },
		{ "EMT_CustomCalculation.DisplayName", "Custom Calculation" },
		{ "EMT_CustomCalculation.Name", "EEffectModifyType::EMT_CustomCalculation" },
		{ "EMT_Divide.DisplayName", "Divide" },
		{ "EMT_Divide.Name", "EEffectModifyType::EMT_Divide" },
		{ "EMT_Multiply.DisplayName", "Multiply" },
		{ "EMT_Multiply.Name", "EEffectModifyType::EMT_Multiply" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		"EEffectModifyType",
		"EEffectModifyType",
		Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType()
	{
		if (!Z_Registration_Info_UEnum_EEffectModifyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectModifyType.InnerSingleton, Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectModifyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeValueToChange;
	static UEnum* EAttributeValueToChange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttributeValueToChange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttributeValueToChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EAttributeValueToChange"));
		}
		return Z_Registration_Info_UEnum_EAttributeValueToChange.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EAttributeValueToChange>()
	{
		return EAttributeValueToChange_StaticEnum();
	}
	struct Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::Enumerators[] = {
		{ "EAttributeValueToChange::AVC_CurrentValue", (int64)EAttributeValueToChange::AVC_CurrentValue },
		{ "EAttributeValueToChange::AVC_MinimumValue", (int64)EAttributeValueToChange::AVC_MinimumValue },
		{ "EAttributeValueToChange::AVC_MaximumValue", (int64)EAttributeValueToChange::AVC_MaximumValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::Enum_MetaDataParams[] = {
		{ "AVC_CurrentValue.DisplayName", "Current Value" },
		{ "AVC_CurrentValue.Name", "EAttributeValueToChange::AVC_CurrentValue" },
		{ "AVC_MaximumValue.DisplayName", "Maximum Value" },
		{ "AVC_MaximumValue.Name", "EAttributeValueToChange::AVC_MaximumValue" },
		{ "AVC_MinimumValue.DisplayName", "Minimum Value" },
		{ "AVC_MinimumValue.Name", "EAttributeValueToChange::AVC_MinimumValue" },
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		"EAttributeValueToChange",
		"EAttributeValueToChange",
		Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange()
	{
		if (!Z_Registration_Info_UEnum_EAttributeValueToChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeValueToChange.InnerSingleton, Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttributeValueToChange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectAttributeModifier;
class UScriptStruct* FEffectAttributeModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectAttributeModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectAttributeModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectAttributeModifier, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EffectAttributeModifier"));
	}
	return Z_Registration_Info_UScriptStruct_EffectAttributeModifier.OuterSingleton;
}
template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<FEffectAttributeModifier>()
{
	return FEffectAttributeModifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModifyType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValueToChange_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValueToChange_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValueToChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModifyValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectCalculation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectCalculation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectAttributeModifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, Attribute), Z_Construct_UClass_UExAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType = { "ModifyType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, ModifyType), Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_MetaData)) }; // 506826926
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange = { "AttributeValueToChange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, AttributeValueToChange), Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_MetaData)) }; // 1122794436
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "EditCondition", "ModifyType != EEffectModifyType::EMT_CustomCalculation" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue = { "ModifyValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, ModifyValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "EditCondition", "ModifyType == EEffectModifyType::EMT_CustomCalculation" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "Custom calculation class to use if Modify Type is set to custom calculation." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation = { "EffectCalculation", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, EffectCalculation), Z_Construct_UClass_UExEffectCalculation_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		&NewStructOps,
		"EffectAttributeModifier",
		sizeof(FEffectAttributeModifier),
		alignof(FEffectAttributeModifier),
		Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectAttributeModifier()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectAttributeModifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectAttributeModifier.InnerSingleton, Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectAttributeModifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectOwnerInfo;
class UScriptStruct* FEffectOwnerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectOwnerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectOwnerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectOwnerInfo, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EffectOwnerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_EffectOwnerInfo.OuterSingleton;
}
template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<FEffectOwnerInfo>()
{
	return FEffectOwnerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectOwnerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectOwnerInfo, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent = { "OwningAbilityComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectOwnerInfo, OwningAbilityComponent), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectOwnerInfo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		&NewStructOps,
		"EffectOwnerInfo",
		sizeof(FEffectOwnerInfo),
		alignof(FEffectOwnerInfo),
		Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectOwnerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectOwnerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectOwnerInfo.InnerSingleton, Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectOwnerInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UExEffect::execOnEffectRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEffectRunning_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExEffect::execEndEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExEffect::execRunEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExEffect::execStartEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEffect();
		P_NATIVE_END;
	}
	static FName NAME_UExEffect_OnEffectRunning = FName(TEXT("OnEffectRunning"));
	void UExEffect::OnEffectRunning()
	{
		ProcessEvent(FindFunctionChecked(NAME_UExEffect_OnEffectRunning),NULL);
	}
	void UExEffect::StaticRegisterNativesUExEffect()
	{
		UClass* Class = UExEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndEffect", &UExEffect::execEndEffect },
			{ "OnEffectRunning", &UExEffect::execOnEffectRunning },
			{ "RunEffect", &UExEffect::execRunEffect },
			{ "StartEffect", &UExEffect::execStartEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExEffect_EndEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_EndEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_EndEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "EndEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_EndEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_EndEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_EndEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExEffect_EndEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "OnEffectRunning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_OnEffectRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExEffect_RunEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_RunEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_RunEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "RunEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_RunEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_RunEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_RunEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExEffect_RunEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExEffect_StartEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_StartEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_StartEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "StartEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_StartEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_StartEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_StartEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExEffect_StartEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExEffect);
	UClass* Z_Construct_UClass_UExEffect_NoRegister()
	{
		return UExEffect::StaticClass();
	}
	struct Z_Construct_UClass_UExEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationCounter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationFiringRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationFiringRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyAttribute_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifyAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExEffect_EndEffect, "EndEffect" }, // 1397193349
		{ &Z_Construct_UFunction_UExEffect_OnEffectRunning, "OnEffectRunning" }, // 2083914943
		{ &Z_Construct_UFunction_UExEffect_RunEffect, "RunEffect" }, // 1800261827
		{ &Z_Construct_UFunction_UExEffect_StartEffect, "StartEffect" }, // 189041120
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter = { "DurationCounter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, DurationCounter), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime = { "ActiveTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActiveTime), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo = { "OwnerInfo", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, OwnerInfo), Z_Construct_UScriptStruct_FEffectOwnerInfo, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo_MetaData)) }; // 109349951
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActivationType), Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_MetaData)) }; // 533804979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Effect" },
		{ "ClampMin", "0" },
		{ "EditCondition", "ActivationType == EEffectActivationType::EAT_HasDuration" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "The duration of the effect in seconds. Only valid for Has Duration type" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate_MetaData[] = {
		{ "Category", "Effect" },
		{ "ClampMin", "0" },
		{ "EditCondition", "ActivationType == EEffectActivationType::EAT_HasDuration || ActivationType == EEffectActivationType::EAT_Infinite" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "How often the timer will fire and activate the effect. Only valid for effects that have a duration." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate = { "ActivationFiringRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActivationFiringRate), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "Category", "Effect|Tags" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "These tags are granted to the owning ability component upon activation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags_MetaData)) }; // 506667518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "Effect|Tags" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "These tags on the ability component will prevent this effect from activating." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags_MetaData)) }; // 506667518
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_Inner = { "ModifyAttribute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffectAttributeModifier, METADATA_PARAMS(nullptr, 0) }; // 2105851001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute = { "ModifyAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ModifyAttribute), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_MetaData)) }; // 2105851001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle = { "EffectTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, EffectTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle_MetaData)) }; // 589591453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExEffect_Statics::ClassParams = {
		&UExEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExEffect()
	{
		if (!Z_Registration_Info_UClass_UExEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExEffect.OuterSingleton, Z_Construct_UClass_UExEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExEffect.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExEffect>()
	{
		return UExEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExEffect);
	struct Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::EnumInfo[] = {
		{ EEffectActivationType_StaticEnum, TEXT("EEffectActivationType"), &Z_Registration_Info_UEnum_EEffectActivationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 533804979U) },
		{ EEffectModifyType_StaticEnum, TEXT("EEffectModifyType"), &Z_Registration_Info_UEnum_EEffectModifyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 506826926U) },
		{ EAttributeValueToChange_StaticEnum, TEXT("EAttributeValueToChange"), &Z_Registration_Info_UEnum_EAttributeValueToChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1122794436U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::ScriptStructInfo[] = {
		{ FEffectAttributeModifier::StaticStruct, Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewStructOps, TEXT("EffectAttributeModifier"), &Z_Registration_Info_UScriptStruct_EffectAttributeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectAttributeModifier), 2105851001U) },
		{ FEffectOwnerInfo::StaticStruct, Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewStructOps, TEXT("EffectOwnerInfo"), &Z_Registration_Info_UScriptStruct_EffectOwnerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectOwnerInfo), 109349951U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExEffect, UExEffect::StaticClass, TEXT("UExEffect"), &Z_Registration_Info_UClass_UExEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExEffect), 1588182895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_3179391741(TEXT("/Script/ExAbilitySystem"),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExEffect_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
