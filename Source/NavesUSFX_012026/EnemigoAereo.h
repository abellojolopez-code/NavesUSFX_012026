// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"   
#include "EnemigoAereo.generated.h"

UCLASS()
class NAVESUSFX_012026_API AEnemigoAereo : public AEnemigo
{
    GENERATED_BODY()

public:
    
    AEnemigoAereo();

protected:
    
    virtual void BeginPlay() override;

public:
    
    virtual void Tick(float DeltaTime) override;

    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
    float VelocidadVuelo;
};