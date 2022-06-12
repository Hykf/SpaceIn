// Fill out your copyright notice in the Description page of Project Settings.

#include "MyShip.h"
#include "Components/SplineComponent.h"

AMyShip::AMyShip()
{
	PrimaryActorTick.bCanEverTick = true;

	SplineComponent  = CreateDefaultSubobject<USplineComponent >(TEXT("SplineComponent"));
	RootComponent = SplineComponent;
	
}

void AMyShip::BeginPlay()
{
	Super::BeginPlay();
	speed = 0;
}

void AMyShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	  //PlayerInputComponent->BindAction(TEXT("JakTOSieNazywaW_SettingsInput"),IE_Pressed/IE_Released,this,&AZjakiejKlasy::JakaFunkcje);
	  PlayerInputComponent->BindAction(TEXT("Left"),IE_Pressed,this,&AMyShip::MoveLeft);
	  PlayerInputComponent->BindAction(TEXT("Left"),IE_Released,this,&AMyShip::SetSpeed);

	  PlayerInputComponent->BindAction(TEXT("Right"),IE_Pressed,this,&AMyShip::MoveRight);
	  PlayerInputComponent->BindAction(TEXT("Right"),IE_Released,this,&AMyShip::SetSpeed);

	  PlayerInputComponent->BindAction(TEXT("Shoot"),IE_Released,this,&AMyShip::Shoot);

}

void AMyShip::MoveLeft(){
	speed -= 1500;
}

void AMyShip::MoveRight(){
	speed += 1500;
}

void AMyShip::SetSpeed()
{
	speed = 0;
}
	