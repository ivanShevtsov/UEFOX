// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Damage.h"
#include "HealthComponent.h"
#include "Unit.generated.h"

UCLASS()
class MYUNREALPROJECT_API AUnit : public AActor  , public IDamage
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnit();

	UFUNCTION()
		void SpawnUnit();

	 void OnDamage_Implementation(float DamageAmount) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UBoxComponent* BoxComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UHealthComponent* HealthComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
