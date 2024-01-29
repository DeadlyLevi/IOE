// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameInstances/IOE_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_GameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	IOE_API UClass* Z_Construct_UClass_UIOE_GameInstance();
	IOE_API UClass* Z_Construct_UClass_UIOE_GameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	void UIOE_GameInstance::StaticRegisterNativesUIOE_GameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_GameInstance);
	UClass* Z_Construct_UClass_UIOE_GameInstance_NoRegister()
	{
		return UIOE_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_GameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameInstances/IOE_GameInstance.h" },
		{ "ModuleRelativePath", "GameInstances/IOE_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_GameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_GameInstance_Statics::ClassParams = {
		&UIOE_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_GameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UIOE_GameInstance()
	{
		if (!Z_Registration_Info_UClass_UIOE_GameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_GameInstance.OuterSingleton, Z_Construct_UClass_UIOE_GameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_GameInstance.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_GameInstance>()
	{
		return UIOE_GameInstance::StaticClass();
	}
	UIOE_GameInstance::UIOE_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_GameInstance);
	UIOE_GameInstance::~UIOE_GameInstance() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_GameInstances_IOE_GameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_GameInstances_IOE_GameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_GameInstance, UIOE_GameInstance::StaticClass, TEXT("UIOE_GameInstance"), &Z_Registration_Info_UClass_UIOE_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_GameInstance), 1889281833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_GameInstances_IOE_GameInstance_h_1617708585(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_GameInstances_IOE_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_GameInstances_IOE_GameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
