//
//  Part.h
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#ifndef Part_h
#define Part_h

#include <string>

using namespace std;

class Part{
     public:
            Part(string p_name,
                 int p_partUPC,
                 double p_cost,
                 double p_weight,
                 string p_description):
    
                 p_name(name),
                 p_partUPC(partUPC),
                 p_cost(cost),
                 p_weight(weight),
                 p_description(description) {}
    
    
    
    
    string getName();
    int getUPC();
    double getWeight();
    double getCost();
    string getDescription();
    
    
private:
    string name;
    int partUPC;
    double cost;
    double weight;
    string description;
    
};



#endif /* Part_h */
