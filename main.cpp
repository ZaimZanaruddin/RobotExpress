#include "controller.h"
#include "library.h"
#incude "Part.h"

int main() {

    vector<head> heads;
    vector<arm> arms;
    vector<battery> batteries;
    vector<torso> torsos;
    vector<locomotor> locomotors;
    
    int userinput=1;
    
   
    while(userinput!=3)
    {
            cout<< "Express Robot's Main Menu" << endl;
            cout<< "1) Create a Robot "<<endl;
            cout<< "2) Exit shop"<<endl;
            cout<< "Your Selection: ";
            cin>> userinput;
        
        
        
        switch(userinput)
        {
            case 1:Part()
         
            case 2:
                cout <<"Thank you for vistiing Express Robots"<<endl;
                break;
        
        }
        
 
        
    }

}
