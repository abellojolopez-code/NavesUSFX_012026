// Fill out your copyright notice in the Description page of Project Settings.


#include "EADron.h"

AEADron::AEADron()
{
    PrimaryActorTick.bCanEverTick = true;
    Agilidad = 2.0f; // factor de maniobra
}

void AEADron::BeginPlay()
{
    Super::BeginPlay();
}

void AEADron::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento zig-zag simulando agilidad
    FVector Posicion = GetActorLocation();
    Posicion += FVector(VelocidadVuelo * DeltaTime, FMath::Sin(GetWorld()->TimeSeconds * Agilidad) * 50, 0);
    SetActorLocation(Posicion);
}