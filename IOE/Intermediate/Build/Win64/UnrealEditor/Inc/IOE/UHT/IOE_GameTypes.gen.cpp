// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOE_GameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOE_GameTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	IOE_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister();
	IOE_API UClass* Z_Construct_UClass_UItemStaticData();
	IOE_API UClass* Z_Construct_UClass_UItemStaticData_NoRegister();
	IOE_API UEnum* Z_Construct_UEnum_IOE_EFoot();
	IOE_API UEnum* Z_Construct_UEnum_IOE_EItemState();
	IOE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimationData();
	IOE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	UPackage* Z_Construct_UPackage__Script_IOE();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterData;
class UScriptStruct* FCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, (UObject*)Z_Construct_UPackage__Script_IOE(), TEXT("CharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton;
}
template<> IOE_API UScriptStruct* StaticStruct<FCharacterData>()
{
	return FCharacterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset = { "CharacterAnimDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CharacterAnimDataAsset), Z_Construct_UClass_UCharacterAnimDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset_MetaData), Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterAnimDataAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
		nullptr,
		&NewStructOps,
		"CharacterData",
		Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers),
		sizeof(FCharacterData),
		alignof(FCharacterData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterAnimationData;
class UScriptStruct* FCharacterAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterAnimationData, (UObject*)Z_Construct_UPackage__Script_IOE(), TEXT("CharacterAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterAnimationData.OuterSingleton;
}
template<> IOE_API UScriptStruct* StaticStruct<FCharacterAnimationData>()
{
	return FCharacterAnimationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterAnimationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementBlendspace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementBlendspace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnimationAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchMovementBlendspace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchMovementBlendspace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchIdleAnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchIdleAnimationAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterAnimationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendspace_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendspace = { "MovementBlendspace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, MovementBlendspace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendspace_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendspace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset = { "IdleAnimationAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, IdleAnimationAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendspace_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendspace = { "CrouchMovementBlendspace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, CrouchMovementBlendspace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendspace_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendspace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset_MetaData[] = {
		{ "Category", "CharacterAnimationData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset = { "CrouchIdleAnimationAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAnimationData, CrouchIdleAnimationAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset_MetaData), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_MovementBlendspace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_IdleAnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchMovementBlendspace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewProp_CrouchIdleAnimationAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
		nullptr,
		&NewStructOps,
		"CharacterAnimationData",
		Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers),
		sizeof(FCharacterAnimationData),
		alignof(FCharacterAnimationData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimationData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterAnimationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterAnimationData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFoot;
	static UEnum* EFoot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFoot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFoot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IOE_EFoot, (UObject*)Z_Construct_UPackage__Script_IOE(), TEXT("EFoot"));
		}
		return Z_Registration_Info_UEnum_EFoot.OuterSingleton;
	}
	template<> IOE_API UEnum* StaticEnum<EFoot>()
	{
		return EFoot_StaticEnum();
	}
	struct Z_Construct_UEnum_IOE_EFoot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IOE_EFoot_Statics::Enumerators[] = {
		{ "EFoot::Left", (int64)EFoot::Left },
		{ "EFoot::Right", (int64)EFoot::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IOE_EFoot_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EFoot::Left" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EFoot::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IOE_EFoot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IOE,
		nullptr,
		"EFoot",
		"EFoot",
		Z_Construct_UEnum_IOE_EFoot_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IOE_EFoot_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IOE_EFoot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IOE_EFoot_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_IOE_EFoot()
	{
		if (!Z_Registration_Info_UEnum_EFoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFoot.InnerSingleton, Z_Construct_UEnum_IOE_EFoot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFoot.InnerSingleton;
	}
	void UItemStaticData::StaticRegisterNativesUItemStaticData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemStaticData);
	UClass* Z_Construct_UClass_UItemStaticData_NoRegister()
	{
		return UItemStaticData::StaticClass();
	}
	struct Z_Construct_UClass_UItemStaticData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeEquipped_MetaData[];
#endif
		static void NewProp_bCanBeEquipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterAnimationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemStaticData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IOE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStaticData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IOE_GameTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStaticData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemStaticData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemStaticData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemStaticData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UItemStaticData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStaticData_Statics::NewProp_ItemActorClass_MetaData[] = {
		{ "Category", "ItemStaticData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemStaticData_Statics::NewProp_ItemActorClass = { "ItemActorClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemStaticData, ItemActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::NewProp_ItemActorClass_MetaData), Z_Construct_UClass_UItemStaticData_Statics::NewProp_ItemActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStaticData_Statics::NewProp_AttachmentSocket_MetaData[] = {
		{ "Category", "ItemStaticData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UItemStaticData_Statics::NewProp_AttachmentSocket = { "AttachmentSocket", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemStaticData, AttachmentSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::NewProp_AttachmentSocket_MetaData), Z_Construct_UClass_UItemStaticData_Statics::NewProp_AttachmentSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStaticData_Statics::NewProp_bCanBeEquipped_MetaData[] = {
		{ "Category", "ItemStaticData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	void Z_Construct_UClass_UItemStaticData_Statics::NewProp_bCanBeEquipped_SetBit(void* Obj)
	{
		((UItemStaticData*)Obj)->bCanBeEquipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemStaticData_Statics::NewProp_bCanBeEquipped = { "bCanBeEquipped", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemStaticData), &Z_Construct_UClass_UItemStaticData_Statics::NewProp_bCanBeEquipped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::NewProp_bCanBeEquipped_MetaData), Z_Construct_UClass_UItemStaticData_Statics::NewProp_bCanBeEquipped_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemStaticData_Statics::NewProp_CharacterAnimationData_MetaData[] = {
		{ "Category", "ItemStaticData" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemStaticData_Statics::NewProp_CharacterAnimationData = { "CharacterAnimationData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemStaticData, CharacterAnimationData), Z_Construct_UScriptStruct_FCharacterAnimationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::NewProp_CharacterAnimationData_MetaData), Z_Construct_UClass_UItemStaticData_Statics::NewProp_CharacterAnimationData_MetaData) }; // 3025100034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStaticData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStaticData_Statics::NewProp_ItemActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStaticData_Statics::NewProp_AttachmentSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStaticData_Statics::NewProp_bCanBeEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemStaticData_Statics::NewProp_CharacterAnimationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemStaticData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemStaticData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemStaticData_Statics::ClassParams = {
		&UItemStaticData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemStaticData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemStaticData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemStaticData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UItemStaticData()
	{
		if (!Z_Registration_Info_UClass_UItemStaticData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemStaticData.OuterSingleton, Z_Construct_UClass_UItemStaticData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemStaticData.OuterSingleton;
	}
	template<> IOE_API UClass* StaticClass<UItemStaticData>()
	{
		return UItemStaticData::StaticClass();
	}
	UItemStaticData::UItemStaticData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemStaticData);
	UItemStaticData::~UItemStaticData() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemState;
	static UEnum* EItemState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IOE_EItemState, (UObject*)Z_Construct_UPackage__Script_IOE(), TEXT("EItemState"));
		}
		return Z_Registration_Info_UEnum_EItemState.OuterSingleton;
	}
	template<> IOE_API UEnum* StaticEnum<EItemState>()
	{
		return EItemState_StaticEnum();
	}
	struct Z_Construct_UEnum_IOE_EItemState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IOE_EItemState_Statics::Enumerators[] = {
		{ "EItemState::None", (int64)EItemState::None },
		{ "EItemState::Equipped", (int64)EItemState::Equipped },
		{ "EItemState::Dropped", (int64)EItemState::Dropped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IOE_EItemState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dropped.DisplayName", "Dropped" },
		{ "Dropped.Name", "EItemState::Dropped" },
		{ "Equipped.DisplayName", "Equipped" },
		{ "Equipped.Name", "EItemState::Equipped" },
		{ "ModuleRelativePath", "IOE_GameTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EItemState::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IOE_EItemState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IOE,
		nullptr,
		"EItemState",
		"EItemState",
		Z_Construct_UEnum_IOE_EItemState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IOE_EItemState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IOE_EItemState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IOE_EItemState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_IOE_EItemState()
	{
		if (!Z_Registration_Info_UEnum_EItemState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemState.InnerSingleton, Z_Construct_UEnum_IOE_EItemState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::EnumInfo[] = {
		{ EFoot_StaticEnum, TEXT("EFoot"), &Z_Registration_Info_UEnum_EFoot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2878184586U) },
		{ EItemState_StaticEnum, TEXT("EItemState"), &Z_Registration_Info_UEnum_EItemState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1673728191U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::ScriptStructInfo[] = {
		{ FCharacterData::StaticStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps, TEXT("CharacterData"), &Z_Registration_Info_UScriptStruct_CharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterData), 3550173347U) },
		{ FCharacterAnimationData::StaticStruct, Z_Construct_UScriptStruct_FCharacterAnimationData_Statics::NewStructOps, TEXT("CharacterAnimationData"), &Z_Registration_Info_UScriptStruct_CharacterAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterAnimationData), 3025100034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemStaticData, UItemStaticData::StaticClass, TEXT("UItemStaticData"), &Z_Registration_Info_UClass_UItemStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemStaticData), 2166418816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_1834515178(TEXT("/Script/IOE"),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IOE_Source_IOE_IOE_GameTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
