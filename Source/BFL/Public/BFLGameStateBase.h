// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BFLGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class BFL_API ABFLGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
		UFUNCTION(BlueprintPure)
		TArray<APlayerState*> ValidPlayerArray() const;
};
