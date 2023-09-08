// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "GameFramework/PlayerController.h"
#include "BRPGPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BRPG_API ABRPGPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABRPGPlayerController();

protected:
	virtual void SetupInputComponent() override;



private:
	void MoveFrontKey(float _Scale);
	void MoveSideKey(float _Scale);
	void CameraRotationOn(float _Scale);

	
};
