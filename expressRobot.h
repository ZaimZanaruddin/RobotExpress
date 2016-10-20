//
//  expressRobot.h
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#ifndef expressRobot_h
#define expressRobot_h


#include <iostream>
#include <string>
#include <vector>

#include "customer.h"
#include "order.h"
#include "view.h"
#inlcude "Part.h"
#inlcude "inventory.h"
#include "head.h"
#include "arm.h"
#include "locomotor.h"
#include "torso.h"
#include "battery.h"


using namespace std;

class ExpressRobot{
    public:

    void createPart();
    void createRobot();
    void createCustomer();
    void createOrder();
    head searchHeads(int partNum);
    arm searchArms(int partNum);
    locomotor searchLocomotors(int partNum);
    torso searchTorsos(int partNum);
    battery searchBattery(int partNum);
    inventory searchModels(int partNum);
    

    
private:
    
    vector<head> heads;
    vector<locomotor> locomotors;
    vector<arm> arms;
    vector<battery> batteries;
    vector<torso> torsos;
    vector<inventory> inventories;
    vector<customer> customers;
    vector<Order> orders;
    view view;
};






#endif /* expressRobot_h */
