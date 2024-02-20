// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOE_Statics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_Statics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	IOE_API UClass* Z_Construct_UClass_UIOE_Statics();
	IOE_API UClass* Z_Construct_UClass_UIOE_Statics_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UItemStaticData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	DEFINE_FUNCTION(UIOE_Statics::execGetItemStaticData)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UItemStaticData**)Z_Param__Result=UIOE_Statics::GetItemStaticData(Z_Param_ItemDataClass);
		P_NATIVE_END;
	}
	void UIOE_Statics::StaticRegisterNativesUIOE_Statics()
	{
		UClass* Class = UIOE_Statics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemStaticData", &UIOE_Statics::execGetItemStaticData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics
	{
		struct IOE_Statics_eventGetItemStaticData_Parms
		{
			TSubclassOf<UItemStaticData>  ItemDataClass;
			const UItemStaticData* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDataClass;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::NewProp_ItemDataClass = { "ItemDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_Statics_eventGetItemStaticData_Parms, ItemDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOE_Statics_eventGetItemStaticData_Parms, ReturnValue), Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::NewProp_ItemDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IOE_Statics.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOE_Statics, nullptr, "GetItemStaticData", nullptr, nullptr, Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::IOE_Statics_eventGetItemStaticData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::IOE_Statics_eventGetItemStaticData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UIOE_Statics_GetItemStaticData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOE_Statics_GetItemStaticData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_Statics);
	UClass* Z_Construct_UClass_UIOE_Statics_NoRegister()
	{
		return UIOE_Statics::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_Statics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_Statics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_Statics_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOE_Statics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOE_Statics_GetItemStaticData, "GetItemStaticData" }, // 130429105
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_Statics_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_Statics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IOE_Statics.h" },
		{ "ModuleRelativePath", "IOE_Statics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_Statics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_Statics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_Statics_Statics::ClassParams = {
		&UIOE_Statics::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_Statics_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_Statics_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIOE_Statics()
	{
		if (!Z_Registration_Info_UClass_UIOE_Statics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_Statics.OuterSingleton, Z_Construct_UClass_UIOE_Statics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_Statics.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_Statics>()
	{
		return UIOE_Statics::StaticClass();
	}
	UIOE_Statics::UIOE_Statics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_Statics);
	UIOE_Statics::~UIOE_Statics() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_Statics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_Statics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_Statics, UIOE_Statics::StaticClass, TEXT("UIOE_Statics"), &Z_Registration_Info_UClass_UIOE_Statics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_Statics), 459214606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_Statics_h_1556375452(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_Statics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_Statics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
