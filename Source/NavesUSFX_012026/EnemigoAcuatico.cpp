// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAcuatico.h"

AEnemigoAcuatico::AEnemigoAcuatico()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadNado = 100.0f;
}

void AEnemigoAcuatico::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoAcuatico::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Movimiento simple en el eje Y simulando nado
    FVector NuevaPosicion = GetActorLocation() + FVector(0, VelocidadNado * DeltaTime, 0);
    SetActorLocation(NuevaPosicion);
}