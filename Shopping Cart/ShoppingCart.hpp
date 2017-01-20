/********************************************************************************
 * Author: Adam Kniffin
 * Date: 11/17/2015
 * Description: This is the header file for the ShoppingCart class. It contains
 * constructors, accessor functions, mutator functions, and member variables.
 * The ShoppingCart class also contains the Item class and uses it to expand on what
 * it can do.
 * ************************************************************************************/
#include "Item.hpp"

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

class ShoppingCart
{
public:
   //Constructors
   ShoppingCart();//Default Constructor
   
   void addItem(Item *);//addItem returns nothing and has an Item pointer parameter

   double totalPrice();//totalPrice has no param and returns the total price of the 
		       //items in the shoppingcart
private:
   //Member Variables
   Item *inv[100];
   int arrayEnd;
};

#endif  
