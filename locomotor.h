//
//  locomotor.h
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#ifndef locomotor_h
#define locomotor_h


#include <string>


class locomotor : public Part {
    

public:
    locomotor(string name, int partUPC, double cost, double weight, string description, int maxSpeed)
    : Part(name, partUPC, weight, cost, description, type), maxSpeed(maxSpeed){}
    
    int powerConsumed();


private:
    int maxspeed;
    

};

#endif /* locomotor_h */



