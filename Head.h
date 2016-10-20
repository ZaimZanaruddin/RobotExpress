//
//  Head.h
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#ifndef Head_h
#define Head_h

#include <string>
#include "Part.h"

class head : public Part {
    
    
public:
    head(string name, int partUPC, double cost, double weight, string h_description, ComponentType type)
    : Part(name, partUPC, weight, cost, description, ComponentType) {}

    
};
#endif /* Head_h */
