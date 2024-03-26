// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IOE_GameTypes.h"
#include "Animation/AnimInstance.h"
#include "IOE_AnimInstance.generated.h"


class UItemStaticData;
UCLASS()
class IOE_API UIOE_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:

	const UItemStaticData* GetEquippedItemData() const;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	class UBlendSpace* GetLocomotionBlendSpace() const;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	class UAnimSequenceBase* GetIdleAnimation() const;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	class UBlendSpace* GetCrouchLocomotionBlendSpace() const;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	class UAnimSequenceBase* GetCrouchIdleAnimation() const;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
	class UCharacterAnimDataAsset* DefaultCharacterAnimDataAsset;

};
