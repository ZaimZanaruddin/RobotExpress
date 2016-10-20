#include "controller.h"
#inlcude "expressRobot.h"
#include <stdio.h>


int main () {
   
    ExpressRobot expressRobot;
    Controller controller(expressRobot);
    controller.cli();
}


