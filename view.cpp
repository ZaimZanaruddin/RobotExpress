#include "view.h"


void view::printMenu()
{
    cout<<"Express Robot's Main Menu" << endl;
    cout<<"-------------------------" << endl;
    cout<<"1) Create" <<endl;
    cout<<"2) View Reports"<<endl;
    cout<<"3) Exit shop"<<endl;
    cout<<"Your Selection: ";
}

void view:printCreate()
{
    
    cout<<"Create Main Menu"<<endl;
    cout<<"----------------"<<endl;
    cout<<"1)Create an Order"<<endl;
    cout<<"2)Create a Robot Model"<<endl;
    cout<<"3)Create a Customer"<<endl;
    cout<<"4)Create a Part"<<endl;
    cout<<"5)Exit back to main menu"<<endl;
    
}

void view::printReport()
{
    
    cout<<"Reports Main Menu"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"1)Orders"<<endl;
    cout<<"2)Robot Models"<<endl;
    cout<<"3)Customers"<<endl;
    cout<<"4)Parts"<<endl;
    cout<<"5)Exit back to main menu"<endl;
    
}

void view::list.parts() {
    cout << endl;
    cout << "----------------------------" << endl;
    cout << "List of Parts" << endl;
    cout << "----------------------------" << endl;
    for (int i=0; i<parts.number_of_parts(); ++i) {
        cout << i << ") " << Parts.name(i) << endl;
        cout<< Parts.
    }
}

void view::viewHeads(vector<head> heads)
{
    int length = heads.size();
    for (int i = 0; i < length; i++)
    {
        cout <<"Name :" << heads[i].getName() << "\nUPC Number: " << heads[i].getPartNumber() << "\nCost: "<<heads[i].getCost()<<endl;
    }
}

void View::viewArms(vector<arm> arms)
{
    int length = arms.size();
    for (int i = 0; i < length; i++)
    {
        cout << "Name :" << arms[i].getName() << "\nUPC Number: " << arms[i].getPartNumber() << "\nCost: " << arms[i].getCost() << endl;
    }
}
void View::viewLocomotors(vector<locomotor> locomotors)
{
    int length = locomotors.size();
    for (int i = 0; i < length; i++)
    {
        cout << "Name :" << locomotors[i].getName() << "\nUPC Number: " << locomotors[i].getPartNumber() << "\nCost: " << locomotors[i].getCost() << endl;
    }
}
void View::viewTorsos(vector<torso> torsos)
{
    int length = torsos.size();
    for (int i = 0; i < length; i++)
    {
        cout << "Name :" << torsos[i].getName() << "\nUCP Number: " << torsos[i].getPartNumber() << "\nCost: " << torsos[i].getCost() << endl;
    }
}
void View::viewBatteries(vector<battery> batteries)
{
    int length = batteries.size();
    for (int i = 0; i < length; i++)
    {
        cout << "Name :" << batteries[i].getName() << "\nUPC Number: " << batteries[i].getPartNumber() << "\nCost: " << batteries[i].getCost() << endl;
    }
}

void View::viewInventory(vector<inventory> inventories)
{
    cout << Inventories:" << endl;
    int length = inventories.size();
    for (int i = 0; i < length; i++)
    {
        cout << "Name: " << inventories[i].getName() << "\nPrice:$" << inventories[i].getPrice() << "\nDescription:" << inventories[i].getDescription()
        <<"\nModel Number: "<< inventories[i].getModelNumber() <<"\n"<< endl;
    }
}

void View::viewCustomers(vector<customer> customers)
{
    
    int i;
    int length = customer.size();
    cout << "Customers:" << endl;
    for (i = 0; i < length; i++)
    {
        cout << customer[i].cust_to_string();
    }
    cout << endl;
}

void View::viewOrders(vector<Order> list)
{
    
    int length = list.size();
    cout << "Orders:" << endl;
    for (int i = 0; i < length; i++)
    {
        
        list[i].printOrder();
    }
    cout << endl;
}

