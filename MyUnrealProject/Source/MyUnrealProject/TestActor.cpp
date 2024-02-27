// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
    CreateAmmoConfigObject();
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    FVector ActorLocation = GetActorLocation();
    FVector ActorVelocity = GetVelocity();
    MyFloatParameter = ActorVelocity.Z;
    PrintFloatParameter();
}

void ATestActor::PrintFloatParameter()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("MyFloatParameter: %f"), MyFloatParameter));
}

void ATestActor::CreateAmmoConfigObject()
{
    if (AmmoConfigClass)
    {
        UMyAmmoConfig* AmmoConfig = NewObject<UMyAmmoConfig>(this, AmmoConfigClass);
        if (AmmoConfig)
        {
            AmmoConfig->AmmoDamage = 50.0f;
            AmmoConfig->AmmoSpeed = 100.0f;
            UE_LOG(LogTemp, Warning, TEXT("AmmoConfig created: Damage=%f, Speed=%f"), AmmoConfig->AmmoDamage, AmmoConfig->AmmoSpeed);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create AmmoConfig object"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("AmmoConfigClass is not set"));
    }
}

