// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicalMaterials/IOE_PhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_PhysicalMaterial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UIOE_PhysicalMaterial();
	IOE_API UClass* Z_Construct_UClass_UIOE_PhysicalMaterial_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	void UIOE_PhysicalMaterial::StaticRegisterNativesUIOE_PhysicalMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_PhysicalMaterial);
	UClass* Z_Construct_UClass_UIOE_PhysicalMaterial_NoRegister()
	{
		return UIOE_PhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_PhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootStepSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootStepSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/IOE_PhysicalMaterial.h" },
		{ "ModuleRelativePath", "PhysicalMaterials/IOE_PhysicalMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::NewProp_FootStepSound_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "PhysicalMaterials/IOE_PhysicalMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::NewProp_FootStepSound = { "FootStepSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_PhysicalMaterial, FootStepSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::NewProp_FootStepSound_MetaData), Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::NewProp_FootStepSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::NewProp_FootStepSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_PhysicalMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::ClassParams = {
		&UIOE_PhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIOE_PhysicalMaterial()
	{
		if (!Z_Registration_Info_UClass_UIOE_PhysicalMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_PhysicalMaterial.OuterSingleton, Z_Construct_UClass_UIOE_PhysicalMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_PhysicalMaterial.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_PhysicalMaterial>()
	{
		return UIOE_PhysicalMaterial::StaticClass();
	}
	UIOE_PhysicalMaterial::UIOE_PhysicalMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_PhysicalMaterial);
	UIOE_PhysicalMaterial::~UIOE_PhysicalMaterial() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_PhysicalMaterials_IOE_PhysicalMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_PhysicalMaterials_IOE_PhysicalMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_PhysicalMaterial, UIOE_PhysicalMaterial::StaticClass, TEXT("UIOE_PhysicalMaterial"), &Z_Registration_Info_UClass_UIOE_PhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_PhysicalMaterial), 371142908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_PhysicalMaterials_IOE_PhysicalMaterial_h_3807083125(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_PhysicalMaterials_IOE_PhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_PhysicalMaterials_IOE_PhysicalMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
