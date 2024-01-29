// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOEGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOEGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	IOE_API UClass* Z_Construct_UClass_AIOEGameMode();
	IOE_API UClass* Z_Construct_UClass_AIOEGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	void AIOEGameMode::StaticRegisterNativesAIOEGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIOEGameMode);
	UClass* Z_Construct_UClass_AIOEGameMode_NoRegister()
	{
		return AIOEGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIOEGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIOEGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIOEGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOEGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IOEGameMode.h" },
		{ "ModuleRelativePath", "IOEGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIOEGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIOEGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIOEGameMode_Statics::ClassParams = {
		&AIOEGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOEGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIOEGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AIOEGameMode()
	{
		if (!Z_Registration_Info_UClass_AIOEGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIOEGameMode.OuterSingleton, Z_Construct_UClass_AIOEGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIOEGameMode.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<AIOEGameMode>()
	{
		return AIOEGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIOEGameMode);
	AIOEGameMode::~AIOEGameMode() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOEGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOEGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIOEGameMode, AIOEGameMode::StaticClass, TEXT("AIOEGameMode"), &Z_Registration_Info_UClass_AIOEGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIOEGameMode), 1438974781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOEGameMode_h_2807031453(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOEGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOEGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
