// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOECharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterData;
#ifdef IOE_IOECharacter_generated_h
#error "IOECharacter.generated.h already included, missing '#pragma once' in IOECharacter.h"
#endif
#define IOE_IOECharacter_generated_h

#define FID_IOE_Source_IOE_IOECharacter_h_35_SPARSE_DATA
#define FID_IOE_Source_IOE_IOECharacter_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOECharacter_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_IOECharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCharacterData); \
	DECLARE_FUNCTION(execGetCharacterData);


#define FID_IOE_Source_IOE_IOECharacter_h_35_ACCESSORS
#define FID_IOE_Source_IOE_IOECharacter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIOECharacter(); \
	friend struct Z_Construct_UClass_AIOECharacter_Statics; \
public: \
	DECLARE_CLASS(AIOECharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(AIOECharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AIOECharacter*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterData=NETFIELD_REP_START, \
		NETFIELD_REP_END=CharacterData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_IOE_Source_IOE_IOECharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIOECharacter(AIOECharacter&&); \
	NO_API AIOECharacter(const AIOECharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIOECharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIOECharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIOECharacter) \
	NO_API virtual ~AIOECharacter();


#define FID_IOE_Source_IOE_IOECharacter_h_32_PROLOG
#define FID_IOE_Source_IOE_IOECharacter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_IOECharacter_h_35_SPARSE_DATA \
	FID_IOE_Source_IOE_IOECharacter_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOECharacter_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_IOECharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOECharacter_h_35_ACCESSORS \
	FID_IOE_Source_IOE_IOECharacter_h_35_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_IOECharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class AIOECharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_IOECharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
