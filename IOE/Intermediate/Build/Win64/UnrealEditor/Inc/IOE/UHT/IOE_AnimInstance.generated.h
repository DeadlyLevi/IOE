// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/IOE_AnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UBlendSpace;
#ifdef IOE_IOE_AnimInstance_generated_h
#error "IOE_AnimInstance.generated.h already included, missing '#pragma once' in IOE_AnimInstance.h"
#endif
#define IOE_IOE_AnimInstance_generated_h

#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_SPARSE_DATA
#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCrouchIdleAnimation); \
	DECLARE_FUNCTION(execGetCrouchLocomotionBlendSpace); \
	DECLARE_FUNCTION(execGetIdleAnimation); \
	DECLARE_FUNCTION(execGetLocomotionBlendSpace);


#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_ACCESSORS
#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOE_AnimInstance(); \
	friend struct Z_Construct_UClass_UIOE_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UIOE_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(UIOE_AnimInstance)


#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOE_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOE_AnimInstance(UIOE_AnimInstance&&); \
	NO_API UIOE_AnimInstance(const UIOE_AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOE_AnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOE_AnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOE_AnimInstance) \
	NO_API virtual ~UIOE_AnimInstance();


#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_10_PROLOG
#define FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_SPARSE_DATA \
	FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_ACCESSORS \
	FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class UIOE_AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_AnimInstances_IOE_AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
