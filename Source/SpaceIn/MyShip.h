// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ship.h"
#include "MyShip.generated.h"

UCLASS()
class SPACEIN_API AMyShip : public AShip
{
	GENERATED_BODY()

public:
	AMyShip();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	void MoveLeft();
	void MoveRight();	
	void SetSpeed();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	class USplineComponent* SplineComponent;
};
