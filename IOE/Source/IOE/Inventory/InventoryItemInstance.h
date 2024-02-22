// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IOE_GameTypes.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemInstance.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class IOE_API UInventoryItemInstance : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Init(TSubclassOf<UItemStaticData> InItemStaticDataClass);
		
	virtual bool IsSupportedForNetworking() const override {return true;};
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UItemStaticData* GetItemStaticData() const;
	
	UPROPERTY(Replicated)
	TSubclassOf<UItemStaticData> ItemStaticDataClass;

	UPROPERTY(ReplicatedUsing= OnRep_Equipped)
	bool bEquipped = false;

	UFUNCTION()
	void OnRep_Equipped();

	virtual void OnEquipped();
	virtual void OnUnequipped();

protected:
	UPROPERTY(Replicated)
	AItemActor* ItemActor = nullptr;
};
