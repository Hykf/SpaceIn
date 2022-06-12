// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ship.h"
#include "EnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class SPACEIN_API AEnemyShip : public AShip
{
	GENERATED_BODY()
	
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	virtual void Shoot() override;

	float random = 1;
};
