// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

<<<<<<< HEAD
<<<<<<< HEAD
	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play~~~"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));
>>>>>>> c906c9e ([Other] MyActor 클래스 리팩토링)
=======

	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play~~~"));

	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play!"));

>>>>>>> 7132353033317351a665f1830783b2fce7adac88
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

<<<<<<< HEAD
<<<<<<< HEAD
	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking~~~"));
=======
	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));
>>>>>>> c906c9e ([Other] MyActor 클래스 리팩토링)
=======

	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking~~~"));

	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!"));

>>>>>>> 7132353033317351a665f1830783b2fce7adac88
}

