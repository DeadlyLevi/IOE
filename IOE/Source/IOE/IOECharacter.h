// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "IOE_GameTypes.h"
#include "InputActionValue.h"
#include "ActorComponents/IOE_MotionWarpingComponent.h"

#include "IOECharacter.generated.h"

class UIOE_AbilitySystemComponentBase;
class UIOE_AttributeSetBase;

class UGameplayEffect;
class UGameplayAbility;

class UIOE_MotionWarpingComponent;
class UIOE_CharacterMovementComponent;

class UInventoryComponent;

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AIOECharacter : public ACharacter , public IAbilitySystemInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

public:
	AIOECharacter(const FObjectInitializer& ObjectInitializer);

	virtual void PostInitializeComponents() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input)
	float TurnRateGamepad = 100.f;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	bool ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> Effect, FGameplayEffectContextHandle InEffectContext);

	virtual void PawnClientRestart() override;

	virtual void Landed(const FHitResult& Hit) override;

	virtual void OnStartCrouch(float HalfHeightAdjust, float ScaleHalfHeightAdjust) override;

	virtual void OnEndCrouch(float HalfHeightAdjust, float ScaleHalfHeightAdjust) override;

	UIOE_MotionWarpingComponent* GetIOEMotionWarpingComponent() const;
	
	UInventoryComponent* GetInventoryComponent() const;
protected:

	void GiveAbilities();
	void ApplyStartupEffects();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	UPROPERTY(EditDefaultsOnly)
	UIOE_AbilitySystemComponentBase* AbilitySystemComponent;

	UPROPERTY(Transient)
	UIOE_AttributeSetBase* AttributeSet;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MotionWarp)
	UIOE_MotionWarpingComponent* IOEMotionWarpingComponent;
	
	UIOE_CharacterMovementComponent* IOECharacterMovementComponent;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	UFUNCTION(BlueprintCallable)
	FCharacterData GetCharacterData() const;

	UFUNCTION(BlueprintCallable)
	void SetCharacterData(const FCharacterData InCharacterData);

	class UFootstepsComponent* GetFootstepsComponent() const;

	void OnMaxMovementSpeedChanged(const FOnAttributeChangeData& Data);

protected:
	UPROPERTY(Replicated)
	FCharacterData CharacterData;

	void OnRep_CharacterData();

	virtual void InitFromCharacterData(const FCharacterData& InCharacterData, bool bFromReplication = false);
	
	UPROPERTY(EditDefaultsOnly)
	class UCharacterDataAsset* CharacterDataAsset;

	UPROPERTY(BlueprintReadOnly)
	class UFootstepsComponent* FootstepsComponent;

protected:

	// Mapping Context
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	// Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveForwardInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveSideInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* TurnInputAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CrouchInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SprintInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* EquipNextItemInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* EquipPrevItemInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* UnequipItemInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DropItemInputAction;

	// Actions
	void OnMoveForwardAction(const FInputActionValue& Value);

	void OnMoveSideAction(const FInputActionValue& Value);

	void OnTurnAction(const FInputActionValue& Value);

	void OnLookUpAction(const FInputActionValue& Value);

	void OnJumpActionStarted(const FInputActionValue& Value);

	void OnJumpActionEnded(const FInputActionValue& Value);

	void OnCrouchActionStarted(const FInputActionValue& Value);

	void OnCrouchActionEnded(const FInputActionValue& Value);

	void OnSprintActionStarted(const FInputActionValue& Value);

	void OnSprintActionEnded(const FInputActionValue& Value);

	void OnEquipNextItemInputAction(const FInputActionValue& Value);

	void OnEquipPrevItemInputAction(const FInputActionValue& Value);

	void OnUnequipItemInputAction(const FInputActionValue& Value);

	void OnDropItemInputAction(const FInputActionValue& Value);

	// Gameplay Events
protected:

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag JumpEventTag;

	// Gameplay Tags
protected:

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer InAirTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer CrouchTags;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer SprintTags;


	// Gameplay Effects
protected:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> CrouchStateEffect;

	// Delegates
protected:

	FDelegateHandle MaxMovementSpeedChangedDelegateHandle;

	// Inventory
protected:
	UPROPERTY(EditAnywhere, Replicated)
	UInventoryComponent* InventoryComponent = nullptr;
};

