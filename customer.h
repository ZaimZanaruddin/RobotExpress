//
//  customer.h
//  
//
//  Created by Zaim Zanaruddin on 10/19/16.
//
//

#ifndef customer_h
#define customer_h

#include "order.h"
#include <string>
#include <vector>


class Customer {
    
public:
    
    Customer(string Name, int CustomerNum) : name(Name), customerNumber(CustomerNum) {}
    
    string cust_to_string();
    string getName();
    int getCustomerNumber();
    void add_order(Order info);
    
    
    vector<int> orders;
    
private:
    
    string name;
    int customerNumber;
    
    
    
};

#endif /* customer_h */
