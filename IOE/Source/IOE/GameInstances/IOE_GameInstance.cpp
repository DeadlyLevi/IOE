// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstances/IOE_GameInstance.h"
#include "AbilitySystemGlobals.h"

void UIOE_GameInstance::Init()
{
	Super::Init();

	UAbilitySystemGlobals::Get().InitGlobalData();
}
