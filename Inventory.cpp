//
//  Inventory.cpp
//  
//
//  Created by Zaim Zanaruddin on 10/13/16.
//
//

#include <stdio.h>
#include "Inventory.h"
#include "Part.h"

string Inventory::getName()
{
    return i_name;
}


int Inventory::getUPC()
{
    return inventoryUPC;
}

double Inventory::getPrice()
{
    return i_price;
}




void Inventory::makeRobot(Part part)
{
    i_Parts.pushback(part);
}
