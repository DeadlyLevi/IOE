// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Components/ActorComponent.h"
#include "Inventory/InventoryList.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IOE_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	virtual void InitializeComponent() override;

	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;

	// Add
	UFUNCTION(BlueprintCallable)
	void AddItem(TSubclassOf<UItemStaticData> InItemStaticDataClass);

	UFUNCTION(BlueprintCallable)
	void AddItemInstance(UInventoryItemInstance* InItemInstance);

	//Remove
	UFUNCTION(BlueprintCallable)
	void RemoveItem(TSubclassOf<UItemStaticData> InItemStaticDataClass);
	
	// Equip
	UFUNCTION(BlueprintCallable)
	void EquipItem(TSubclassOf<UItemStaticData> InItemStaticDataClass);

	UFUNCTION(BlueprintCallable)
	void EquipItemInstance(UInventoryItemInstance* InItemInstance);

	// Unequip
	UFUNCTION(BlueprintCallable)
	void UnequipItem();

	// Drop
	UFUNCTION(BlueprintCallable)
	void DropItem(); 

	// Equip Next Selection
	UFUNCTION(BlueprintCallable)
	void EquipNext();

	// Equip Prev Selection
	UFUNCTION(BlueprintCallable)
	void EquipPrev();
	
	// Get ItemInstance of the current equipped item
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UInventoryItemInstance* GetEquippedItem() const;
	
	virtual void GameplayEventCallback(const FGameplayEventData* Payload);

	// Tags
	static FGameplayTag EquipItemActorTag;
	static FGameplayTag EquipNextTag;
	static FGameplayTag EquipPrevTag;
	static FGameplayTag UnequipTag;
	static FGameplayTag DropItemTag;

	
protected:

	UFUNCTION()
	void AddInventoryTags();
	
	UPROPERTY(Replicated)
	FInventoryList InventoryList;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UItemStaticData>> DefaultItems;

	UPROPERTY(Replicated)
	UInventoryItemInstance* CurrentItem = nullptr;

	FDelegateHandle TagDelegateHandle;

	void HandleGameplayEventInternal(FGameplayEventData Payload);

	UFUNCTION(Server, Reliable)
	void ServerHandleGameplayEvent(FGameplayEventData Payload);
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
