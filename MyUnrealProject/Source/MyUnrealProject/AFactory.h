// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Delegates/Delegate.h"
#include "TimerManager.h"
#include "Unit.h"
#include "AFactory.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnEvent, AUnit* , SpawnedUnit);
UCLASS()
class MYUNREALPROJECT_API AAFactory : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAFactory();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Factory")
	void SpawnUnit();
	UPROPERTY(BlueprintAssignable, Category = "Factory")
	FSpawnEvent UnitSpawned;
	
private:
	// The handle to the spawn timer
	FTimerHandle TimerHandle;
	void StartSpawnTimer();
};
