// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ItemActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef IOE_ItemActor_generated_h
#error "ItemActor.generated.h already included, missing '#pragma once' in ItemActor.h"
#endif
#define IOE_ItemActor_generated_h

#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_SPARSE_DATA
#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereOverlap); \
	DECLARE_FUNCTION(execOnRep_ItemState);


#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_ACCESSORS
#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemActor(); \
	friend struct Z_Construct_UClass_AItemActor_Statics; \
public: \
	DECLARE_CLASS(AItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(AItemActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemInstance=NETFIELD_REP_START, \
		ItemState, \
		NETFIELD_REP_END=ItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemActor(AItemActor&&); \
	NO_API AItemActor(const AItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemActor) \
	NO_API virtual ~AItemActor();


#define FID_IOE_Source_IOE_Actors_ItemActor_h_12_PROLOG
#define FID_IOE_Source_IOE_Actors_ItemActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_Actors_ItemActor_h_15_SPARSE_DATA \
	FID_IOE_Source_IOE_Actors_ItemActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_Actors_ItemActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_Actors_ItemActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_Actors_ItemActor_h_15_ACCESSORS \
	FID_IOE_Source_IOE_Actors_ItemActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_Actors_ItemActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class AItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_Actors_ItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
