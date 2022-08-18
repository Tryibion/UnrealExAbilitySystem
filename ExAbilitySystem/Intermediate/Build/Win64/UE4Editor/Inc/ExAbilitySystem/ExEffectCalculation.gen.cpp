// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExEffectCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExEffectCalculation() {}
// Cross Module References
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffectCalculation_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffectCalculation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAttribute_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UExEffectCalculation::execCalculation_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Calculation_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExEffectCalculation::execCalculation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Calculation();
		P_NATIVE_END;
	}
	static FName NAME_UExEffectCalculation_Calculation_BP = FName(TEXT("Calculation_BP"));
	float UExEffectCalculation::Calculation_BP()
	{
		ExEffectCalculation_eventCalculation_BP_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UExEffectCalculation_Calculation_BP),&Parms);
		return Parms.ReturnValue;
	}
	void UExEffectCalculation::StaticRegisterNativesUExEffectCalculation()
	{
		UClass* Class = UExEffectCalculation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Calculation", &UExEffectCalculation::execCalculation },
			{ "Calculation_BP", &UExEffectCalculation::execCalculation_BP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics
	{
		struct ExEffectCalculation_eventCalculation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExEffectCalculation_eventCalculation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
		{ "ModuleRelativePath", "Public/ExEffectCalculation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffectCalculation, nullptr, "Calculation", nullptr, nullptr, sizeof(ExEffectCalculation_eventCalculation_Parms), Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffectCalculation_Calculation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExEffectCalculation_Calculation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExEffectCalculation_eventCalculation_BP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
		{ "DisplayName", "Calculation" },
		{ "ModuleRelativePath", "Public/ExEffectCalculation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExEffectCalculation, nullptr, "Calculation_BP", nullptr, nullptr, sizeof(ExEffectCalculation_eventCalculation_BP_Parms), Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExEffectCalculation_Calculation_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExEffectCalculation_Calculation_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExEffectCalculation_NoRegister()
	{
		return UExEffectCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UExEffectCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeToModify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExEffectCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExEffectCalculation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExEffectCalculation_Calculation, "Calculation" }, // 1470997396
		{ &Z_Construct_UFunction_UExEffectCalculation_Calculation_BP, "Calculation_BP" }, // 1933265743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffectCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExEffectCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExEffectCalculation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_AttributeToModify_MetaData[] = {
		{ "Category", "Calculation|Info" },
		{ "ModuleRelativePath", "Public/ExEffectCalculation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_AttributeToModify = { "AttributeToModify", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffectCalculation, AttributeToModify), Z_Construct_UClass_UExAttribute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_AttributeToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_AttributeToModify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_ParentEffect_MetaData[] = {
		{ "Category", "Calculation|Info" },
		{ "ModuleRelativePath", "Public/ExEffectCalculation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_ParentEffect = { "ParentEffect", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExEffectCalculation, ParentEffect), Z_Construct_UClass_UExEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_ParentEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_ParentEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExEffectCalculation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_AttributeToModify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExEffectCalculation_Statics::NewProp_ParentEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExEffectCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExEffectCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExEffectCalculation_Statics::ClassParams = {
		&UExEffectCalculation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExEffectCalculation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExEffectCalculation_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExEffectCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExEffectCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExEffectCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExEffectCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExEffectCalculation, 2127853990);
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExEffectCalculation>()
	{
		return UExEffectCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExEffectCalculation(Z_Construct_UClass_UExEffectCalculation, &UExEffectCalculation::StaticClass, TEXT("/Script/ExAbilitySystem"), TEXT("UExEffectCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExEffectCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
