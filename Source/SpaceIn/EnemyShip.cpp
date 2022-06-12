// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerManager.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "EnemyShip.h"

 void AEnemyShip::Tick(float DeltaTime)
 {
    Super::Tick(DeltaTime);
    

}

void AEnemyShip::BeginPlay()
{
	Super::BeginPlay();
    random = FMath::RandRange(3,15);
    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this,&AEnemyShip::Shoot,random,false);
}

void AEnemyShip::Shoot()
{
    Super::Shoot();
    random = FMath::RandRange(5,15);
    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this,&AEnemyShip::Shoot,random,false);
}