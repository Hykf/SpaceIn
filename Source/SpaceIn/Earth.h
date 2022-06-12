// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Earth.generated.h"

UCLASS()
class SPACEIN_API AEarth : public AActor
{
	GENERATED_BODY()
	
public:	
	AEarth();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	float health = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Components",meta = (AllowPrivateAccess = "true"))
	USphereComponent* SphereComponent;
	

};
