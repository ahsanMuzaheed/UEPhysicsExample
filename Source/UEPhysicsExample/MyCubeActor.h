// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "MyCubeActor.generated.h"

UCLASS()
class UEPHYSICSEXAMPLE_API AMyCubeActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyCubeActor(const class FObjectInitializer& PCIP);

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Parameters")
		float StartVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Parameters")
		float KSpring;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Parameters")
		float Damping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Parameters")
		bool bSubstepEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Physics Parameters")
		bool bEnableLogging;

private:
	void UpdateMotionAnalysis(float DeltaTime);

	class UMyStaticMeshComponent *Cube;
	UTextRenderComponent *DebugPanel;
};

