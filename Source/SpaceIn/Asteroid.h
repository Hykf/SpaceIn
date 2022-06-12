// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Asteroid.generated.h"

UCLASS()
class SPACEIN_API AAsteroid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroid();
	virtual void BeginPlay() override;
protected:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	float health = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	float damage = 105;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovementComponent;

};
