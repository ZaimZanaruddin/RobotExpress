
#ifndef view_h
#define view_h

#include "expressRobot.h"
#include "Part.h"
#include "inventory.h"
#include "Order.h"
#include "Customer.h"

using namespace std;


class view{
    
public:
    
    void printMenu();
    void printCreate();
    void printReport();
    void viewHeads(vector<head> heads);
    void viewArms(vector<arm> arms);
    void viewBatteries(vector<battery> batteries);
    void viewLocomotors(vector<locomotor> locomotors);
    void viewTorsos(vector<torso> torsos);
    void viewModels(vector<inventory> inventories);
    void viewCustomers(vector<customer> customers);
    void viewOrders(vector<orders> orders);



    
    
};
#endif /* view_h */
