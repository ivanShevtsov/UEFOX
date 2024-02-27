// Fill out your copyright notice in the Description page of Project Settings.


#include "AFactory.h"

// Sets default values
AAFactory::AAFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AAFactory::BeginPlay()
{
	Super::BeginPlay();
	StartSpawnTimer();
}

// Called every frame
void AAFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAFactory::SpawnUnit()
{
    FActorSpawnParameters SpawnParams;
    FVector SpawnLocation = GetActorLocation(); // ”кажите конкретную позицию спауна

    AUnit* NewUnit = GetWorld()->SpawnActor<AUnit>(AUnit::StaticClass(), SpawnLocation, FRotator::ZeroRotator, SpawnParams);

    if (NewUnit)
    {
        UnitSpawned.Broadcast(NewUnit);
    }
}

void AAFactory::StartSpawnTimer()
{
	GetWorldTimerManager().SetTimer(TimerHandle, this, &AAFactory::SpawnUnit, 2.0f, true);
}




