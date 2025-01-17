#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IOE_GameTypes.h"
#include "CharacterDataAsset.generated.h"

UCLASS(BlueprintType, Blueprintable)
class IOE_API UCharacterDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly)
	FCharacterData CharacterData;
};
