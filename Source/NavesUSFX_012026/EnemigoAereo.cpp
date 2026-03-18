// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAereo.h"

AEnemigoAereo::AEnemigoAereo()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadVuelo = 200.0f; // valor inicial
}

void AEnemigoAereo::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoAereo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento simple hacia adelante
    FVector NuevaPosicion = GetActorLocation() + FVector(VelocidadVuelo * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}