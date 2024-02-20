// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOE_Statics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemStaticData;
#ifdef IOE_IOE_Statics_generated_h
#error "IOE_Statics.generated.h already included, missing '#pragma once' in IOE_Statics.h"
#endif
#define IOE_IOE_Statics_generated_h

#define FID_IOE_Source_IOE_IOE_Statics_h_11_SPARSE_DATA
#define FID_IOE_Source_IOE_IOE_Statics_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOE_Statics_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOE_Statics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemStaticData);


#define FID_IOE_Source_IOE_IOE_Statics_h_11_ACCESSORS
#define FID_IOE_Source_IOE_IOE_Statics_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOE_Statics(); \
	friend struct Z_Construct_UClass_UIOE_Statics_Statics; \
public: \
	DECLARE_CLASS(UIOE_Statics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(UIOE_Statics)


#define FID_IOE_Source_IOE_IOE_Statics_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOE_Statics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOE_Statics(UIOE_Statics&&); \
	NO_API UIOE_Statics(const UIOE_Statics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOE_Statics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOE_Statics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOE_Statics) \
	NO_API virtual ~UIOE_Statics();


#define FID_IOE_Source_IOE_IOE_Statics_h_8_PROLOG
#define FID_IOE_Source_IOE_IOE_Statics_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_IOE_Statics_h_11_SPARSE_DATA \
	FID_IOE_Source_IOE_IOE_Statics_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOE_Statics_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOE_Statics_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOE_Statics_h_11_ACCESSORS \
	FID_IOE_Source_IOE_IOE_Statics_h_11_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOE_Statics_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class UIOE_Statics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_IOE_Statics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
