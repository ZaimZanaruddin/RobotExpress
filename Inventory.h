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
#inlcude "Part.h"


class Inventory {
    
public:
    Inventory(string name,double price, int inventoryUPC): i_name(name),i_price(price), i_inventoryUPC(inventoryUPC){}
    
    void makeRobot(Part);
    string getNAme();
    int getUPC();
    double getPrice();
    double Speed();
  
private:
    
    string i_name;
    int inventoryUPC;
    double i_price;
    vector<Part> *i_Parts;
    
    
    
};





#endif /* Inventory_h */
