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
    locomotor(string l_name, int l_partUPC, double l_cost, double l_weight, string l_description, int l_maxSpeed)
    : Part(name, partUPC, weight cost descrption), maxSpeed(maxSpeed){}


private:
    int maxspeed
    

};

#endif /* locomotor_h */



