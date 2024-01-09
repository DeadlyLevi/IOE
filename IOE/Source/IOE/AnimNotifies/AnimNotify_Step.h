// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "IOE_GameTypes.h"
#include "AnimNotify_Step.generated.h"

/**
 * 
 */
UCLASS()
class IOE_API UAnimNotify_Step : public UAnimNotify
{
	GENERATED_BODY()
public:

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	
	UPROPERTY(EditAnywhere)
	EFoot Foot;

};