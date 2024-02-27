// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UMyAmmoConfig.generated.h"

/**
 * 
 */
UCLASS()
class MYUNREALPROJECT_API UMyAmmoConfig : public UObject
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo Configuration")
        float AmmoDamage;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ammo Configuration")
        float AmmoSpeed;

};
