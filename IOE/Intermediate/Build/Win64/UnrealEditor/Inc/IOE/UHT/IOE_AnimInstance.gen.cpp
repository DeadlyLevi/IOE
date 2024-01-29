// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimInstances/IOE_AnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_AnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UIOE_AnimInstance();
	IOE_API UClass* Z_Construct_UClass_UIOE_AnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	DEFINE_FUNCTION(UIOE_AnimInstance::execGetCrouchIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceBase**)Z_Param__Result=P_THIS->GetCrouchIdleAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOE_AnimInstance::execGetCrouchLocomotionBlendSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetCrouchLocomotionBlendSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOE_AnimInstance::execGetIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceBase**)Z_Param__Result=P_THIS->GetIdleAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOE_AnimInstance::execGetLocomotionBlendSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetLocomotionBlendSpace();
		P_NATIVE_END;
	}
	void UIOE_AnimInstance::StaticRegisterNativesUIOE_AnimInstance()
	{
		UClass* Class = UIOE_AnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCrouchIdleAnimation", &UIOE_AnimInstance::execGetCrouchIdleAnimation },
			{ "GetCrouchLocomotionBlendSpace", &UIOE_AnimInstance::execGetCrouchLocomotionBlendSpace },
			{ "GetIdleAnimation", &UIOE_AnimInstance::execGetIdleAnimation },
			{ "GetLocomotionBlendSpace", &UIOE_AnimInstance::execGetLocomotionBlendSpace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics
	{
		struct IOE_AnimInstance_eventGetCrouchIdleAnimation_Parms
		{
			UAnimSequenceBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AnimInstance_eventGetCrouchIdleAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/IOE_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AnimInstance, nullptr, "GetCrouchIdleAnimation", nullptr, nullptr, Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::IOE_AnimInstance_eventGetCrouchIdleAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::IOE_AnimInstance_eventGetCrouchIdleAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics
	{
		struct IOE_AnimInstance_eventGetCrouchLocomotionBlendSpace_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AnimInstance_eventGetCrouchLocomotionBlendSpace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/IOE_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AnimInstance, nullptr, "GetCrouchLocomotionBlendSpace", nullptr, nullptr, Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::IOE_AnimInstance_eventGetCrouchLocomotionBlendSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::IOE_AnimInstance_eventGetCrouchLocomotionBlendSpace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics
	{
		struct IOE_AnimInstance_eventGetIdleAnimation_Parms
		{
			UAnimSequenceBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AnimInstance_eventGetIdleAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/IOE_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AnimInstance, nullptr, "GetIdleAnimation", nullptr, nullptr, Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::IOE_AnimInstance_eventGetIdleAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::IOE_AnimInstance_eventGetIdleAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics
	{
		struct IOE_AnimInstance_eventGetLocomotionBlendSpace_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_AnimInstance_eventGetLocomotionBlendSpace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "AnimInstances/IOE_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_AnimInstance, nullptr, "GetLocomotionBlendSpace", nullptr, nullptr, Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::IOE_AnimInstance_eventGetLocomotionBlendSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::IOE_AnimInstance_eventGetLocomotionBlendSpace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_AnimInstance);
	UClass* Z_Construct_UClass_UIOE_AnimInstance_NoRegister()
	{
		return UIOE_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterAnimDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCharacterAnimDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOE_AnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchIdleAnimation, "GetCrouchIdleAnimation" }, // 3694448049
		{ &Z_Construct_UFunction_UIOE_AnimInstance_GetCrouchLocomotionBlendSpace, "GetCrouchLocomotionBlendSpace" }, // 4127667154
		{ &Z_Construct_UFunction_UIOE_AnimInstance_GetIdleAnimation, "GetIdleAnimation" }, // 2359458577
		{ &Z_Construct_UFunction_UIOE_AnimInstance_GetLocomotionBlendSpace, "GetLocomotionBlendSpace" }, // 3112577993
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/IOE_AnimInstance.h" },
		{ "ModuleRelativePath", "AnimInstances/IOE_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "AnimInstances/IOE_AnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIOE_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset = { "DefaultCharacterAnimDataAsset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_AnimInstance, DefaultCharacterAnimDataAsset), Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData), Z_Construct_UClass_UIOE_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIOE_AnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_AnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_AnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_AnimInstance_Statics::ClassParams = {
		&UIOE_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIOE_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_AnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIOE_AnimInstance()
	{
		if (!Z_Registration_Info_UClass_UIOE_AnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_AnimInstance.OuterSingleton, Z_Construct_UClass_UIOE_AnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_AnimInstance.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_AnimInstance>()
	{
		return UIOE_AnimInstance::StaticClass();
	}
	UIOE_AnimInstance::UIOE_AnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_AnimInstance);
	UIOE_AnimInstance::~UIOE_AnimInstance() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_AnimInstance, UIOE_AnimInstance::StaticClass, TEXT("UIOE_AnimInstance"), &Z_Registration_Info_UClass_UIOE_AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_AnimInstance), 2884382495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_2352359836(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
