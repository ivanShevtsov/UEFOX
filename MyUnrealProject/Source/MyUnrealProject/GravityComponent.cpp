// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityComponent.h"

// Sets default values for this component's properties
UGravityComponent::UGravityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.SetTickFunctionEnable(true);
	
	// ...
}


// Called when the game starts
void UGravityComponent::BeginPlay()
{
	Super::BeginPlay();
	AActor* OwnerActor = GetOwner();
	if (OwnerActor) {
		USkeletalMeshComponent* OtherSkeletalMeshComponent = OwnerActor->FindComponentByClass<USkeletalMeshComponent>();
		if (OtherSkeletalMeshComponent)
		{
			OtherSkeletalMeshComponent->SetSimulatePhysics(true);
			OtherSkeletalMeshComponent->SetEnableGravity(true);
		}
	}
	// ...
	
}


// Called every frame
void UGravityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}





