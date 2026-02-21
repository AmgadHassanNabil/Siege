// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNavLinkProxy.h"
#include "NavLinkCustomComponent.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"


AMyNavLinkProxy::AMyNavLinkProxy()
{
    bSmartLinkIsRelevant = true;
}
void AMyNavLinkProxy::Update(FVector StartLocation, FVector EndLocation) {
    UNavLinkCustomComponent* smartLinkComp = GetSmartLinkComp();
    if(smartLinkComp) {
        smartLinkComp->SetLinkData(StartLocation, EndLocation, ENavLinkDirection::BothWays);
    }
}