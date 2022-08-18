// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExAbilitySystem/Public/ExAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExAbility() {}
// Cross Module References
	EXABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityOwnerInfo();
	UPackage* Z_Construct_UPackage__Script_ExAbilitySystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbilityComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbility_NoRegister();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExAbility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EXABILITYSYSTEM_API UClass* Z_Construct_UClass_UExEffect_NoRegister();
// End Cross Module References
class UScriptStruct* FAbilityOwnerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXABILITYSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAbilityOwnerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityOwnerInfo, Z_Construct_UPackage__Script_ExAbilitySystem(), TEXT("AbilityOwnerInfo"), sizeof(FAbilityOwnerInfo), Get_Z_Construct_UScriptStruct_FAbilityOwnerInfo_Hash());
	}
	return Singleton;
}
template<> EXABILITYSYSTEM_API UScriptStruct* StaticStruct<FAbilityOwnerInfo>()
{
	return FAbilityOwnerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAbilityOwnerInfo(FAbilityOwnerInfo::StaticStruct, TEXT("/Script/ExAbilitySystem"), TEXT("AbilityOwnerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ExAbilitySystem_StaticRegisterNativesFAbilityOwnerInfo
{
	FScriptStruct_ExAbilitySystem_StaticRegisterNativesFAbilityOwnerInfo()
	{
		UScriptStruct::DeferCppStructOps<FAbilityOwnerInfo>(FName(TEXT("AbilityOwnerInfo")));
	}
} ScriptStruct_ExAbilitySystem_StaticRegisterNativesFAbilityOwnerInfo;
	struct Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityOwnerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityOwnerInfo, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData[] = {
		{ "Category", "OwnerInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningAbilityComponent = { "OwningAbilityComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityOwnerInfo, OwningAbilityComponent), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningAbilityComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAbilityOwnerInfo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_OwningAbilityComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::NewProp_World,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
		nullptr,
		&NewStructOps,
		"AbilityOwnerInfo",
		sizeof(FAbilityOwnerInfo),
		alignof(FAbilityOwnerInfo),
		Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityOwnerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAbilityOwnerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ExAbilitySystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AbilityOwnerInfo"), sizeof(FAbilityOwnerInfo), Get_Z_Construct_UScriptStruct_FAbilityOwnerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAbilityOwnerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAbilityOwnerInfo_Hash() { return 1855169567U; }
	DEFINE_FUNCTION(UExAbility::execWaitForTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WaitForTag(Z_Param_Tag,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execGetOwningAbilityComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExAbilityComponent**)Z_Param__Result=P_THIS->GetOwningAbilityComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execCommitAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CommitAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execCancelAbility_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAbility_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execCancelAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execEndAbility_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAbility_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execEndAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execActivateAbility_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAbility_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execActivateAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execCanActivateAbility_BP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanActivateAbility_BP_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExAbility::execCanActivateAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanActivateAbility();
		P_NATIVE_END;
	}
	static FName NAME_UExAbility_ActivateAbility_BP = FName(TEXT("ActivateAbility_BP"));
	void UExAbility::ActivateAbility_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UExAbility_ActivateAbility_BP),NULL);
	}
	static FName NAME_UExAbility_CanActivateAbility_BP = FName(TEXT("CanActivateAbility_BP"));
	bool UExAbility::CanActivateAbility_BP()
	{
		ExAbility_eventCanActivateAbility_BP_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UExAbility_CanActivateAbility_BP),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UExAbility_CancelAbility_BP = FName(TEXT("CancelAbility_BP"));
	void UExAbility::CancelAbility_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UExAbility_CancelAbility_BP),NULL);
	}
	static FName NAME_UExAbility_EndAbility_BP = FName(TEXT("EndAbility_BP"));
	void UExAbility::EndAbility_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UExAbility_EndAbility_BP),NULL);
	}
	void UExAbility::StaticRegisterNativesUExAbility()
	{
		UClass* Class = UExAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAbility", &UExAbility::execActivateAbility },
			{ "ActivateAbility_BP", &UExAbility::execActivateAbility_BP },
			{ "CanActivateAbility", &UExAbility::execCanActivateAbility },
			{ "CanActivateAbility_BP", &UExAbility::execCanActivateAbility_BP },
			{ "CancelAbility", &UExAbility::execCancelAbility },
			{ "CancelAbility_BP", &UExAbility::execCancelAbility_BP },
			{ "CommitAbility", &UExAbility::execCommitAbility },
			{ "EndAbility", &UExAbility::execEndAbility },
			{ "EndAbility_BP", &UExAbility::execEndAbility_BP },
			{ "GetOwningAbilityComponent", &UExAbility::execGetOwningAbilityComponent },
			{ "GetOwningActor", &UExAbility::execGetOwningActor },
			{ "WaitForTag", &UExAbility::execWaitForTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExAbility_ActivateAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_ActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_ActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "ActivateAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_ActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_ActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_ActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_ActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_ActivateAbility_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_ActivateAbility_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Activate Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_ActivateAbility_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "ActivateAbility_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_ActivateAbility_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_ActivateAbility_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_ActivateAbility_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_ActivateAbility_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics
	{
		struct ExAbility_eventCanActivateAbility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbility_eventCanActivateAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbility_eventCanActivateAbility_Parms), &Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "CanActivateAbility", nullptr, nullptr, sizeof(ExAbility_eventCanActivateAbility_Parms), Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_CanActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_CanActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbility_eventCanActivateAbility_BP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbility_eventCanActivateAbility_BP_Parms), &Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Can Activate Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "CanActivateAbility_BP", nullptr, nullptr, sizeof(ExAbility_eventCanActivateAbility_BP_Parms), Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_CanActivateAbility_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_CanActivateAbility_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_CancelAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_CancelAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_CancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "CancelAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_CancelAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CancelAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_CancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_CancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_CancelAbility_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_CancelAbility_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Cancel Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_CancelAbility_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "CancelAbility_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_CancelAbility_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CancelAbility_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_CancelAbility_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_CancelAbility_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_CommitAbility_Statics
	{
		struct ExAbility_eventCommitAbility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExAbility_CommitAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExAbility_eventCommitAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExAbility_CommitAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExAbility_eventCommitAbility_Parms), &Z_Construct_UFunction_UExAbility_CommitAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbility_CommitAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbility_CommitAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_CommitAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "This commits the cooldown and the cost of the ability." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_CommitAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "CommitAbility", nullptr, nullptr, sizeof(ExAbility_eventCommitAbility_Parms), Z_Construct_UFunction_UExAbility_CommitAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CommitAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_CommitAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_CommitAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_CommitAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_CommitAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_EndAbility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_EndAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_EndAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "EndAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_EndAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_EndAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_EndAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_EndAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_EndAbility_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_EndAbility_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "End Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_EndAbility_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "EndAbility_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_EndAbility_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_EndAbility_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_EndAbility_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_EndAbility_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics
	{
		struct ExAbility_eventGetOwningAbilityComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbility_eventGetOwningAbilityComponent_Parms, ReturnValue), Z_Construct_UClass_UExAbilityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "GetOwningAbilityComponent", nullptr, nullptr, sizeof(ExAbility_eventGetOwningAbilityComponent_Parms), Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_GetOwningActor_Statics
	{
		struct ExAbility_eventGetOwningActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbility_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(ExAbility_eventGetOwningActor_Parms), Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExAbility_WaitForTag_Statics
	{
		struct ExAbility_eventWaitForTag_Parms
		{
			FGameplayTag Tag;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExAbility_WaitForTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbility_eventWaitForTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExAbility_WaitForTag_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExAbility_eventWaitForTag_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExAbility_WaitForTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbility_WaitForTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExAbility_WaitForTag_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExAbility_WaitForTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExAbility_WaitForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExAbility, nullptr, "WaitForTag", nullptr, nullptr, sizeof(ExAbility_eventWaitForTag_Parms), Z_Construct_UFunction_UExAbility_WaitForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_WaitForTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExAbility_WaitForTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExAbility_WaitForTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExAbility_WaitForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExAbility_WaitForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExAbility_NoRegister()
	{
		return UExAbility::StaticClass();
	}
	struct Z_Construct_UClass_UExAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCommit_MetaData[];
#endif
		static void NewProp_AutoCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockAbilityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockAbilityTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelAbilityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CancelAbilityTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LatentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ExAbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExAbility_ActivateAbility, "ActivateAbility" }, // 2364224352
		{ &Z_Construct_UFunction_UExAbility_ActivateAbility_BP, "ActivateAbility_BP" }, // 658331542
		{ &Z_Construct_UFunction_UExAbility_CanActivateAbility, "CanActivateAbility" }, // 1313349301
		{ &Z_Construct_UFunction_UExAbility_CanActivateAbility_BP, "CanActivateAbility_BP" }, // 696260964
		{ &Z_Construct_UFunction_UExAbility_CancelAbility, "CancelAbility" }, // 2631428404
		{ &Z_Construct_UFunction_UExAbility_CancelAbility_BP, "CancelAbility_BP" }, // 730384673
		{ &Z_Construct_UFunction_UExAbility_CommitAbility, "CommitAbility" }, // 3584538619
		{ &Z_Construct_UFunction_UExAbility_EndAbility, "EndAbility" }, // 1283701765
		{ &Z_Construct_UFunction_UExAbility_EndAbility_BP, "EndAbility_BP" }, // 3150424017
		{ &Z_Construct_UFunction_UExAbility_GetOwningAbilityComponent, "GetOwningAbilityComponent" }, // 1535976541
		{ &Z_Construct_UFunction_UExAbility_GetOwningActor, "GetOwningActor" }, // 4051274234
		{ &Z_Construct_UFunction_UExAbility_WaitForTag, "WaitForTag" }, // 3800021525
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_OwnerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_OwnerInfo = { "OwnerInfo", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, OwnerInfo), Z_Construct_UScriptStruct_FAbilityOwnerInfo, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_OwnerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_OwnerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_AutoCommit_MetaData[] = {
		{ "Category", "Ability|General" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "If true, the abilty will commit the cost and the cooldown automatically. If false, the commit will need to be called manually." },
	};
#endif
	void Z_Construct_UClass_UExAbility_Statics::NewProp_AutoCommit_SetBit(void* Obj)
	{
		((UExAbility*)Obj)->AutoCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_AutoCommit = { "AutoCommit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExAbility), &Z_Construct_UClass_UExAbility_Statics::NewProp_AutoCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_AutoCommit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_AutoCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityTags_MetaData[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These tags are used to identify this ability." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These tags are granted to the owning ability component upon activation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These tags are required for the ability component to own before activation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationRequiredTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These tags on the ability component will prevent this ability from activating." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationBlockedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_BlockAbilityTags_MetaData[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These tags will block other abilities from activating if they contain these tags." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_BlockAbilityTags = { "BlockAbilityTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, BlockAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_BlockAbilityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_BlockAbilityTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_CancelAbilityTags_MetaData[] = {
		{ "Category", "Ability|Tags" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These tags will cancel active abilities if they contain these tags." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_CancelAbilityTags = { "CancelAbilityTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, CancelAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_CancelAbilityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_CancelAbilityTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCost_MetaData[] = {
		{ "Category", "Ability|Cost" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These cost of the ability." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCost = { "AbilityCost", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, AbilityCost), Z_Construct_UClass_UExEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCooldown_MetaData[] = {
		{ "Category", "Ability|Cooldown" },
		{ "ModuleRelativePath", "Public/ExAbility.h" },
		{ "ToolTip", "These cooldown of the ability." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCooldown = { "AbilityCooldown", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, AbilityCooldown), Z_Construct_UClass_UExEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExAbility_Statics::NewProp_LatentID_MetaData[] = {
		{ "ModuleRelativePath", "Public/ExAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExAbility_Statics::NewProp_LatentID = { "LatentID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExAbility, LatentID), METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::NewProp_LatentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::NewProp_LatentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_OwnerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_AutoCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationRequiredTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_ActivationBlockedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_BlockAbilityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_CancelAbilityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_AbilityCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExAbility_Statics::NewProp_LatentID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExAbility_Statics::ClassParams = {
		&UExAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExAbility, 2045649583);
	template<> EXABILITYSYSTEM_API UClass* StaticClass<UExAbility>()
	{
		return UExAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExAbility(Z_Construct_UClass_UExAbility, &UExAbility::StaticClass, TEXT("/Script/ExAbilitySystem"), TEXT("UExAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
