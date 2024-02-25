// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/InventoryComponent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Inventory/InventoryList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	IOE_API UClass* Z_Construct_UClass_UInventoryComponent();
	IOE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UInventoryItemInstance_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UItemStaticData_NoRegister();
	IOE_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryList();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryComponent::execServerHandleGameplayEvent)
	{
		P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerHandleGameplayEvent_Implementation(Z_Param_Payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execAddInventoryTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInventoryTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetEquippedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryItemInstance**)Z_Param__Result=P_THIS->GetEquippedItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execEquipPrev)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipPrev();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execEquipNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execDropItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execUnequipItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnequipItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execEquipItemInstance)
	{
		P_GET_OBJECT(UInventoryItemInstance,Z_Param_InItemInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipItemInstance(Z_Param_InItemInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execEquipItem)
	{
		P_GET_OBJECT(UClass,Z_Param_InItemStaticDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipItem(Z_Param_InItemStaticDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveItem)
	{
		P_GET_OBJECT(UClass,Z_Param_InItemStaticDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_InItemStaticDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execAddItemInstance)
	{
		P_GET_OBJECT(UInventoryItemInstance,Z_Param_InItemInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemInstance(Z_Param_InItemInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execAddItem)
	{
		P_GET_OBJECT(UClass,Z_Param_InItemStaticDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_InItemStaticDataClass);
		P_NATIVE_END;
	}
	struct InventoryComponent_eventServerHandleGameplayEvent_Parms
	{
		FGameplayEventData Payload;
	};
	static FName NAME_UInventoryComponent_ServerHandleGameplayEvent = FName(TEXT("ServerHandleGameplayEvent"));
	void UInventoryComponent::ServerHandleGameplayEvent(FGameplayEventData Payload)
	{
		InventoryComponent_eventServerHandleGameplayEvent_Parms Parms;
		Parms.Payload=Payload;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerHandleGameplayEvent),&Parms);
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInventoryTags", &UInventoryComponent::execAddInventoryTags },
			{ "AddItem", &UInventoryComponent::execAddItem },
			{ "AddItemInstance", &UInventoryComponent::execAddItemInstance },
			{ "DropItem", &UInventoryComponent::execDropItem },
			{ "EquipItem", &UInventoryComponent::execEquipItem },
			{ "EquipItemInstance", &UInventoryComponent::execEquipItemInstance },
			{ "EquipNext", &UInventoryComponent::execEquipNext },
			{ "EquipPrev", &UInventoryComponent::execEquipPrev },
			{ "GetEquippedItem", &UInventoryComponent::execGetEquippedItem },
			{ "RemoveItem", &UInventoryComponent::execRemoveItem },
			{ "ServerHandleGameplayEvent", &UInventoryComponent::execServerHandleGameplayEvent },
			{ "UnequipItem", &UInventoryComponent::execUnequipItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_AddInventoryTags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_AddInventoryTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddInventoryTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddInventoryTags", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddInventoryTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddInventoryTags_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_AddInventoryTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddInventoryTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_AddItem_Statics
	{
		struct InventoryComponent_eventAddItem_Parms
		{
			TSubclassOf<UItemStaticData>  InItemStaticDataClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InItemStaticDataClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_InItemStaticDataClass = { "InItemStaticDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, InItemStaticDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_InItemStaticDataClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics
	{
		struct InventoryComponent_eventAddItemInstance_Parms
		{
			UInventoryItemInstance* InItemInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::NewProp_InItemInstance = { "InItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemInstance_Parms, InItemInstance), Z_Construct_UClass_UInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::NewProp_InItemInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItemInstance", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::InventoryComponent_eventAddItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::InventoryComponent_eventAddItemInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_AddItemInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItemInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_DropItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Drop\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drop" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "DropItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics
	{
		struct InventoryComponent_eventEquipItem_Parms
		{
			TSubclassOf<UItemStaticData>  InItemStaticDataClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InItemStaticDataClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::NewProp_InItemStaticDataClass = { "InItemStaticDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventEquipItem_Parms, InItemStaticDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::NewProp_InItemStaticDataClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Equip\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equip" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "EquipItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::InventoryComponent_eventEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::InventoryComponent_eventEquipItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_EquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_EquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics
	{
		struct InventoryComponent_eventEquipItemInstance_Parms
		{
			UInventoryItemInstance* InItemInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::NewProp_InItemInstance = { "InItemInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventEquipItemInstance_Parms, InItemInstance), Z_Construct_UClass_UInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::NewProp_InItemInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "EquipItemInstance", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::InventoryComponent_eventEquipItemInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::InventoryComponent_eventEquipItemInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_EquipItemInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_EquipItemInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_EquipNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_EquipNext_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Equip Next Selection\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equip Next Selection" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_EquipNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "EquipNext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_EquipNext_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_EquipNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_EquipNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_EquipPrev_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_EquipPrev_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Equip Prev Selection\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equip Prev Selection" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_EquipPrev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "EquipPrev", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_EquipPrev_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_EquipPrev_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_EquipPrev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_EquipPrev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics
	{
		struct InventoryComponent_eventGetEquippedItem_Parms
		{
			UInventoryItemInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetEquippedItem_Parms, ReturnValue), Z_Construct_UClass_UInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get ItemInstance of the current equipped item\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ItemInstance of the current equipped item" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetEquippedItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::InventoryComponent_eventGetEquippedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::InventoryComponent_eventGetEquippedItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetEquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetEquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics
	{
		struct InventoryComponent_eventRemoveItem_Parms
		{
			TSubclassOf<UItemStaticData>  InItemStaticDataClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InItemStaticDataClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_InItemStaticDataClass = { "InItemStaticDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, InItemStaticDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_InItemStaticDataClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServerHandleGameplayEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2361332821
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerHandleGameplayEvent", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::PropPointers), sizeof(InventoryComponent_eventServerHandleGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(InventoryComponent_eventServerHandleGameplayEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unequip\n" },
#endif
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unequip" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UnequipItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_UnequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryList;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddInventoryTags, "AddInventoryTags" }, // 1364989608
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 133166301
		{ &Z_Construct_UFunction_UInventoryComponent_AddItemInstance, "AddItemInstance" }, // 235823154
		{ &Z_Construct_UFunction_UInventoryComponent_DropItem, "DropItem" }, // 808679841
		{ &Z_Construct_UFunction_UInventoryComponent_EquipItem, "EquipItem" }, // 637815684
		{ &Z_Construct_UFunction_UInventoryComponent_EquipItemInstance, "EquipItemInstance" }, // 555371793
		{ &Z_Construct_UFunction_UInventoryComponent_EquipNext, "EquipNext" }, // 601789291
		{ &Z_Construct_UFunction_UInventoryComponent_EquipPrev, "EquipPrev" }, // 717012503
		{ &Z_Construct_UFunction_UInventoryComponent_GetEquippedItem, "GetEquippedItem" }, // 2339934248
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItem, "RemoveItem" }, // 901263796
		{ &Z_Construct_UFunction_UInventoryComponent_ServerHandleGameplayEvent, "ServerHandleGameplayEvent" }, // 2058104438
		{ &Z_Construct_UFunction_UInventoryComponent_UnequipItem, "UnequipItem" }, // 987106306
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorComponents/InventoryComponent.h" },
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryList_MetaData[] = {
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryList = { "InventoryList", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryList), Z_Construct_UScriptStruct_FInventoryList, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryList_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryList_MetaData) }; // 3358596060
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_DefaultItems_Inner = { "DefaultItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItemStaticData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_DefaultItems_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_DefaultItems = { "DefaultItems", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, DefaultItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_DefaultItems_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_DefaultItems_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentItem_MetaData[] = {
		{ "ModuleRelativePath", "ActorComponents/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentItem = { "CurrentItem", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, CurrentItem), Z_Construct_UClass_UInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentItem_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentItem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_DefaultItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_DefaultItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}

	void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InventoryList(TEXT("InventoryList"));
		static const FName Name_CurrentItem(TEXT("CurrentItem"));

		const bool bIsValid = true
			&& Name_InventoryList == ClassReps[(int32)ENetFields_Private::InventoryList].Property->GetFName()
			&& Name_CurrentItem == ClassReps[(int32)ENetFields_Private::CurrentItem].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	UInventoryComponent::~UInventoryComponent() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 3050918653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_3908661991(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_ActorComponents_InventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
