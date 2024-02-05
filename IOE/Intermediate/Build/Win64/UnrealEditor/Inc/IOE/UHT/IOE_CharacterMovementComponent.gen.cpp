// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/IOE_CharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_CharacterMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UIOE_CharacterMovementComponent();
	IOE_API UClass* Z_Construct_UClass_UIOE_CharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	void UIOE_CharacterMovementComponent::StaticRegisterNativesUIOE_CharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOE_CharacterMovementComponent);
	UClass* Z_Construct_UClass_UIOE_CharacterMovementComponent_NoRegister()
	{
		return UIOE_CharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TraversalAbilitiesOrdered_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraversalAbilitiesOrdered_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraversalAbilitiesOrdered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorComponents/IOE_CharacterMovementComponent.h" },
		{ "ModuleRelativePath", "ActorComponents/IOE_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::NewProp_TraversalAbilitiesOrdered_Inner = { "TraversalAbilitiesOrdered", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::NewProp_TraversalAbilitiesOrdered_MetaData[] = {
		{ "Category", "IOE_CharacterMovementComponent" },
		{ "ModuleRelativePath", "ActorComponents/IOE_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::NewProp_TraversalAbilitiesOrdered = { "TraversalAbilitiesOrdered", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIOE_CharacterMovementComponent, TraversalAbilitiesOrdered), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::NewProp_TraversalAbilitiesOrdered_MetaData), Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::NewProp_TraversalAbilitiesOrdered_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::NewProp_TraversalAbilitiesOrdered_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::NewProp_TraversalAbilitiesOrdered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOE_CharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::ClassParams = {
		&UIOE_CharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UIOE_CharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UIOE_CharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOE_CharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UIOE_CharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOE_CharacterMovementComponent.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UIOE_CharacterMovementComponent>()
	{
		return UIOE_CharacterMovementComponent::StaticClass();
	}
	UIOE_CharacterMovementComponent::UIOE_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOE_CharacterMovementComponent);
	UIOE_CharacterMovementComponent::~UIOE_CharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_IOE_CharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_IOE_CharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOE_CharacterMovementComponent, UIOE_CharacterMovementComponent::StaticClass, TEXT("UIOE_CharacterMovementComponent"), &Z_Registration_Info_UClass_UIOE_CharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOE_CharacterMovementComponent), 2271909080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_IOE_CharacterMovementComponent_h_1953750802(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_IOE_CharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_IOE_CharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
