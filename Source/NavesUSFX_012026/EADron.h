// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAereo.h"
#include "EADron.generated.h"

UCLASS()
class NAVESUSFX_012026_API AEADron : public AEnemigoAereo
{
    GENERATED_BODY()

public:
    AEADron();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dron")
    float Agilidad;
};
