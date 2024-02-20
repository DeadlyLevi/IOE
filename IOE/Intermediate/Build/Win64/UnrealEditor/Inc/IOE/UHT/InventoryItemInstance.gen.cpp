// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/InventoryItemInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IOE_API UClass* Z_Construct_UClass_UInventoryItemInstance();
	IOE_API UClass* Z_Construct_UClass_UInventoryItemInstance_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UItemStaticData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryItemInstance::execOnRep_Equipped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Equipped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryItemInstance::execGetItemStaticData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UItemStaticData**)Z_Param__Result=P_THIS->GetItemStaticData();
		P_NATIVE_END;
	}
	void UInventoryItemInstance::StaticRegisterNativesUInventoryItemInstance()
	{
		UClass* Class = UInventoryItemInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemStaticData", &UInventoryItemInstance::execGetItemStaticData },
			{ "OnRep_Equipped", &UInventoryItemInstance::execOnRep_Equipped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics
	{
		struct InventoryItemInstance_eventGetItemStaticData_Parms
		{
			const UItemStaticData* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemInstance_eventGetItemStaticData_Parms, ReturnValue), Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryItemInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemInstance, nullptr, "GetItemStaticData", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::InventoryItemInstance_eventGetItemStaticData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::InventoryItemInstance_eventGetItemStaticData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryItemInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemInstance, nullptr, "OnRep_Equipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemInstance);
	UClass* Z_Construct_UClass_UInventoryItemInstance_NoRegister()
	{
		return UInventoryItemInstance::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStaticDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemStaticDataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEquipped_MetaData[];
#endif
		static void NewProp_bEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryItemInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItemInstance_GetItemStaticData, "GetItemStaticData" }, // 477121024
		{ &Z_Construct_UFunction_UInventoryItemInstance_OnRep_Equipped, "OnRep_Equipped" }, // 6980106
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/InventoryItemInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryItemInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_ItemStaticDataClass_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryItemInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_ItemStaticDataClass = { "ItemStaticDataClass", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryItemInstance, ItemStaticDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_ItemStaticDataClass_MetaData), Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_ItemStaticDataClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_bEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryItemInstance.h" },
	};
#endif
	void Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_bEquipped_SetBit(void* Obj)
	{
		((UInventoryItemInstance*)Obj)->bEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_bEquipped = { "bEquipped", "OnRep_Equipped", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryItemInstance), &Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_bEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_bEquipped_MetaData), Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_bEquipped_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_ItemStaticDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemInstance_Statics::NewProp_bEquipped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemInstance_Statics::ClassParams = {
		&UInventoryItemInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryItemInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryItemInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryItemInstance()
	{
		if (!Z_Registration_Info_UClass_UInventoryItemInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemInstance.OuterSingleton, Z_Construct_UClass_UInventoryItemInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryItemInstance.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UInventoryItemInstance>()
	{
		return UInventoryItemInstance::StaticClass();
	}

	void UInventoryItemInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ItemStaticDataClass(TEXT("ItemStaticDataClass"));
		static const FName Name_bEquipped(TEXT("bEquipped"));

		const bool bIsValid = true
			&& Name_ItemStaticDataClass == ClassReps[(int32)ENetFields_Private::ItemStaticDataClass].Property->GetFName()
			&& Name_bEquipped == ClassReps[(int32)ENetFields_Private::bEquipped].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryItemInstance"));
	}
	UInventoryItemInstance::UInventoryItemInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemInstance);
	UInventoryItemInstance::~UInventoryItemInstance() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemInstance, UInventoryItemInstance::StaticClass, TEXT("UInventoryItemInstance"), &Z_Registration_Info_UClass_UInventoryItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemInstance), 2650291550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_2253182(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
