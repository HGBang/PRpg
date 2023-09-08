// Fill out your copyright notice in the Description page of Project Settings.


#include "BRPG_DefaultPlayer.h"

ABRPG_DefaultPlayer::ABRPG_DefaultPlayer()
{
	PrimaryActorTick.bCanEverTick = true;


	// ĳ���� �޽� ���� , �������Ʈ���� ����.
	if (IsValid(mPlayerMeshAsset))
		GetMesh()->SetSkeletalMesh(mPlayerMeshAsset);

	// ĳ���� �ִϸ��̼� ���� , �������Ʈ���� ����
	if (IsValid(mPlayerAnimAsset))
		GetMesh()->SetAnimInstanceClass(mPlayerAnimAsset.GetClass());

	
	// ĳ���� ĸ�� ����
	GetCapsuleComponent()->SetCapsuleHalfHeight(92.f);

	// ĳ���� Mesh ����
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
