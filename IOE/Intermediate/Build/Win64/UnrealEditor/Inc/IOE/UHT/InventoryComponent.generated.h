// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryItemInstance;
class UItemStaticData;
struct FGameplayEventData;
#ifdef IOE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define IOE_InventoryComponent_generated_h

#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_SPARSE_DATA
#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerHandleGameplayEvent_Implementation(FGameplayEventData Payload); \
 \
	DECLARE_FUNCTION(execServerHandleGameplayEvent); \
	DECLARE_FUNCTION(execAddInventoryTags); \
	DECLARE_FUNCTION(execGetEquippedItem); \
	DECLARE_FUNCTION(execEquipPrev); \
	DECLARE_FUNCTION(execEquipNext); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execEquipItemInstance); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItemInstance); \
	DECLARE_FUNCTION(execAddItem);


#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_ACCESSORS
#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_CALLBACK_WRAPPERS
#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryList=NETFIELD_REP_START, \
		CurrentItem, \
		NETFIELD_REP_END=CurrentItem	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_12_PROLOG
#define FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_SPARSE_DATA \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_ACCESSORS \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_CALLBACK_WRAPPERS \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
