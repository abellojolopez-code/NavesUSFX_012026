// Fill out your copyright notice in the Description page of Project Settings.


#include "Blindado.h"

ABlindado::ABlindado()
{
    PrimaryActorTick.bCanEverTick = true;
    ResistenciaExtra = 300.0f; 
}

void ABlindado::BeginPlay()
{
    Super::BeginPlay();
}

void ABlindado::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

   
    FVector NuevaPosicion = GetActorLocation() + FVector((VelocidadMovimiento * 0.3f) * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}