// Fill out your copyright notice in the Description page of Project Settings.


#include "EAAvion.h"

AEAAvion::AEAAvion()
{
    PrimaryActorTick.bCanEverTick = true;
    AlturaMaxima = 1000.0f;
}

void AEAAvion::BeginPlay()
{
    Super::BeginPlay();
}

void AEAAvion::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector Posicion = GetActorLocation();
    Posicion += FVector(VelocidadVuelo * DeltaTime, 0, 0);
    Posicion.Z = AlturaMaxima;
    SetActorLocation(Posicion);
}