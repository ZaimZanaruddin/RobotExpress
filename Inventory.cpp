//
//  Inventory.cpp
//  
//
//  Created by Zaim Zanaruddin on 10/13/16.
//
//

#include <stdio.h>
#include "inventory.h"
#include "Part.h"

double inventory::getPrice() {
    
    return price;
}

string inventory::getName() {
    return name;
}

int inventory::getModelNumber() {
    return modelNumber;
}

double inventory::getPartsCost() {
    
    return partsCost;
}

void inventory::updatePrice(double newPrice) {
    
    price = newPrice;
}

void inventory::setDescription(string des) {
    description = des;
}

string inventory::getDescription() {
    return description;
}



void inventory::setTorso(torso tor) {
   
    torso = tor.getPartNumber();
    maxBatteries = tor.max_batteries();
    partsCost += tor.getCost();
    totalWeight += tor.getWeight();
    
    
}

void inventory::setHead(head part_head){
    if (head != NULL) throw partAlreadySet{};
    
    head = part_head.getPartNumber();
    partsCost += part_head.getCost();
    totalWeight += part_head.getWeight();
    
    
    
}

void inventory::addArm(arm arm){
    if (numOfArms == 2) throw partAlreadySet{};
    
    arms.push_back(arm.getPartNumber());
    numOfArms++;
    partsCost += arm.getCost();
    totalWeight += arm.getWeight();
    
}

void inventory::setLocomotor(locomotor loco) {
    locomotor = loco.getPartNumber();
    partsCost += loco.getCost();
    totalWeight += loco.getWeight();
    
}

void inventory::setBatteries(battery batteries) {
    battery = batteries.getPartNumber();
    partsCost += batteries.getCost()*maxBatteries;
    totalWeight += batteries.getWeight()*maxBatteries;
}

double RobotModel::getWeight() {
    
    return totalWeight;
}
