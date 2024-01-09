// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstances/IOE_AnimInstance.h"
#include "IOECharacter.h"
#include "IOE_GameTypes.h"
#include "Animation/AnimSequenceBase.h"
#include "Animation/BlendSpace.h"
#include "DataAssets/CharacterDataAsset.h"
#include "DataAssets/CharacterAnimDataAsset.h"

//TO REFACTOR AND OPTIMIZE!

UBlendSpace* UIOE_AnimInstance::GetLocomotionBlendSpace() const
{
	if (AIOECharacter* IOECharacter = Cast<AIOECharacter>(GetOwningActor()))
	{
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
		FCharacterData Data = IOECharacter->GetCharacterData();

		if (Data.CharacterAnimDataAsset)
		{
			return Data.CharacterAnimDataAsset->CharcaterAnimationData.CrouchIdleAnimationAsset;
		}
	}
	return DefaultCharacterAnimDataAsset ? DefaultCharacterAnimDataAsset->CharcaterAnimationData.CrouchIdleAnimationAsset : nullptr;
}
