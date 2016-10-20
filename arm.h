//
//  arm.h
//  
//
//  Created by Zaim Zanaruddin on 10/19/16.
//
//

#ifndef arm_h
#define arm_h

#include "Part.h"

class arm: public Part {
    
public:
    arm(string a_name, int UPCpart, double Weight, double Cost, string Description, int speed, ComponentType type) :
    RobotPart(Name, PartNumber, Weight, Cost, Description, type), Speed(speed) {};
    
    
    
    
    int powerConsumed();
    
private:
    int Speed;
    
    
};





#endif /* arm_h */
