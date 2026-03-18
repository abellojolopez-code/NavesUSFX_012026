// Copyright Epic Games, Inc. All Rights Reserved.


#include "NavesUSFX_012026GameModeBase.h"
#include "Enemigo.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "EAAvion.h"
#include "EAHelicoptero.h"
#include "EADron.h"
#include "Soldado.h"
#include "Tanque.h"
#include "Camion.h"
#include "Blindado.h"
#include "Submarino.h"
#include "Barco.h"
#include "Lancha.h"
#include "MotoAcuatica.h"

TArray<AEnemigo*> PrimeraCuadrilla;
FTimerHandle TimerHandleCheck;

void ANavesUSFX_012026GameModeBase::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    FActorSpawnParameters Parametros;

    
    PrimeraCuadrilla.Add(World->SpawnActor<ASoldado>(ASoldado::StaticClass(), FVector(-400, 0, 200), FRotator::ZeroRotator, Parametros));
    PrimeraCuadrilla.Add(World->SpawnActor<ATanque>(ATanque::StaticClass(), FVector(-200, 0, 200), FRotator::ZeroRotator, Parametros));
    PrimeraCuadrilla.Add(World->SpawnActor<ACamion>(ACamion::StaticClass(), FVector(0, 0, 200), FRotator::ZeroRotator, Parametros));
    PrimeraCuadrilla.Add(World->SpawnActor<ABlindado>(ABlindado::StaticClass(), FVector(200, 0, 200), FRotator::ZeroRotator, Parametros));

    PrimeraCuadrilla.Add(World->SpawnActor<ASubmarino>(ASubmarino::StaticClass(), FVector(-400, 500, -100), FRotator::ZeroRotator, Parametros));
    PrimeraCuadrilla.Add(World->SpawnActor<ABarco>(ABarco::StaticClass(), FVector(-200, 500, 0), FRotator::ZeroRotator, Parametros));
    PrimeraCuadrilla.Add(World->SpawnActor<ALancha>(ALancha::StaticClass(), FVector(0, 500, 0), FRotator::ZeroRotator, Parametros));
    PrimeraCuadrilla.Add(World->SpawnActor<AMotoAcuatica>(AMotoAcuatica::StaticClass(), FVector(200, 500, 0), FRotator::ZeroRotator, Parametros));

    
    GetWorldTimerManager().SetTimer(TimerHandleCheck, this, &ANavesUSFX_012026GameModeBase::CheckPrimeraCuadrilla, 2.0f, true);

   
    for (AEnemigo* Enemigo : PrimeraCuadrilla)
    {
        if (Enemigo)
        {
            FTimerHandle TempHandle;
            GetWorldTimerManager().SetTimer(
                TempHandle,
                [Enemigo]() { if (Enemigo) Enemigo->Destroy(); },
                10.0f, 
                false
            );
        }
    }
}

void ANavesUSFX_012026GameModeBase::CheckPrimeraCuadrilla()
{
    
    for (AEnemigo* Enemigo : PrimeraCuadrilla)
    {
        if (Enemigo && !Enemigo->IsPendingKill())
        {
            return; 
        }
    }

    
    UWorld* World = GetWorld();
    if (!World) return;

    FActorSpawnParameters Parametros;

    World->SpawnActor<AEAAvion>(AEAAvion::StaticClass(), FVector(-400, -500, 600), FRotator::ZeroRotator, Parametros);
    World->SpawnActor<AEAHelicoptero>(AEAHelicoptero::StaticClass(), FVector(-200, -500, 500), FRotator::ZeroRotator, Parametros);
    World->SpawnActor<AEADron>(AEADron::StaticClass(), FVector(0, -500, 400), FRotator::ZeroRotator, Parametros);

    
    GetWorldTimerManager().ClearTimer(TimerHandleCheck);
}