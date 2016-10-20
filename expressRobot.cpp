//
//  expressRobot.cpp
//  
//
//  Created by Zaim Zanaruddin on 10/12/16.
//
//

#include "expressRobot.h"
#include "orders.h"
#include "parts.h"
#include "inventory.h"


void expressRobot::createPart()
{
    string name;
    int UPCpart;
    ComponentType type;
    int type;
    double weight;
    double cost;
    string description;
    
    cout<<"Welcome to creating a New part"<<endl;
   
    cout<< "Name of part: "<endl;
    getline(cin, name, ':')
    
    

            cout << "UPC Number: ";
            cin >>UPCpart;
    
        
        
    
            cout << "Weight: ";
            cin >> weight;
    
        
        
    
            cout << "Cost: ";
            cin >> cost;
            
    
    
        
        cout << "Description: ";
        getline(cin, description,':');
        
    cout<<"1)Head"<<endl;
    cout<<"2)Arm"<<endl;
    cout<<"3)Locomotor"<<endl;
    cout<<"4)Torso"<<endl;
    cout<<"5)Battery"<<endl;
    
    cout<<"Component Type:"<<endl;
    
        
        while (type == NULL)
        {
            cin >> type;

            if (type > 5 || type < 1)
            {
                cout << "Integer must be between 1 and 5\n";
                type = NULL;
            }
            
        }
    
        if (type == 1)
        {
            head head(name, UPCpart, Type::head, weight, cost, description);
            heads.push_back(head);
            
        }
        else if (type == 2)
        {
            int speed = NULL;
            while (speed ==NULL)
            {
                cout << "Speed: ";
                cin >> speed;
                
                
            }
            arm arm(name, UPCpart, Type::arm, weight, cost, description, speed);
            arms.push_back(arm);
            
        }
        else if (type == 3)
        {
            
            int speed = NULL;
            while (speed == NULL)
            {
                cout << "Speed: ";
                cin >> speed;
                
                
            }
            locomotor locomotor(name,UPCpart, Type::locomotor, weight, cost, description, speed);
            locomotors.push_back(locomotor);
        }
        if (type == 4)
        {
            int battery = NULL;
            while (battery == NULL)
            {
                cout << "Number of battery Compartments: ";
                cin >> battery;
              
    
            }
            
            torso torso(name, UPCpart, Type::torso, weight, cost, description, battery);
            torsos.push_back(torso);
        }
        if (type == 5)
        {
            double energy = NULL;
            while (energy ==NULL)
            {
                cout << "Energy: ";
                cin >> energy;
                
            }
            
            double power = NULL;
            while (power == NULL)
            {
                cout << "Power: ";
                cin >> power;
            
                
            }
            
            Battery battery(name,UPCpart, ComponentType::battery, weight, cost, description, energy, power);
            batteries.push_back(battery);
        }
  
}

void expressRobot::createRobot()
{
    string name;
    
    double price = NULL;
    int partNumber;
    int UPCmodel = NULL;
    cout << "Enter Name:";
    getline(cin, name, ':');
    
    while (UPCmodel == NULL)
    {
        cout << "Enter Model Part Number:";
        cin >> UPCmodel;
        
        
        
    }
   
    inventory newInventory(name, UPCmodel);
    
    
    view.viewHeads(heads);
    
    cout << "Enter the part number of the desired head";
    cin >> UPCpart;
    
    
    view.viewArms(arms);
    int armNum = NULL;
    
    
    std::cout << "Enter the part number of the desired arm";
    cin >> partNumber;
            
    Head head = searchHeads(partNumber);
    newModel.setHead(head);
   
    
    
    view.viewLocomotors(locomotors);
    
    cout << "locomotor number:";
    cin >> partNumber;
          
        
    locomotor loco = searchLocomotors(partNumber);
    newModel.setLocomotor(loco);
    partAdded = true;
    
        
        
    
    
    view.viewTorsos(torsos);
    
   
            cout << "torso number:";
            cin >> partNumber;
         
       
            torso tor = searchTorsos(partNumber);
            newModel.setTorso(tor);
    
 
    
        
        
    
    view.viewBatteries(batteries);
    cout << "Battery number:";
    cin >> partNumber;
    Battery batt = searchBattery(partNumber);
    newModel.setBatteries(batt);
    

    printf("Total Part Cost:$%3.2f\n", newModel.getPartsCost());
    cout << "Enter Model Price:";
    cin >> price;
        
    
    newModel.updatePrice(price);
    
    cout << "Enter Description:";
    getline(cin, value,':');
    newModel.setDescription(value);
    
    models.push_back(newModel);

}

void expressRobot::createCustomer()
{
        string name;
        int num;
        num = customers.size()+1;
        
        printf("Enter Customer name: ");
        getline(cin, name, ':');
        Customer cust(name, num);
        customers.push_back(cust);
}

void Shop::createOrder()
{
    int num = orders.size() + 1;
    string value;
    int customerID;
    int UPCNum;
    
    
    Order od(num);
    view.viewCustomers(customers);
    cout << "Enter the ID of the customer: ";
    cin >> customerID;
    
    
    od.choose_customer(customerID);
    customers[customerID - 1].add_order(od);
    
    
    view.viewInventory(inventory);
    cout << "Enter the UPC of the desired Robot model:";
    cin >> modelNum;
   inventory mod = searchModels(modelNum);
    od.choose_inventory(mod);
    orders.push_back(od);

}

 
inventory expressRobot::searchinventory(int partNum)
{
    int length = inventory.size();
    int i;
    for (i = 0; i < length; i++)
    {
        if (inventory[i].getModelNumber() == partNum)
            return inventory[i];
    }
    
}

head expressRobot::searchHeads(int partNum) {
    
    int length = heads.size();
    int i;
    for (i = 0; i < length; i++)
    {
        if (heads[i].getPartNumber() == partNum)
            return heads[i];
    }
    
}

locomotor expressRobot::searchLocomotors(int partNum) {
    
    int length = locomotors.size();
    int i;
    for (i = 0; i < length; i++)
    {
        if (locomotors[i].getPartNumber() == partNum)
            return locomotors[i];
    }
    
    
}

torso expressRobot::searchTorsos(int partNum) {
    
    int length = torsos.size();
    int i;
    for (i = 0; i < length; i++)
    {
        if (torsos[i].getPartNumber() == partNum)
            return torsos[i];
    }
    
    
}
battery expressRobot::searchBattery(int partNum) {
    
    int length = batteries.size();
    int i;
    for (i = 0; i < length; i++)
    {
        if (batteries[i].getPartNumber() == partNum)
            return batteries[i];
    }
    
    
}

arm expressRobot::searchArms(int partNum) {
    
    int length = arms.size();
    int i;
    for (i = 0; i < length; i++)
    {
        if (arms[i].getPartNumber() == partNum)
            return arms[i];
    }
    
    
}



