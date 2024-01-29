// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef IOE_IOE_AttributeSetBase_generated_h
#error "IOE_AttributeSetBase.generated.h already included, missing '#pragma once' in IOE_AttributeSetBase.h"
#endif
#define IOE_IOE_AttributeSetBase_generated_h

#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_SPARSE_DATA
#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxMovementSpeed); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_ACCESSORS
#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOE_AttributeSetBase(); \
	friend struct Z_Construct_UClass_UIOE_AttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UIOE_AttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(UIOE_AttributeSetBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Stamina, \
		MaxStamina, \
		MaxMovementSpeed, \
		NETFIELD_REP_END=MaxMovementSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UIOE_AttributeSetBase) \
public:


#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOE_AttributeSetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOE_AttributeSetBase(UIOE_AttributeSetBase&&); \
	NO_API UIOE_AttributeSetBase(const UIOE_AttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOE_AttributeSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOE_AttributeSetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOE_AttributeSetBase) \
	NO_API virtual ~UIOE_AttributeSetBase();


#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_16_PROLOG
#define FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_SPARSE_DATA \
	FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_ACCESSORS \
	FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class UIOE_AttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_AbilitySystem_AttributeSets_IOE_AttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
