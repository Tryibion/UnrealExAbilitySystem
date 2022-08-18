// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExEffect() {}
// Cross Module References
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType();
	EXABILITYSYSTEM_API UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType();
	EXABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEffectOwnerInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EXABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEffectAttributeModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffectCalculation_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffect_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	static UEnum* EAttributeValueToChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EAttributeValueToChange"));
		}
		return Singleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EAttributeValueToChange>()
	{
		return EAttributeValueToChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttributeValueToChange(EAttributeValueToChange_StaticEnum, TEXT("/Script/ExAbilitySystem"), TEXT("EAttributeValueToChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Hash() { return 3620772229U; }
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttributeValueToChange"), 0, Get_Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttributeValueToChange::AVC_CurrentValue", (int64)EAttributeValueToChange::AVC_CurrentValue },
				{ "EAttributeValueToChange::AVC_MinimumValue", (int64)EAttributeValueToChange::AVC_MinimumValue },
				{ "EAttributeValueToChange::AVC_MaximumValue", (int64)EAttributeValueToChange::AVC_MaximumValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
				nullptr,
				"EAttributeValueToChange",
				"EAttributeValueToChange",
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
	static UEnum* EEffectModifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EEffectModifyType"));
		}
		return Singleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EEffectModifyType>()
	{
		return EEffectModifyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectModifyType(EEffectModifyType_StaticEnum, TEXT("/Script/ExAbilitySystem"), TEXT("EEffectModifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Hash() { return 2631587452U; }
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectModifyType"), 0, Get_Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffectModifyType::EMT_Add", (int64)EEffectModifyType::EMT_Add },
				{ "EEffectModifyType::EMT_Multiply", (int64)EEffectModifyType::EMT_Multiply },
				{ "EEffectModifyType::EMT_Divide", (int64)EEffectModifyType::EMT_Divide },
				{ "EEffectModifyType::EMT_CustomCalculation", (int64)EEffectModifyType::EMT_CustomCalculation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
				nullptr,
				"EEffectModifyType",
				"EEffectModifyType",
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
	static UEnum* EEffectActivationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EEffectActivationType"));
		}
		return Singleton;
	}
	template<> EXABILITYSYSTEM_API UEnum* StaticEnum<EEffectActivationType>()
	{
		return EEffectActivationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEffectActivationType(EEffectActivationType_StaticEnum, TEXT("/Script/ExAbilitySystem"), TEXT("EEffectActivationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Hash() { return 552335828U; }
	UEnum* Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEffectActivationType"), 0, Get_Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEffectActivationType::EAT_Instant", (int64)EEffectActivationType::EAT_Instant },
				{ "EEffectActivationType::EAT_HasDuration", (int64)EEffectActivationType::EAT_HasDuration },
				{ "EEffectActivationType::EAT_Infinite", (int64)EEffectActivationType::EAT_Infinite },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ExAbilitySystem,
				nullptr,
				"EEffectActivationType",
				"EEffectActivationType",
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
class UScriptStruct* FEffectOwnerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXABILITYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FEffectOwnerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectOwnerInfo, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EffectOwnerInfo"), sizeof(FEffectOwnerInfo), Get_Z_Construct_UScriptStruct_FEffectOwnerInfo_Hash());
	}
	return Singleton;
}
template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<FEffectOwnerInfo>()
{
	return FEffectOwnerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffectOwnerInfo(FEffectOwnerInfo::StaticStruct, TEXT("/Script/ExAbilitySystem"), TEXT("EffectOwnerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ExAbilitySystem_StaticRegisterNativesFEffectOwnerInfo
{
	FScriptStruct_ExAbilitySystem_StaticRegisterNativesFEffectOwnerInfo()
	{
		UScriptStruct::DeferCppStructOps<FEffectOwnerInfo>(FName(TEXT("EffectOwnerInfo")));
	}
} ScriptStruct_ExAbilitySystem_StaticRegisterNativesFEffectOwnerInfo;
	struct Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectOwnerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectOwnerInfo, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent = { "OwningAbilityComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectOwnerInfo, OwningAbilityComponent), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectOwnerInfo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_OwningAbilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::NewProp_World,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffectOwnerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffectOwnerInfo"), sizeof(FEffectOwnerInfo), Get_Z_Construct_UScriptStruct_FEffectOwnerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffectOwnerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffectOwnerInfo_Hash() { return 3480008129U; }
class UScriptStruct* FEffectAttributeModifier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXABILITYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FEffectAttributeModifier_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectAttributeModifier, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("EffectAttributeModifier"), sizeof(FEffectAttributeModifier), Get_Z_Construct_UScriptStruct_FEffectAttributeModifier_Hash());
	}
	return Singleton;
}
template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<FEffectAttributeModifier>()
{
	return FEffectAttributeModifier::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffectAttributeModifier(FEffectAttributeModifier::StaticStruct, TEXT("/Script/ExAbilitySystem"), TEXT("EffectAttributeModifier"), false, nullptr, nullptr);
static struct FScriptStruct_ExAbilitySystem_StaticRegisterNativesFEffectAttributeModifier
{
	FScriptStruct_ExAbilitySystem_StaticRegisterNativesFEffectAttributeModifier()
	{
		UScriptStruct::DeferCppStructOps<FEffectAttributeModifier>(FName(TEXT("EffectAttributeModifier")));
	}
} ScriptStruct_ExAbilitySystem_StaticRegisterNativesFEffectAttributeModifier;
	struct Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttributeValueToChange_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeValueToChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttributeValueToChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectCalculation_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EffectCalculation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectAttributeModifier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, Attribute), Z_Construct_UClass_UExAttribute_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType = { "ModifyType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, ModifyType), Z_Construct_UEnum_ExAbilitySystem_EEffectModifyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange = { "AttributeValueToChange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, AttributeValueToChange), Z_Construct_UEnum_ExAbilitySystem_EAttributeValueToChange, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "EditCondition", "ModifyType != EEffectModifyType::EMT_CustomCalculation" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue = { "ModifyValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, ModifyValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "EditCondition", "ModifyType == EEffectModifyType::EMT_CustomCalculation" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "Custom calculation class to use if Modify Type is set to custom calculation." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation = { "EffectCalculation", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectAttributeModifier, EffectCalculation), Z_Construct_UClass_UExEffectCalculation_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_AttributeValueToChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_ModifyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::NewProp_EffectCalculation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffectAttributeModifier_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffectAttributeModifier"), sizeof(FEffectAttributeModifier), Get_Z_Construct_UScriptStruct_FEffectAttributeModifier_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffectAttributeModifier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffectAttributeModifier_Hash() { return 311394934U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_EndEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_EndEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "EndEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_EndEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_EndEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_EndEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExEffect_EndEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "OnEffectRunning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_OnEffectRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExEffect_OnEffectRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExEffect_RunEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_RunEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_RunEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "RunEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_RunEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_RunEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_RunEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExEffect_RunEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExEffect_StartEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffect_StartEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffect_StartEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffect, nullptr, "StartEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffect_StartEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffect_StartEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffect_StartEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExEffect_StartEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExEffect_NoRegister()
	{
		return UExEffect::StaticClass();
	}
	struct Z_Construct_UClass_UExEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationFiringRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivationFiringRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifyAttribute_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyAttribute_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifyAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectTimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExEffect_EndEffect, "EndEffect" }, // 1359043908
		{ &Z_Construct_UFunction_UExEffect_OnEffectRunning, "OnEffectRunning" }, // 2171784210
		{ &Z_Construct_UFunction_UExEffect_RunEffect, "RunEffect" }, // 1670071675
		{ &Z_Construct_UFunction_UExEffect_StartEffect, "StartEffect" }, // 823768170
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter = { "DurationCounter", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, DurationCounter), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime = { "ActiveTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActiveTime), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo = { "OwnerInfo", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, OwnerInfo), Z_Construct_UScriptStruct_FEffectOwnerInfo, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActivationType), Z_Construct_UEnum_ExAbilitySystem_EEffectActivationType, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Effect" },
		{ "ClampMin", "0" },
		{ "EditCondition", "ActivationType == EEffectActivationType::EAT_HasDuration" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "The duration of the effect in seconds. Only valid for Has Duration type" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate_MetaData[] = {
		{ "Category", "Effect" },
		{ "ClampMin", "0" },
		{ "EditCondition", "ActivationType == EEffectActivationType::EAT_HasDuration || ActivationType == EEffectActivationType::EAT_Infinite" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "How often the timer will fire and activate the effect. Only valid for effects that have a duration." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate = { "ActivationFiringRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActivationFiringRate), METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "Category", "Effect|Tags" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "These tags are granted to the owning ability component upon activation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "Effect|Tags" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
		{ "ToolTip", "These tags on the ability component will prevent this effect from activating." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_Inner = { "ModifyAttribute", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffectAttributeModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_MetaData[] = {
		{ "Category", "Effect|Attribute Modification" },
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute = { "ModifyAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, ModifyAttribute), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle = { "EffectTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffect, EffectTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_DurationCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActiveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_OwnerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationFiringRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ActivationBlockedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_ModifyAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffect_Statics::NewProp_EffectTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExEffect_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExEffect, 3553626810);
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExEffect>()
	{
		return UExEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExEffect(Z_Construct_UClass_UExEffect, &UExEffect::StaticClass, TEXT("/Script/ExAbilitySystem"), TEXT("UExEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
