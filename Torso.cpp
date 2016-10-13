//
//  Torso.cpp
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#include <stdio.h>
#include <vector>
#include "Torso.h"



int Torso::getBatteries(){
    return numOfBatteries;
}

void Torso::addlocomotor(locomotor locomotor)
{
    currentLocomotor = &locomotor;
}



void Torso::addBattery(battery battery)
{
    if(numOfBatteries < 3)
    {
        currentBattery.push_back(battery);
        numOfBatteries=numOfBatteries+1;
    }
}


void Torso::addArm(arm arm)
{
    if(numOfArms<2)
    {
        currentArm.push_back(arm);
        numOfArms=numOfArms+1;
    }
    
    
}


void Torso: addHead(head head)
{
    currentHead = &head;
}
