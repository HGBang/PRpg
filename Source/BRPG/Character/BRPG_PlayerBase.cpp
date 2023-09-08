// Fill out your copyright notice in the Description page of Project Settings.


#include "BRPG_PlayerBase.h"
#include "BRPG_PlayerBase.h"

ABRPG_PlayerBase::ABRPG_PlayerBase()
{
	PrimaryActorTick.bCanEverTick = true;

	//Create Component
	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Player_SpringArm"));
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player_Camera"));
	

	//Set Attachment
	mSpringArm->SetupAttachment(GetMesh());
	mCamera->SetupAttachment(mSpringArm);

	//Set Component Option
	mSpringArm->TargetArmLength = 1000.f;
	mSpringArm->SetRelativeLocation(FVector(0.0, 0.0, 150.0));
	mSpringArm->SetRelativeRotation(FRotator(-25.0, 90.0, 0.0));
	


}

void ABRPG_PlayerBase::BeginPlay()
{
	Super::BeginPlay();
}

void ABRPG_PlayerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
