// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "Soldado.generated.h"

UCLASS()
class NAVESUSFX_012026_API ASoldado : public AEnemigoTerrestre
{
    GENERATED_BODY()

public:
    ASoldado();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Soldado")
    int32 Municion;
};