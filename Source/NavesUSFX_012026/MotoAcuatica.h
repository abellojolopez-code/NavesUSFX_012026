// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAcuatico.h"
#include "MotoAcuatica.generated.h"

UCLASS()
class NAVESUSFX_012026_API AMotoAcuatica : public AEnemigoAcuatico
{
    GENERATED_BODY()

public:
    AMotoAcuatica();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MotoAcuatica")
    float VelocidadTurbo;
};