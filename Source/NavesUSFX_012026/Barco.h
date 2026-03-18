// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAcuatico.h"
#include "Barco.generated.h"

UCLASS()
class NAVESUSFX_012026_API ABarco : public AEnemigoAcuatico
{
    GENERATED_BODY()

public:
    ABarco();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barco")
    int32 NumeroTripulantes;
};