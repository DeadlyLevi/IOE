// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOEGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IOE_IOEGameMode_generated_h
#error "IOEGameMode.generated.h already included, missing '#pragma once' in IOEGameMode.h"
#endif
#define IOE_IOEGameMode_generated_h

#define FID_IOE_Source_IOE_IOEGameMode_h_12_SPARSE_DATA
#define FID_IOE_Source_IOE_IOEGameMode_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOEGameMode_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOEGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_IOE_Source_IOE_IOEGameMode_h_12_ACCESSORS
#define FID_IOE_Source_IOE_IOEGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIOEGameMode(); \
	friend struct Z_Construct_UClass_AIOEGameMode_Statics; \
public: \
	DECLARE_CLASS(AIOEGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IOE"), IOE_API) \
	DECLARE_SERIALIZER(AIOEGameMode)


#define FID_IOE_Source_IOE_IOEGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IOE_API AIOEGameMode(AIOEGameMode&&); \
	IOE_API AIOEGameMode(const AIOEGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IOE_API, AIOEGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIOEGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIOEGameMode) \
	IOE_API virtual ~AIOEGameMode();


#define FID_IOE_Source_IOE_IOEGameMode_h_9_PROLOG
#define FID_IOE_Source_IOE_IOEGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_IOEGameMode_h_12_SPARSE_DATA \
	FID_IOE_Source_IOE_IOEGameMode_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOEGameMode_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOEGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOEGameMode_h_12_ACCESSORS \
	FID_IOE_Source_IOE_IOEGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOEGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class AIOEGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_IOEGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
