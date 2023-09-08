// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "BRPG_CharacterBase.h"
#include "BRPG_PlayerBase.generated.h"

/**
 * 
 */
UCLASS()
class BRPG_API ABRPG_PlayerBase : public ABRPG_CharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABRPG_PlayerBase();

protected:
	UPROPERTY(Category = "Camera", VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<USpringArmComponent>	mSpringArm;

	UPROPERTY(Category = "Camera", VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UCameraComponent>	mCamera;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
