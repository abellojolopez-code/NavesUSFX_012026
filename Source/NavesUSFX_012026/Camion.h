// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "Camion.generated.h"

UCLASS()
class NAVESUSFX_012026_API ACamion : public AEnemigoTerrestre
{
    GENERATED_BODY()

public:
    ACamion();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camion")
    int32 CapacidadCarga;
};