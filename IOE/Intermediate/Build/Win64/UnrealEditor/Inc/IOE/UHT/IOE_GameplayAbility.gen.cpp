// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/IOE_GameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_GameplayAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	IOE_API UClass* Z_Construct_UClass_AIOECharacter_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UIOE_GameplayAbility();
	IOE_API UClass* Z_Construct_UClass_UIOE_GameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	DEFINE_FUNCTION(UIOE_GameplayAbility::execGetIOECharacterFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AIOECharacter**)Z_Param__Result=P_THIS->GetIOECharacterFromActorInfo();
		P_NATIVE_END;
	}
	void UIOE_GameplayAbility::StaticRegisterNativesUIOE_GameplayAbility()
	{
		UClass* Class = UIOE_GameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIOECharacterFromActorInfo", &UIOE_GameplayAbility::execGetIOECharacterFromActorInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics
	{
		struct IOE_GameplayAbility_eventGetIOECharacterFromActorInfo_Parms
		{
			AIOECharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_GameplayAbility_eventGetIOECharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AIOECharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/IOE_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_GameplayAbility, nullptr, "GetIOECharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::IOE_GameplayAbility_eventGetIOECharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::IOE_GameplayAbility_eventGetIOECharacterFromActorInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_GameplayAbility);
	UClass* Z_Construct_UClass_UIOE_GameplayAbility_NoRegister()
	{
		return UIOE_GameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_GameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToRemoveOnEnd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToRemoveOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToRemoveOnEnd;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToJustApplyOnStart_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToJustApplyOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToJustApplyOnStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_GameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameplayAbility_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOE_GameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOE_GameplayAbility_GetIOECharacterFromActorInfo, "GetIOECharacterFromActorInfo" }, // 523080793
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameplayAbility_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_GameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/IOE_GameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/IOE_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/IOE_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_GameplayAbility, OngoingEffectsToRemoveOnEnd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData), Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/IOE_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_GameplayAbility, OngoingEffectsToJustApplyOnStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData), Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIOE_GameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_GameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_GameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_GameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_GameplayAbility_Statics::ClassParams = {
		&UIOE_GameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIOE_GameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_GameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIOE_GameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UIOE_GameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_GameplayAbility.OuterSingleton, Z_Construct_UClass_UIOE_GameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_GameplayAbility.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_GameplayAbility>()
	{
		return UIOE_GameplayAbility::StaticClass();
	}
	UIOE_GameplayAbility::UIOE_GameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_GameplayAbility);
	UIOE_GameplayAbility::~UIOE_GameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_GameplayAbility, UIOE_GameplayAbility::StaticClass, TEXT("UIOE_GameplayAbility"), &Z_Registration_Info_UClass_UIOE_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_GameplayAbility), 1048344907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_1498729925(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
