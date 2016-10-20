#include "std_lib_facilities.h"
#include "controller.h"




void Controller::cli() {
    int cmd = -1;
    while (cmd != 0) {
        view.printMenu();
        cout << "Your Selection? ";
        cin >> cmd;
        cin.ignore(); // consume \n
        execute_cmd(cmd);
    }
}

void Controller::execute_cmd(int cmd) {
    if (cmd == 1) { // Create
        int createInput;
        view.printCreate();
        cout<<"Your Selection? ";
        cin>> createInput;
        cin.ignore();
        
       switch(createInput)
        {
            case 1:expressRobot.createOrder();
                break;
            case 2:expressRobot.createRobot();
                break;
            case 3:expressRobot.createCustomer();
                break;
            case 4:expressRobot.createPart();
                break;
            case 5:
                cout<<"Exiting Create Menu"<<endl;
                break;
        }
        
        
    if(cmd == 2) {
        int reportInput;
        view.printReport();
        cout<<"Your Selection? ";
        cin>>reportInput;
        cin.ignore();
        
        
        switch(createInput)
        {
            case 1:view.viewOrders();
                break;
            case 2:view.viewInventory();
                break;
            case 3:view.veiwCustomers();
                break;
            case 4:view.veiwParts();
                break;
            case 5:
                cout<<"Exiting Create Menu"<<endl;
                break;
        }
        
        
    if(cmd==3)
    {
        cout<<"Thank you for visiting Express Robots Shop. Come again"<<endl;
    }
   
            
            
}
        
