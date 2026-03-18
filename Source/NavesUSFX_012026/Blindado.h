// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoTerrestre.h"
#include "Blindado.generated.h"

UCLASS()
class NAVESUSFX_012026_API ABlindado : public AEnemigoTerrestre
{
    GENERATED_BODY()

public:
    ABlindado();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blindado")
    float ResistenciaExtra;
};