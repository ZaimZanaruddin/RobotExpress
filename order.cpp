//
//  order.cpp
//  
//
//  Created by Zaim Zanaruddin on 10/19/16.
//
//

#include "order.h"

string order::getDate()
{
    return date;
}

double order::getShipping()
{
    return shipping;
}

double order::getSubtotal()
{
    return subtotal;
}

double order::getTax()
{
    return tax;
}

void order::choose_customer(int cust)
{
    customers = cust;
}

 
 void order::choose_inventory(Inventory model)
{
    inventories.push_back(model.getUPC());
    subtotal += model.getPrice();
    weight += model.getWeight();
}


void Order::calculateShipping()
{
    double cost_per_pound = 2.0;
    shipping = weight * cost_per_pound;
}

void Order::calculateTax()
{
    double taxes = .0825;
    tax = taxes*subtotal;
}

double Order::totalPrice()
{
    total = tax + shipping + subtotal;
    return total;
}
int Order::get_num()
{
	   return OrderNumber;
}

int Order::getCustomer()
{
	   return customers;
}


double Order::getWeight()
{
	   return weight;
}

