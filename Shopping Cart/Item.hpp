/**********************************************************************************************
 * Author: Adam Kniffin
 * Date: 11/15/2015
 * Description: This is the header file for the Item class. It contains
 * constructors, mutatator functions, accessor functions, and defines member variables
 * that will be used.
 * *************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#ifndef ITEM_HPP
#define ITEM_HPP

class Item
{
public: 
   //Constructors
   Item();//Default Constructor
   Item(string, double, int); //Overload constructor that takes a string
							 //a double and an int as its parameters
   //Mutator Functions
   void setName(string);//String parameter, no return
   void setPrice(double);//Double parameter and has no return
   void setQuantity(int);//Integer parameter and has no return

   //Accessor Functions
   string getName();//No parameters returns a string
   double getPrice();//NO parameters returns a string
   int getQuantity();//No parameters returns an int

private:
   //Declare Member variables
   string name;
   double price;
   int quantity;
};

#endif
