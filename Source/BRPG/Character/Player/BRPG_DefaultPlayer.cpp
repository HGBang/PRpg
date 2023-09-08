// Fill out your copyright notice in the Description page of Project Settings.


#include "BRPG_DefaultPlayer.h"

ABRPG_DefaultPlayer::ABRPG_DefaultPlayer()
{
	PrimaryActorTick.bCanEverTick = true;


	// 캐릭터 메시 지정 , 블루프린트에서 지정.
	if (IsValid(mPlayerMeshAsset))
		GetMesh()->SetSkeletalMesh(mPlayerMeshAsset);

	// 캐릭터 애니메이션 지정 , 블루프린트에서 지정
	if (IsValid(mPlayerAnimAsset))
		GetMesh()->SetAnimInstanceClass(mPlayerAnimAsset.GetClass());

	
	// 캐릭터 캡슐 세팅
	GetCapsuleComponent()->SetCapsuleHalfHeight(92.f);

	// 캐릭터 Mesh 세팅
	GetMesh()->SetRelativeLocation(FVector(0.0, 0.0, -92.f));
	GetMesh()->SetRelativeRotation(FRotator(0.0, -90.0, 0.0));

}

void ABRPG_DefaultPlayer::BeginPlay()
{
	Super::BeginPlay();
}

void ABRPG_DefaultPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
