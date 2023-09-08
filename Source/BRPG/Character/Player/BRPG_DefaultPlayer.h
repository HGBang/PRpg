// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../BRPG_PlayerBase.h"
#include "BRPG_DefaultPlayer.generated.h"

/**
 * 
 */
UCLASS()
class BRPG_API ABRPG_DefaultPlayer : public ABRPG_PlayerBase
{
	GENERATED_BODY()

public:
	ABRPG_DefaultPlayer();

protected:
	UPROPERTY(Category = "MeshAsset", EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USkeletalMesh>		mPlayerMeshAsset;

	UPROPERTY(Category = "AnimAsset", EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UAnimInstance>	mPlayerAnimAsset;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
