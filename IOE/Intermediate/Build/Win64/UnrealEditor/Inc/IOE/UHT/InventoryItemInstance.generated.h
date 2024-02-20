// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryItemInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemStaticData;
#ifdef IOE_InventoryItemInstance_generated_h
#error "InventoryItemInstance.generated.h already included, missing '#pragma once' in InventoryItemInstance.h"
#endif
#define IOE_InventoryItemInstance_generated_h

#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_SPARSE_DATA
#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Equipped); \
	DECLARE_FUNCTION(execGetItemStaticData);


#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_ACCESSORS
#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItemInstance(); \
	friend struct Z_Construct_UClass_UInventoryItemInstance_Statics; \
public: \
	DECLARE_CLASS(UInventoryItemInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IOE"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItemInstance) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemStaticDataClass=NETFIELD_REP_START, \
		bEquipped, \
		NETFIELD_REP_END=bEquipped	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UInventoryItemInstance) \
public:


#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItemInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItemInstance(UInventoryItemInstance&&); \
	NO_API UInventoryItemInstance(const UInventoryItemInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItemInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItemInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItemInstance) \
	NO_API virtual ~UInventoryItemInstance();


#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_13_PROLOG
#define FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_SPARSE_DATA \
	FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_ACCESSORS \
	FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IOE_API UClass* StaticClass<class UInventoryItemInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_Inventory_InventoryItemInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
