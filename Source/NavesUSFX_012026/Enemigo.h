// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class NAVESUSFX_012026_API AEnemigo : public AActor
{
    GENERATED_BODY()

public:
    AEnemigo();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* EnemigoMesh;

    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
    float Velocidad;
};