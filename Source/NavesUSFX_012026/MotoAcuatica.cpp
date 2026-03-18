// Fill out your copyright notice in the Description page of Project Settings.


#include "MotoAcuatica.h"

AMotoAcuatica::AMotoAcuatica()
{
    PrimaryActorTick.bCanEverTick = true;
    VelocidadTurbo = 800.0f; 
}

void AMotoAcuatica::BeginPlay()
{
    Super::BeginPlay();
}

void AMotoAcuatica::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    
    FVector NuevaPosicion = GetActorLocation() + FVector(VelocidadTurbo * DeltaTime, 0, 0);
    SetActorLocation(NuevaPosicion);
}