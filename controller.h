//
//  controller.h
//  
//
//  Created by Zaim Zanaruddin on 10/17/16.
//
//


#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include "expressRobot.h"
#include "view.h"

using namespace std;

class Controller {
public:
    Controller (ExpressRobot& shop) : expressRobot(shop), view(View(expressRobot)) { }
    void cli();
    void execute_cmd(int cmd);


private:
    expressRobot expressRobot;
    view view;
};







#endif /* controller_h */
