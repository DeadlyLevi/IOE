// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IOE_InventoryList_generated_h
#error "InventoryList.generated.h already included, missing '#pragma once' in InventoryList.h"
#endif
#define IOE_InventoryList_generated_h

#define FID_IOE_Source_IOE_Inventory_InventoryList_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryListItem_Statics; \
	IOE_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> IOE_API UScriptStruct* StaticStruct<struct FInventoryListItem>();

#define FID_IOE_Source_IOE_Inventory_InventoryList_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryList_Statics; \
	IOE_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FInventoryList, Items, IOE_API );


template<> IOE_API UScriptStruct* StaticStruct<struct FInventoryList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IOE_Source_IOE_Inventory_InventoryList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
