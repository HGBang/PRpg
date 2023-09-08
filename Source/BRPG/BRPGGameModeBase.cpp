// Copyright Epic Games, Inc. All Rights Reserved.


#include "BRPGGameModeBase.h"
#include "Character/Player/BRPG_DefaultPlayer.h"

ABRPGGameModeBase::ABRPGGameModeBase()
{
	DefaultPawnClass = mPlayerClass;
	
}

void ABRPGGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}

void ABRPGGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void ABRPGGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	
}

void ABRPGGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABRPGGameModeBase::InitGameState()
{
	Super::InitGameState();
}
