// Copyright Epic Games, Inc. All Rights Reserved.


#include "NavesUSFX_012026GameModeBase.h"
#include "Enemigo.h"
#include "Engine/World.h"

void ANavesUSFX_012026GameModeBase::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    for (int32 i = 0; i < 20; i++)
    {
        FVector UbicacionSpawn(
            FMath::RandRange(-500, 500),
            FMath::RandRange(-500, 500),
            200
        );

        World->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), UbicacionSpawn, FRotator::ZeroRotator);
    }
}
