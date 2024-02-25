// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOECharacter.h"
#include "GameplayTagContainer.h"
#include "IOE_GameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOECharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	IOE_API UClass* Z_Construct_UClass_AIOECharacter();
	IOE_API UClass* Z_Construct_UClass_AIOECharacter_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UCharacterDataAsset_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UFootstepsComponent_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UIOE_AbilitySystemComponentBase_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UIOE_AttributeSetBase_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UIOE_MotionWarpingComponent_NoRegister();
	IOE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	DEFINE_FUNCTION(AIOECharacter::execSetCharacterData)
	{
		P_GET_STRUCT(FCharacterData,Z_Param_InCharacterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterData(Z_Param_InCharacterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIOECharacter::execGetCharacterData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCharacterData*)Z_Param__Result=P_THIS->GetCharacterData();
		P_NATIVE_END;
	}
	void AIOECharacter::StaticRegisterNativesAIOECharacter()
	{
		UClass* Class = AIOECharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterData", &AIOECharacter::execGetCharacterData },
			{ "SetCharacterData", &AIOECharacter::execSetCharacterData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics
	{
		struct IOECharacter_eventGetCharacterData_Parms
		{
			FCharacterData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOECharacter_eventGetCharacterData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(0, nullptr) }; // 3550173347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIOECharacter, nullptr, "GetCharacterData", nullptr, nullptr, Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::IOECharacter_eventGetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::IOECharacter_eventGetCharacterData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AIOECharacter_GetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIOECharacter_GetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics
	{
		struct IOECharacter_eventSetCharacterData_Parms
		{
			FCharacterData InCharacterData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCharacterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::NewProp_InCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::NewProp_InCharacterData = { "InCharacterData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IOECharacter_eventSetCharacterData_Parms, InCharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::NewProp_InCharacterData_MetaData), Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::NewProp_InCharacterData_MetaData) }; // 3550173347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::NewProp_InCharacterData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIOECharacter, nullptr, "SetCharacterData", nullptr, nullptr, Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::IOECharacter_eventSetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::IOECharacter_eventSetCharacterData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AIOECharacter_SetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIOECharacter_SetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIOECharacter);
	UClass* Z_Construct_UClass_AIOECharacter_NoRegister()
	{
		return AIOECharacter::StaticClass();
	}
	struct Z_Construct_UClass_AIOECharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOEMotionWarpingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IOEMotionWarpingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveForwardInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSideInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveSideInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookUpInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipNextItemInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipNextItemInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipPrevItemInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipPrevItemInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnequipItemInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnequipItemInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropItemInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DropItemInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpEventTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpEventTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAirTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SprintTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchStateEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CrouchStateEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIOECharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AIOECharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIOECharacter_GetCharacterData, "GetCharacterData" }, // 987753426
		{ &Z_Construct_UFunction_AIOECharacter_SetCharacterData, "SetCharacterData" }, // 1930311822
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IOECharacter.h" },
		{ "ModuleRelativePath", "IOECharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IOECharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IOECharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, TurnRateGamepad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnRateGamepad_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnRateGamepad_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, AbilitySystemComponent), Z_Construct_UClass_UIOE_AbilitySystemComponentBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, AttributeSet), Z_Construct_UClass_UIOE_AttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_IOEMotionWarpingComponent_MetaData[] = {
		{ "Category", "MotionWarp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_IOEMotionWarpingComponent = { "IOEMotionWarpingComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, IOEMotionWarpingComponent), Z_Construct_UClass_UIOE_MotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_IOEMotionWarpingComponent_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_IOEMotionWarpingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterData_MetaData[] = {
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterData_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterData_MetaData) }; // 3550173347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterDataAsset_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterDataAsset = { "CharacterDataAsset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, CharacterDataAsset), Z_Construct_UClass_UCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterDataAsset_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_FootstepsComponent_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_FootstepsComponent = { "FootstepsComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, FootstepsComponent), Z_Construct_UClass_UFootstepsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_FootstepsComponent_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_FootstepsComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mapping Context\n" },
#endif
		{ "ModuleRelativePath", "IOECharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping Context" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveForwardInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Actions\n" },
#endif
		{ "ModuleRelativePath", "IOECharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Actions" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveForwardInputAction = { "MoveForwardInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, MoveForwardInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveForwardInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveForwardInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveSideInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveSideInputAction = { "MoveSideInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, MoveSideInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveSideInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveSideInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnInputAction = { "TurnInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, TurnInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_LookUpInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_LookUpInputAction = { "LookUpInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, LookUpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_LookUpInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_LookUpInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpInputAction = { "JumpInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, JumpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchInputAction = { "CrouchInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, CrouchInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintInputAction = { "SprintInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, SprintInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipNextItemInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipNextItemInputAction = { "EquipNextItemInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, EquipNextItemInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipNextItemInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipNextItemInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipPrevItemInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipPrevItemInputAction = { "EquipPrevItemInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, EquipPrevItemInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipPrevItemInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipPrevItemInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_UnequipItemInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_UnequipItemInputAction = { "UnequipItemInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, UnequipItemInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_UnequipItemInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_UnequipItemInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_DropItemInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_DropItemInputAction = { "DropItemInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, DropItemInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_DropItemInputAction_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_DropItemInputAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpEventTag_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpEventTag = { "JumpEventTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, JumpEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpEventTag_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpEventTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_InAirTags_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_InAirTags = { "InAirTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, InAirTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_InAirTags_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_InAirTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchTags_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchTags = { "CrouchTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, CrouchTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchTags_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintTags_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintTags = { "SprintTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, SprintTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintTags_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchStateEffect_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchStateEffect = { "CrouchStateEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, CrouchStateEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchStateEffect_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchStateEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIOECharacter_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "IOECharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IOECharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIOECharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0020080000080029, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIOECharacter, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_AIOECharacter_Statics::NewProp_InventoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIOECharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_IOEMotionWarpingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_CharacterDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_FootstepsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveForwardInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_MoveSideInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_TurnInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_LookUpInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipNextItemInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_EquipPrevItemInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_UnequipItemInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_DropItemInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_JumpEventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_InAirTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_SprintTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_CrouchStateEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIOECharacter_Statics::NewProp_InventoryComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIOECharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AIOECharacter, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIOECharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIOECharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIOECharacter_Statics::ClassParams = {
		&AIOECharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIOECharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AIOECharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIOECharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AIOECharacter()
	{
		if (!Z_Registration_Info_UClass_AIOECharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIOECharacter.OuterSingleton, Z_Construct_UClass_AIOECharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIOECharacter.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<AIOECharacter>()
	{
		return AIOECharacter::StaticClass();
	}

	void AIOECharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterData(TEXT("CharacterData"));
		static const FName Name_InventoryComponent(TEXT("InventoryComponent"));

		const bool bIsValid = true
			&& Name_CharacterData == ClassReps[(int32)ENetFields_Private::CharacterData].Property->GetFName()
			&& Name_InventoryComponent == ClassReps[(int32)ENetFields_Private::InventoryComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AIOECharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIOECharacter);
	AIOECharacter::~AIOECharacter() {}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOECharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOECharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIOECharacter, AIOECharacter::StaticClass, TEXT("AIOECharacter"), &Z_Registration_Info_UClass_AIOECharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIOECharacter), 533652633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOECharacter_h_3213796071(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOECharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOECharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
