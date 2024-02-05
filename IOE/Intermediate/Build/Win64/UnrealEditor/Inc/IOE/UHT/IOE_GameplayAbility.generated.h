// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/IOE_GameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AIOECharacter;
#ifdef IOE_IOE_GameplayAbility_generated_h
#error "IOE_GameplayAbility.generated.h already included, missing '#pragma once' in IOE_GameplayAbility.h"
#endif
#define IOE_IOE_GameplayAbility_generated_h

#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_SPARSE_DATA
#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIOECharacterFromActorInfo);


#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_ACCESSORS
#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOE_GameplayAbility(); \
	friend struct Z_Construct_UClass_UIOE_GameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UIOE_GameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(UIOE_GameplayAbility)


#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOE_GameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOE_GameplayAbility(UIOE_GameplayAbility&&); \
	NO_API UIOE_GameplayAbility(const UIOE_GameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOE_GameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOE_GameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOE_GameplayAbility) \
	NO_API virtual ~UIOE_GameplayAbility();


#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_12_PROLOG
#define FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_SPARSE_DATA \
	FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_ACCESSORS \
	FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class UIOE_GameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_AbilitySystem_Abilities_IOE_GameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
