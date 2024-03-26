// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Components/IOE_AbilitySystemComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_AbilitySystemComponentBase() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	IOE_API UClass* Z_Construct_UClass_UIOE_AbilitySystemComponentBase();
	IOE_API UClass* Z_Construct_UClass_UIOE_AbilitySystemComponentBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	void UIOE_AbilitySystemComponentBase::StaticRegisterNativesUIOE_AbilitySystemComponentBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_AbilitySystemComponentBase);
	UClass* Z_Construct_UClass_UIOE_AbilitySystemComponentBase_NoRegister()
	{
		return UIOE_AbilitySystemComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/Components/IOE_AbilitySystemComponentBase.h" },
		{ "ModuleRelativePath", "AbilitySystem/Components/IOE_AbilitySystemComponentBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_AbilitySystemComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::ClassParams = {
		&UIOE_AbilitySystemComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIOE_AbilitySystemComponentBase()
	{
		if (!Z_Registration_Info_UClass_UIOE_AbilitySystemComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_AbilitySystemComponentBase.OuterSingleton, Z_Construct_UClass_UIOE_AbilitySystemComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_AbilitySystemComponentBase.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_AbilitySystemComponentBase>()
	{
		return UIOE_AbilitySystemComponentBase::StaticClass();
	}
	UIOE_AbilitySystemComponentBase::UIOE_AbilitySystemComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_AbilitySystemComponentBase);
	UIOE_AbilitySystemComponentBase::~UIOE_AbilitySystemComponentBase() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Components_IOE_AbilitySystemComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Components_IOE_AbilitySystemComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_AbilitySystemComponentBase, UIOE_AbilitySystemComponentBase::StaticClass, TEXT("UIOE_AbilitySystemComponentBase"), &Z_Registration_Info_UClass_UIOE_AbilitySystemComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_AbilitySystemComponentBase), 2021143643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Components_IOE_AbilitySystemComponentBase_h_3134012330(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Components_IOE_AbilitySystemComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_AbilitySystem_Components_IOE_AbilitySystemComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
