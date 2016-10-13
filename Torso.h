//
//  Torso.h
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#ifndef Torso_h
#define Torso_h

#include "string" 
#include <vector>
#include "Part.h"
#include "head.h"
#include "battery.h"
#include "arm.h"
#include "locomotor.h"


class Torso: public Part {
    
    public:
    
    head *currentHead;
    vector<arm> currentArm;
    vector<battery> currentBattery;
    locomotor *currentLocomotor;
    
    battery(string t_name, int t_partUPC, double t_cost, double t_weight, string t_description, int t_batteries)
    : Part(name, partUPC, weight cost descrption), numOfBatteries(t_battereies){}
    
    
    
    int getBatteries();
    void addlocomotor(locomotor locomotor);
    void addBattery(battery battery);
    void addArm(arm arm);
    void addHead(head head);
    
    
    
    
    
private:
    
    int numOfBatteries;
    int numOfArms;
    
    
};

#endif /* Torso_h */
