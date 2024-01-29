// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_AttributeSetBase() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	IOE_API UClass* Z_Construct_UClass_UIOE_AttributeSetBase();
	IOE_API UClass* Z_Construct_UClass_UIOE_AttributeSetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	DEFINE_FUNCTION(UIOE_AttributeSetBase::execOnRep_MaxMovementSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMovementSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMovementSpeed(Z_Param_Out_OldMaxMovementSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOE_AttributeSetBase::execOnRep_MaxStamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOE_AttributeSetBase::execOnRep_Stamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOE_AttributeSetBase::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOE_AttributeSetBase::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UIOE_AttributeSetBase::StaticRegisterNativesUIOE_AttributeSetBase()
	{
		UClass* Class = UIOE_AttributeSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Health", &UIOE_AttributeSetBase::execOnRep_Health },
			{ "OnRep_MaxHealth", &UIOE_AttributeSetBase::execOnRep_MaxHealth },
			{ "OnRep_MaxMovementSpeed", &UIOE_AttributeSetBase::execOnRep_MaxMovementSpeed },
			{ "OnRep_MaxStamina", &UIOE_AttributeSetBase::execOnRep_MaxStamina },
			{ "OnRep_Stamina", &UIOE_AttributeSetBase::execOnRep_Stamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics
	{
		struct IOE_AttributeSetBase_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AttributeSetBase_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::IOE_AttributeSetBase_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::IOE_AttributeSetBase_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics
	{
		struct IOE_AttributeSetBase_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AttributeSetBase_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AttributeSetBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::IOE_AttributeSetBase_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::IOE_AttributeSetBase_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics
	{
		struct IOE_AttributeSetBase_eventOnRep_MaxMovementSpeed_Parms
		{
			FGameplayAttributeData OldMaxMovementSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::NewProp_OldMaxMovementSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::NewProp_OldMaxMovementSpeed = { "OldMaxMovementSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AttributeSetBase_eventOnRep_MaxMovementSpeed_Parms, OldMaxMovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::NewProp_OldMaxMovementSpeed_MetaData), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::NewProp_OldMaxMovementSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::NewProp_OldMaxMovementSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AttributeSetBase, nullptr, "OnRep_MaxMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::IOE_AttributeSetBase_eventOnRep_MaxMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::IOE_AttributeSetBase_eventOnRep_MaxMovementSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics
	{
		struct IOE_AttributeSetBase_eventOnRep_MaxStamina_Parms
		{
			FGameplayAttributeData OldMaxStamina;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AttributeSetBase_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AttributeSetBase, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::IOE_AttributeSetBase_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::IOE_AttributeSetBase_eventOnRep_MaxStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics
	{
		struct IOE_AttributeSetBase_eventOnRep_Stamina_Parms
		{
			FGameplayAttributeData OldStamina;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AttributeSetBase_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::NewProp_OldStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AttributeSetBase, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::IOE_AttributeSetBase_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::IOE_AttributeSetBase_eventOnRep_Stamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_AttributeSetBase);
	UClass* Z_Construct_UClass_UIOE_AttributeSetBase_NoRegister()
	{
		return UIOE_AttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_AttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_AttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOE_AttributeSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Health, "OnRep_Health" }, // 621343729
		{ &Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2409543241
		{ &Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxMovementSpeed, "OnRep_MaxMovementSpeed" }, // 2729344210
		{ &Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 1612595578
		{ &Z_Construct_UFunction_UIOE_AttributeSetBase_OnRep_Stamina, "OnRep_Stamina" }, // 1641935472
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_AttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_AttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_AttributeSetBase, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Stamina_MetaData), Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Stamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_AttributeSetBase, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxStamina_MetaData), Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxStamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxMovementSpeed_MetaData[] = {
		{ "Category", "MovementSpeed" },
		{ "ModuleRelativePath", "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxMovementSpeed = { "MaxMovementSpeed", "OnRep_MaxMovementSpeed", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_AttributeSetBase, MaxMovementSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxMovementSpeed_MetaData), Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxMovementSpeed_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIOE_AttributeSetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_AttributeSetBase_Statics::NewProp_MaxMovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_AttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_AttributeSetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_AttributeSetBase_Statics::ClassParams = {
		&UIOE_AttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIOE_AttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_AttributeSetBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AttributeSetBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIOE_AttributeSetBase()
	{
		if (!Z_Registration_Info_UClass_UIOE_AttributeSetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_AttributeSetBase.OuterSingleton, Z_Construct_UClass_UIOE_AttributeSetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_AttributeSetBase.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_AttributeSetBase>()
	{
		return UIOE_AttributeSetBase::StaticClass();
	}

	void UIOE_AttributeSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Stamina(TEXT("Stamina"));
		static const FName Name_MaxStamina(TEXT("MaxStamina"));
		static const FName Name_MaxMovementSpeed(TEXT("MaxMovementSpeed"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
			&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
			&& Name_MaxMovementSpeed == ClassReps[(int32)ENetFields_Private::MaxMovementSpeed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UIOE_AttributeSetBase"));
	}
	UIOE_AttributeSetBase::UIOE_AttributeSetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_AttributeSetBase);
	UIOE_AttributeSetBase::~UIOE_AttributeSetBase() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_AttributeSetBase, UIOE_AttributeSetBase::StaticClass, TEXT("UIOE_AttributeSetBase"), &Z_Registration_Info_UClass_UIOE_AttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_AttributeSetBase), 2814988106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_3208997383(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
