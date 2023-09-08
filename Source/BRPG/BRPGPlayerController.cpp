// Fill out your copyright notice in the Description page of Project Settings.


#include "BRPGPlayerController.h"

ABRPGPlayerController::ABRPGPlayerController()
{

}

void ABRPGPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//Key Binding
	InputComponent->BindAxis(TEXT("MoveFront"), this, &ABRPGPlayerController::MoveFrontKey);
    InputComponent->BindAxis(TEXT("MoveSide"), this, &ABRPGPlayerController::MoveSideKey);
	
	InputComponent->BindAction(TEXT("CameraRotationEnable"),EInputEvent::IE_Pressed,this, &ABRPGPlayerController::CameraRotationOn);


}



void ABRPGPlayerController::MoveFrontKey(float _Scale)
{
	GetPawn()->AddMovementInput(GetPawn()->GetActorForwardVector(), _Scale);
}

void ABRPGPlayerController::MoveSideKey(float _Scale)
{
	GetPawn()->AddMovementInput(GetPawn()->GetActorRightVector(), _Scale);
}

void ABRPGPlayerController::CameraRotationOn(float _Scale)
{
}
