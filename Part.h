//
//  Part.h
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#ifndef Part_h
#define Part_h

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


enum class ComponentType{head, arm, locomotor, torso, battery};

class Part{
     public:
            Part(string name,
                 int partUPC,
                 double cost,
                 double weight,
                 string description,
                 ComponentType type):
    
                 name(name),
                 partUPC(partUPC),
                 cost(cost),
                 weight(weight),
                 description(description),
                 componentType(type) {}
    
    
    
    
    string getName();
    int getUPC();
    double getWeight();
    double getCost();
    string getDescription();
    
    
protected:
    string name;
    int partUPC;
    double cost;
    double weight;
    string description;
    ComponentType type;
    
};



#endif /* Part_h */
