//
//  Inventory.h
//  
//
//  Created by Zaim Zanaruddin on 10/13/16.
//
//

#ifndef Inventory_h
#define Inventory_h
#include <string>
#include <vector>


using namespace std;

#include "Head.h"
#include "Locomotor.h"
#include "Arm.h"
#include "Torso.h"
#include "Battery.h"




class inventory {
    
public:
    
    
    
    inventory(string Name, int ModelNumber) : name(Name),
    modelNumber(ModelNumber) {}
    
    class noTorso {};
    class partAlreadySet {};
    
    double getPrice();
    string getName();
    int getModelNumber();
    double getPartsCost();
    void updatePrice(double newPrice);
    double getWeight();
  
    
    int getTorso();
    int getHead();
    int getLocomotor();
    int getBattery();
    int getMaxBatteries();
    int getnumOfArms();
    
    
    void setTorso(Torso tor);
    void setHead(Head part_head);
    void setLocomotor(Locomotor loco);
    void addArm(Arm arm);
    void setBatteries(Battery batteries);
    void setDescription(string des);
    string getDescription();
    
    vector<int> arms;
    
private:
    int torso;
    int head;
    int locomotor;
    int battery;
    string name;
    string description;
    int modelNumber;
    double price;
    int maxBatteries;
    int numOfArms=0;
    double partsCost = 0;
    double totalWeight = 0;
    
};

#endif
