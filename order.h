//
//  order.h
//  
//
//  Created by Zaim Zanaruddin on 10/19/16.
//
//

#ifndef order_h
#define order_h


#include "Part.h"


class customer;


class Order{
public:
    
      Order(int number)
    : OrderNumber(number){};
    
	   
    void choose_customer(int cust);
    void choose_RobotModel(inventory model);
    int get_num();
    
    double getSubtotal();
    double getTax();
    int getCustomer();
    double getWeight();
    void printOrder();
    
    void calculateShipping();
    void calculateTax();
    double totalPrice();
    
    
    
    vector<int> robotmodels;
    
private:
   
    int OrderNumber;
    
    double shipping = 0;
    double subtotal=0;
    double tax=0;
    double total = 0;
        
    
    string date;
    int customers;
    int salesassocs;
    double weight = 0;
    
    
};



#endif /* order_h */
