// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "IOE_CharacterMovementComponent.generated.h"

class UAbilitySystemComponent;
class UGameplayAbility;

UCLASS()
class IOE_API UIOE_CharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
public: 
	bool TryTraversal(UAbilitySystemComponent* ASC);

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UGameplayAbility>> TraversalAbilitiesOrdered;

};
