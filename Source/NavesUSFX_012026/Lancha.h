// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAcuatico.h"
#include "Lancha.generated.h"

UCLASS()
class NAVESUSFX_012026_API ALancha : public AEnemigoAcuatico
{
    GENERATED_BODY()

public:
    ALancha();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lancha")
    float VelocidadMaxima;
};