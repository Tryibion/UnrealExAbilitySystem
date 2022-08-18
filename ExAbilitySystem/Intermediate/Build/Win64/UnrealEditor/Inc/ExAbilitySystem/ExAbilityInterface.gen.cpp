// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExAbilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExAbilityInterface() {}
// Cross Module References
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityInterface_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IExAbilityInterface::execGetAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExAbilityComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent_Implementation();
		P_NATIVE_END;
	}
	UExAbilityComponent* IExAbilityInterface::GetAbilitySystemComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAbilitySystemComponent instead.");
		ExAbilityInterface_eventGetAbilitySystemComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void UExAbilityInterface::StaticRegisterNativesUExAbilityInterface()
	{
		UClass* Class = UExAbilityInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilitySystemComponent", &IExAbilityInterface::execGetAbilitySystemComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbilityInterface_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability Interface" },
		{ "ModuleRelativePath", "Public/ExAbilityInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbilityInterface, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, sizeof(ExAbilityInterface_eventGetAbilitySystemComponent_Parms), Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExAbilityInterface);
	UClass* Z_Construct_UClass_UExAbilityInterface_NoRegister()
	{
		return UExAbilityInterface::StaticClass();
	}
	struct Z_Construct_UClass_UExAbilityInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExAbilityInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExAbilityInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExAbilityInterface_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 3410409186
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbilityInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbilityInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExAbilityInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExAbilityInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExAbilityInterface_Statics::ClassParams = {
		&UExAbilityInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExAbilityInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbilityInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExAbilityInterface()
	{
		if (!Z_Registration_Info_UClass_UExAbilityInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExAbilityInterface.OuterSingleton, Z_Construct_UClass_UExAbilityInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExAbilityInterface.OuterSingleton;
	}
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExAbilityInterface>()
	{
		return UExAbilityInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExAbilityInterface);
	static FName NAME_UExAbilityInterface_GetAbilitySystemComponent = FName(TEXT("GetAbilitySystemComponent"));
	UExAbilityComponent* IExAbilityInterface::Execute_GetAbilitySystemComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UExAbilityInterface::StaticClass()));
		ExAbilityInterface_eventGetAbilitySystemComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UExAbilityInterface_GetAbilitySystemComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IExAbilityInterface*)(O->GetNativeInterfaceAddress(UExAbilityInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAbilitySystemComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExAbilityInterface, UExAbilityInterface::StaticClass, TEXT("UExAbilityInterface"), &Z_Registration_Info_UClass_UExAbilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExAbilityInterface), 3188297401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_3228481003(TEXT("/Script/ExAbilitySystem"),
		Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestingProject_Plugins_ExAbilitySystem_Source_ExAbilitySystem_Public_ExAbilityInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
