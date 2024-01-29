// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/CharacterDataAsset.h"
#include "IOE_GameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	IOE_API UClass* Z_Construct_UClass_UCharacterDataAsset();
	IOE_API UClass* Z_Construct_UClass_UCharacterDataAsset_NoRegister();
	IOE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	void UCharacterDataAsset::StaticRegisterNativesUCharacterDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterDataAsset);
	UClass* Z_Construct_UClass_UCharacterDataAsset_NoRegister()
	{
		return UCharacterDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAssets/CharacterDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DataAssets/CharacterDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CharacterData_MetaData[] = {
		{ "Category", "CharacterDataAsset" },
		{ "ModuleRelativePath", "DataAssets/CharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDataAsset, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CharacterData_MetaData), Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CharacterData_MetaData) }; // 3550173347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CharacterData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterDataAsset_Statics::ClassParams = {
		&UCharacterDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterDataAsset()
	{
		if (!Z_Registration_Info_UClass_UCharacterDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterDataAsset.OuterSingleton, Z_Construct_UClass_UCharacterDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterDataAsset.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UCharacterDataAsset>()
	{
		return UCharacterDataAsset::StaticClass();
	}
	UCharacterDataAsset::UCharacterDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterDataAsset);
	UCharacterDataAsset::~UCharacterDataAsset() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_DataAssets_CharacterDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_DataAssets_CharacterDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterDataAsset, UCharacterDataAsset::StaticClass, TEXT("UCharacterDataAsset"), &Z_Registration_Info_UClass_UCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterDataAsset), 4095487467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_DataAssets_CharacterDataAsset_h_2893495916(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_DataAssets_CharacterDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_DataAssets_CharacterDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
