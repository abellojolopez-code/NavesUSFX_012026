// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"

UCLASS()
class NAVESUSFX_012026_API AEnemigoTerrestre : public AEnemigo
{
    GENERATED_BODY()

public:
    AEnemigoTerrestre();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
    float VelocidadMovimiento;
};