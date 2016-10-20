//
//  customer.cpp
//  
//
//  Created by Zaim Zanaruddin on 10/19/16.
//
//

#include <stdio.h>

#include "customer.h"


string customer::getName() {
    
    return name;
}

int customer::getCustomerNumber() {
    
    return customerNumber;
    
}


void customer::add_order(Order info) {
    
    orders.push_back(info.get_num());
}

string customer::cust_to_string() {
    
    return name + " (" + to_string(customerNumber) + ")\n ";
    
}
