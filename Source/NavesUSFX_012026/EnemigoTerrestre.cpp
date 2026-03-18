// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoTerrestre.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadMovimiento = 150.0f;
}

void AEnemigoTerrestre::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoTerrestre::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento simple en el eje X
    FVector NuevaPosicion = GetActorLocation() + FVector(VelocidadMovimiento * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}