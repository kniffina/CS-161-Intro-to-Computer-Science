/******************************************************************************
 * Author: Adam Kniffin
 * Date: 11/16/2015
 * Description: This program contains the function definitions from the
 * Item class. Each function will contain more detail below.
 * ****************************************************************************/
#include <string>
#include "Item.hpp"

//Default Constructor uses each member variables set function to set each variable to 0
Item::Item()
{
   setName("");//set string to no elements
   setPrice(0.0);//set double to 0.0
   setQuantity(0);//set int to 0
}

/*****************************************************************************
 * 	Overload Function
 * takes in a string param, a double param, and an int param. The variables 
 * passed in are then set to each respective member variables set function
 * to define what they are equal to.
 * ***********************************************************************/
Item::Item(string n, double p, int q)
{
   setName(n);
   setPrice(p);
   setQuantity(q);
}

//setName takes in a string param and sets the member variable equal
//to whatever has been passed in
void Item::setName(string n)
{
   name = n;
}

//setPrice takes in a double param and sets the member variable equal
//to what has been passed in
void Item::setPrice(double p)
{
   price = p;
}

//SetQuantity takes in an int param and sets the member variable equal
//to what has been passed in
void Item::setQuantity(int q)
{
   quantity = q;
}

//getName returns the name variable
string Item::getName()
{
   return name;
}

//getPrice returns the price variable
double Item::getPrice()
{
   return price;
}

//getQuantity returns the quantity variable
int Item::getQuantity()
{
   return quantity;
}





