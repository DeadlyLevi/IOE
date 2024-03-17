// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstances/IOE_AnimInstance.h"
#include "IOECharacter.h"
#include "IOE_GameTypes.h"
#include "ActorComponents/InventoryComponent.h"
#include "Animation/AnimSequenceBase.h"
#include "Animation/BlendSpace.h"
#include "DataAssets/CharacterAnimDataAsset.h"
#include "Inventory/InventoryItemInstance.h"

//TO REFACTOR AND OPTIMIZE!

const UItemStaticData* UIOE_AnimInstance::GetEquippedItemData() const
{
	AIOECharacter* IOECharacter = Cast<AIOECharacter>(GetOwningActor());

	UInventoryComponent* InventoryComponent = IOECharacter ? IOECharacter->GetInventoryComponent() : nullptr;
	UInventoryItemInstance* ItemInstance = InventoryComponent ? InventoryComponent->GetEquippedItem() : nullptr;

	return ItemInstance ? ItemInstance->GetItemStaticData() : nullptr;
	
}

UBlendSpace* UIOE_AnimInstance::GetLocomotionBlendSpace() const
{
	if (AIOECharacter* IOECharacter = Cast<AIOECharacter>(GetOwningActor()))
	{
		if(const UItemStaticData* ItemData = GetEquippedItemData())
		{
			if(ItemData->CharacterAnimationData.MovementBlendspace)
			{
				return ItemData->CharacterAnimationData.MovementBlendspace;
			}
		}
		
		FCharacterData Data = IOECharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{
			return Data.CharacterAnimDataAsset->CharcaterAnimationData.MovementBlendspace;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharcaterAnimationData.MovementBlendspace : nullptr;
}

UAnimSequenceBase* UIOE_AnimInstance::GetIdleAnimation() const
{
	if (AIOECharacter* IOECharacter = Cast<AIOECharacter>(GetOwningActor()))
	{
		if(const UItemStaticData* ItemData = GetEquippedItemData())
		{
			if(ItemData->CharacterAnimationData.IdleAnimationAsset)
			{
				return ItemData->CharacterAnimationData.IdleAnimationAsset;
			}
		}
		
		FCharacterData Data = IOECharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{
			return Data.CharacterAnimDataAsset->CharcaterAnimationData.IdleAnimationAsset;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharcaterAnimationData.IdleAnimationAsset : nullptr;
}

UBlendSpace* UIOE_AnimInstance::GetCrouchLocomotionBlendSpace() const
{
	if (AIOECharacter* IOECharacter = Cast<AIOECharacter>(GetOwningActor()))
	{
		if(const UItemStaticData* ItemData = GetEquippedItemData())
		{
			if(ItemData->CharacterAnimationData.CrouchMovementBlendspace)
			{
				return ItemData->CharacterAnimationData.CrouchMovementBlendspace;
			}
		}
		
		FCharacterData Data = IOECharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{
			return Data.CharacterAnimDataAsset->CharcaterAnimationData.CrouchMovementBlendspace;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharcaterAnimationData.CrouchMovementBlendspace : nullptr;
}

UAnimSequenceBase* UIOE_AnimInstance::GetCrouchIdleAnimation() const
{
	if (AIOECharacter* IOECharacter = Cast<AIOECharacter>(GetOwningActor()))
	{
		if(const UItemStaticData* ItemData = GetEquippedItemData())
		{
			if(ItemData->CharacterAnimationData.CrouchIdleAnimationAsset)
			{
				return ItemData->CharacterAnimationData.CrouchIdleAnimationAsset;
			}
		}
		
		FCharacterData Data = IOECharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{
			return Data.CharacterAnimDataAsset->CharcaterAnimationData.CrouchIdleAnimationAsset;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharcaterAnimationData.CrouchIdleAnimationAsset : nullptr;
}
