// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/InventoryList.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryList() {}
// Cross Module References
	IOE_API UClass* Z_Construct_UClass_UInventoryItemInstance_NoRegister();
	IOE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryList();
	IOE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryListItem();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References

static_assert(std::is_polymorphic<FInventoryListItem>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInventoryListItem cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryListItem;
class UScriptStruct* FInventoryListItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryListItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryListItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryListItem, (UObject*)Z_Construct_UPackage__Script_IOE(), TEXT("InventoryListItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryListItem.OuterSingleton;
}
template<> IOE_API UScriptStruct* StaticStruct<FInventoryListItem>()
{
	return FInventoryListItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInventoryListItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryListItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryListItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryListItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryListItem_Statics::NewProp_ItemInstance_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryList.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryListItem_Statics::NewProp_ItemInstance = { "ItemInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryListItem, ItemInstance), Z_Construct_UClass_UInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryListItem_Statics::NewProp_ItemInstance_MetaData), Z_Construct_UScriptStruct_FInventoryListItem_Statics::NewProp_ItemInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryListItem_Statics::NewProp_ItemInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryListItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"InventoryListItem",
		Z_Construct_UScriptStruct_FInventoryListItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryListItem_Statics::PropPointers),
		sizeof(FInventoryListItem),
		alignof(FInventoryListItem),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryListItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryListItem_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryListItem_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryListItem()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryListItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryListItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryListItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryListItem.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInventoryList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInventoryList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryList;
class UScriptStruct* FInventoryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryList, (UObject*)Z_Construct_UPackage__Script_IOE(), TEXT("InventoryList"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton;
}
template<> IOE_API UScriptStruct* StaticStruct<FInventoryList>()
{
	return FInventoryList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FInventoryList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FInventoryList);
#endif
	struct Z_Construct_UScriptStruct_FInventoryList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryListItem, METADATA_PARAMS(0, nullptr) }; // 4075627999
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryList.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryList, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Items_MetaData), Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Items_MetaData) }; // 4075627999
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"InventoryList",
		Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers),
		sizeof(FInventoryList),
		alignof(FInventoryList),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryList_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryList()
	{
		if (!Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton, Z_Construct_UScriptStruct_FInventoryList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryList_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryList_h_Statics::ScriptStructInfo[] = {
		{ FInventoryListItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryListItem_Statics::NewStructOps, TEXT("InventoryListItem"), &Z_Registration_Info_UScriptStruct_InventoryListItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryListItem), 4075627999U) },
		{ FInventoryList::StaticStruct, Z_Construct_UScriptStruct_FInventoryList_Statics::NewStructOps, TEXT("InventoryList"), &Z_Registration_Info_UScriptStruct_InventoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryList), 3358596060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryList_h_412371732(TEXT("/Script/IOE"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_Inventory_InventoryList_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
