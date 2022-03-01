// Copyright Epic Games, Inc. All Rights Reserved.


#include "FPSProjectGameModeBase.h"

void AFPSProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	check(GEngine != nullptr);

	//Display a debug message for five seconds
	//The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));

	//Instruct player how to turn on and off lights
	GEngine->AddOnScreenDebugMessage(-1, 60.0f, FColor::Blue, TEXT("Walk towards the lights to turn them off, and away from them to turn them back on."));
}