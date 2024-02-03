// Copyright Epic Games, Inc. All Rights Reserved.

#include "IOECharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystem/AttributeSets/IOE_AttributeSetBase.h"
#include "AbilitySystemLog.h"
#include "DataAssets/CharacterDataAsset.h"
#include "AbilitySystem/Components/IOE_AbilitySystemComponentBase.h"

#include "Net/UnrealNetwork.h"

#include "ActorComponents/IOE_CharacterMovementComponent.h"
#include "ActorComponents/FootstepsComponent.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AIOECharacter

AIOECharacter::AIOECharacter(const FObjectInitializer& ObjectInitializer) :
Super(ObjectInitializer.SetDefaultSubobjectClass<UIOE_CharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	// Ability System

	AbilitySystemComponent = CreateDefaultSubobject<UIOE_AbilitySystemComponentBase>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UIOE_AttributeSetBase>(TEXT("AttributeSet"));

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxMovementSpeedAttribute()).AddUObject(this, &AIOECharacter::OnMaxMovementSpeedChanged);

	FootstepsComponent = CreateDefaultSubobject<UFootstepsComponent>(TEXT("FootstepsComponent"));
}

void AIOECharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (IsValid(CharacterDataAsset))
	{
		SetCharacterData(CharacterDataAsset->CharacterData);
	}
}

void AIOECharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

FCharacterData AIOECharacter::GetCharacterData() const
{
	return CharacterData;
}

void AIOECharacter::SetCharacterData(const FCharacterData InCharacterData)
{
	CharacterData = InCharacterData;
	InitFromCharacterData(CharacterData);
}

UFootstepsComponent* AIOECharacter::GetFootstepsComponent() const
{
	return FootstepsComponent;
}

void AIOECharacter::OnRep_CharacterData()
{
	InitFromCharacterData(CharacterData, true);
}

void AIOECharacter::InitFromCharacterData(const FCharacterData& InCharacterData, bool bFromReplication)
{

}

//////////////////////////////////////////////////////////////////////////
// Input

void AIOECharacter::OnMoveForwardAction(const FInputActionValue& Value)
{
	const float Magnitude = Value.GetMagnitude();
	if (Controller != nullptr && Magnitude != 0.f)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// add movement 
		AddMovementInput(ForwardDirection, Magnitude);
	}
}

void AIOECharacter::OnMoveSideAction(const FInputActionValue& Value)
{
	const float Magnitude = Value.GetMagnitude();
	if (Controller != nullptr && Magnitude != 0.f)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(RightDirection, Magnitude);
	}
}

void AIOECharacter::OnTurnAction(const FInputActionValue& Value)
{
	// add yaw input to controller
	AddControllerYawInput(Value.GetMagnitude() * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AIOECharacter::OnLookUpAction(const FInputActionValue& Value)
{
	// add pitch input to controller
	AddControllerPitchInput(Value.GetMagnitude() * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AIOECharacter::OnJumpActionStarted(const FInputActionValue& Value)
{
	FGameplayEventData Payload;

	Payload.Instigator = this;
	Payload.EventTag = JumpEventTag;

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(this, JumpEventTag, Payload);
}

void AIOECharacter::OnJumpActionEnded(const FInputActionValue& Value)
{
	//StopJumping();
}

void AIOECharacter::OnCrouchActionStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(CrouchTags, true);
	}
}

void AIOECharacter::OnCrouchActionEnded(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->CancelAbilities(&CrouchTags);
	}
}

void AIOECharacter::OnSprintActionStarted(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->TryActivateAbilitiesByTag(SprintTags, true);
	}
}

void AIOECharacter::OnSprintActionEnded(const FInputActionValue& Value)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->CancelAbilities(&SprintTags);
	}
}

void AIOECharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Moving
		if (MoveForwardInputAction)
		{
			EnhancedInputComponent->BindAction(MoveForwardInputAction, ETriggerEvent::Triggered, this, &AIOECharacter::OnMoveForwardAction);
		}
		if (MoveSideInputAction)
		{
			EnhancedInputComponent->BindAction(MoveSideInputAction, ETriggerEvent::Triggered, this, &AIOECharacter::OnMoveSideAction);
		}

		// Looking
		if (TurnInputAction)
		{
			EnhancedInputComponent->BindAction(TurnInputAction, ETriggerEvent::Triggered, this, &AIOECharacter::OnTurnAction);
		}
		if (LookUpInputAction)
		{
			EnhancedInputComponent->BindAction(LookUpInputAction, ETriggerEvent::Triggered, this, &AIOECharacter::OnLookUpAction);
		}
		
		// Jumping
		if (JumpInputAction)
		{
			EnhancedInputComponent->BindAction(JumpInputAction, ETriggerEvent::Started, this, &AIOECharacter::OnJumpActionStarted);
			EnhancedInputComponent->BindAction(JumpInputAction, ETriggerEvent::Completed, this, &AIOECharacter::OnJumpActionEnded);
		}

		//Crouching
		if(CrouchInputAction)
		{
			EnhancedInputComponent->BindAction(CrouchInputAction, ETriggerEvent::Started, this, &AIOECharacter::OnCrouchActionStarted);
			EnhancedInputComponent->BindAction(CrouchInputAction, ETriggerEvent::Completed, this, &AIOECharacter::OnCrouchActionEnded);
		}

		//Sprinting
		if (SprintInputAction)
		{
			EnhancedInputComponent->BindAction(SprintInputAction, ETriggerEvent::Started, this, &AIOECharacter::OnSprintActionStarted);
			EnhancedInputComponent->BindAction(SprintInputAction, ETriggerEvent::Completed, this, &AIOECharacter::OnSprintActionEnded);
		}
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

UAbilitySystemComponent* AIOECharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

bool AIOECharacter::ApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> Effect, FGameplayEffectContextHandle InEffectContext)
{
	if (!Effect.Get()) return false;

	FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(Effect, 1, InEffectContext);
	if (SpecHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		return ActiveGEHandle.WasSuccessfullyApplied();
	}
	return false;
}

void AIOECharacter::PawnClientRestart()
{
	Super::PawnClientRestart();
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AIOECharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->RemoveActiveEffectsWithTags(InAirTags);
	}
}

void AIOECharacter::GiveAbilities()
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		for (auto DefaultAbility : CharacterData.Abilities)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(DefaultAbility));
		}
	}
}

void AIOECharacter::OnStartCrouch(float HalfHeightAdjust, float ScaleHalfHeightAdjust)
{
	Super::OnStartCrouch(HalfHeightAdjust, ScaleHalfHeightAdjust);

	if (!CrouchStateEffect.Get()) return;

	if (AbilitySystemComponent)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(CrouchStateEffect, 1, EffectContext);
		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			if (!ActiveGEHandle.WasSuccessfullyApplied())
			{
				ABILITY_LOG(Log, TEXT("Ability %s failed to apply crouch effect &s"), *GetName(), *GetNameSafe(CrouchStateEffect));
			}
		}
	}
}

void AIOECharacter::OnEndCrouch(float HalfHeightAdjust, float ScaleHalfHeightAdjust)
{
	if (AbilitySystemComponent && CrouchStateEffect.Get())
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(CrouchStateEffect, AbilitySystemComponent);
	}

	Super::OnStartCrouch(HalfHeightAdjust, ScaleHalfHeightAdjust);
}


void AIOECharacter::ApplyStartupEffects()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		for (auto CharacterEffect : CharacterData.Effects)
		{
			ApplyGameplayEffectToSelf(CharacterEffect, EffectContext);
		}

	}
}

void AIOECharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AbilitySystemComponent->InitAbilityActorInfo(this, this);

	GiveAbilities();
	ApplyStartupEffects();
}

void AIOECharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

void AIOECharacter::OnMaxMovementSpeedChanged(const FOnAttributeChangeData& Data)
{
	GetCharacterMovement()->MaxWalkSpeed = Data.NewValue;
}

void AIOECharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AIOECharacter, CharacterData);
}