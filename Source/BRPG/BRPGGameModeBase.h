// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameInfo.h"
#include "GameFramework/GameModeBase.h"
#include "BRPGGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BRPG_API ABRPGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABRPGGameModeBase();

protected:
	UPROPERTY(Category = "Player", EditAnyWhere, BlueprintReadWrite)
		TSubclassOf<class ABRPG_DefaultPlayer>	mPlayerClass;

public:
	virtual void PostLogin(APlayerController* NewPlayer);
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime);
	virtual void InitGameState();
	
};
