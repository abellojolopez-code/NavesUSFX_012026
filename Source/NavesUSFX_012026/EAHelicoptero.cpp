// Fill out your copyright notice in the Description page of Project Settings.


#include "EAHelicoptero.h"

AEAHelicoptero::AEAHelicoptero()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadRotor = 500.0f;
}

void AEAHelicoptero::BeginPlay()
{
    Super::BeginPlay();
}

void AEAHelicoptero::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector NuevaPosicion = GetActorLocation() + FVector(0, 0, VelocidadVuelo * DeltaTime);
    SetActorLocation(NuevaPosicion);
}