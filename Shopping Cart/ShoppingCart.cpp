/*************************************************************************************
 * Author: Adam Kniffin
 * Date: 11/18/2015
 * Description: This program contains all of the functions as defined in 
 * SHoppingCart class .hpp file. Their descriptions are below.
 *****************************************************************************************/

#include <iostream>
#include "ShoppingCart.hpp"

//Default Constructor uses a for loop to set all the variables in the inv array to NULL. It then also sets the arrayEnd variable to 0/
ShoppingCart::ShoppingCart()
{
   for( int i = 0; i < 100; i++)
   {	
	inv[i] = NULL;
   }
   arrayEnd = 0;
}

/*****************************************************************************
 * 	addItem
 * takes an Item pointer defined as item (lowercase). It then sets the end of
 * the array equal to the item variable passed in.
 * **********************************************************************/
void ShoppingCart::addItem(Item *item)
{
   inv[arrayEnd] = item;
   arrayEnd++;
}
/***************************************************************************
 * 	totalPrice
 * totalPrice function loops through the array inv and,  by using the getPrice
 * and getQuantity function defined in Item.h, multiplies the quantity and
 * price together. The for loop goes through each item in the array and 
 * each time there is an itiration the sum of the quantity and price are added 
 * to the total. The total is then returned once the forloop is complete.
 * ********************************************************************/
double ShoppingCart::totalPrice()
{
   double total = 0.0;
 
   for (int i = 0; i < arrayEnd; i++)
   {
	total += (inv[i]->getPrice() * inv[i]->getQuantity());
   }
   return total;
}
