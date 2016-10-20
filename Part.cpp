//
//  Part.cpp
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#include <stdio.h>
#include "Part.h"


string Part::getName()
{
    return p_name;
}


int Part::getUPC()
{
    return p_partUPC;
}

double Part::getCost()
{
    return p_cost;
}


double Part::getWeight()
{
    return p_weight;
}

string Part::getDescription()
{
    return p_description;
}

int Part::number_of_parts()
{
    return num_parts;
}
