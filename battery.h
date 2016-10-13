//
//  battery.h
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#ifndef battery_h
#define battery_h

#include <string>
#include "Part.h"

class battery : public Part
{
    public:
    battery(string b_name, int b_partUPC, double b_cost, double b_weight, string b_description, int b_maxPower double energy)
    : Part(name, partUPC, weight cost descrption), b_maxPower(maxSpeed), b_energy(maxPower){}
    
    
    double getEnergy();
    double getMaxPower();
    
    
private:
    double b_energy;
    double b_maxPower;
    
    
};
#endif /* battery_h */
