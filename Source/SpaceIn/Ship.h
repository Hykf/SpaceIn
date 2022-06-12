// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"
#include "Projectile.h"
#include "Ship.generated.h"

UCLASS()
class SPACEIN_API AShip : public APawn
{
	GENERATED_BODY()
	
public:	
	AShip();
	virtual void Tick(float DeltaTime) override;
protected:
	// Called when the game starts or when spawned

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	float speed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	float Dist=250;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	USphereComponent* SphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	UArrowComponent* ArrowComponent;

	UPROPERTY(EditDefaultsOnly,Category="Components")
	TSubclassOf<class AProjectile> ProjectileClass;

	virtual void Shoot();

};
