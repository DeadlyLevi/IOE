// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOE_GameTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IOE_IOE_GameTypes_generated_h
#error "IOE_GameTypes.generated.h already included, missing '#pragma once' in IOE_GameTypes.h"
#endif
#define IOE_IOE_GameTypes_generated_h

#define FID_IOE_Source_IOE_IOE_GameTypes_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterData_Statics; \
	IOE_API static class UScriptStruct* StaticStruct();


template<> IOE_API UScriptStruct* StaticStruct<struct FCharacterData>();

#define FID_IOE_Source_IOE_IOE_GameTypes_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterAnimationData_Statics; \
	IOE_API static class UScriptStruct* StaticStruct();


template<> IOE_API UScriptStruct* StaticStruct<struct FCharacterAnimationData>();

#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_SPARSE_DATA
#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_ACCESSORS
#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemStaticData(); \
	friend struct Z_Construct_UClass_UItemStaticData_Statics; \
public: \
	DECLARE_CLASS(UItemStaticData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(UItemStaticData)


#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemStaticData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemStaticData(UItemStaticData&&); \
	NO_API UItemStaticData(const UItemStaticData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemStaticData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemStaticData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemStaticData) \
	NO_API virtual ~UItemStaticData();


#define FID_IOE_Source_IOE_IOE_GameTypes_h_50_PROLOG
#define FID_IOE_Source_IOE_IOE_GameTypes_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_IOE_GameTypes_h_53_SPARSE_DATA \
	FID_IOE_Source_IOE_IOE_GameTypes_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOE_GameTypes_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOE_GameTypes_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOE_GameTypes_h_53_ACCESSORS \
	FID_IOE_Source_IOE_IOE_GameTypes_h_53_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOE_GameTypes_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class UItemStaticData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_IOE_GameTypes_h


#define FOREACH_ENUM_EFOOT(op) \
	op(EFoot::Left) \
	op(EFoot::Right) 

enum class EFoot : uint8;
template<> struct TIsUEnumClass<EFoot> { enum { Value = true }; };
template<> IOE_API UEnum* StaticEnum<EFoot>();

#define FOREACH_ENUM_EITEMSTATE(op) \
	op(EItemState::None) \
	op(EItemState::Equipped) \
	op(EItemState::Dropped) 

enum class EItemState : uint8;
template<> struct TIsUEnumClass<EItemState> { enum { Value = true }; };
template<> IOE_API UEnum* StaticEnum<EItemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
