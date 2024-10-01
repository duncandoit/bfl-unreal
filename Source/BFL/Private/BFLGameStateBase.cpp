// Fill out your copyright notice in the Description page of Project Settings.


#include "BFLGameStateBase.h"

TArray<APlayerState*> ABFLGameStateBase::ValidPlayerArray() const
{
	return PlayerArray;
}