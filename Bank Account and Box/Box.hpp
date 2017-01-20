/***********************************************************
 * Author: Adam Kniffin
 * Date: 10/22/15
 * Description: This is the header file for the Box class.
 * Inside of the class we using mutator functions to set the
 * height, width, and length, and then have 2 accessor functions
 * that calculate the surface area, and area of the box.
 * ***********************************************************/
#include <iostream>

using namespace std;

#ifndef BOX_H
#define BOX_H

class Box
{
public:
   //Constructor Functions
   Box(); //Default Constructor
   Box(double, double, double); //Overload constructor

   //Mutator Functions
   void setHeight(double);//set height with a double parameter
   void setWidth(double); //set width with a double parameter
   void setLength(double);//set length with a double parameter
   
   //Accessor / Action Functions
   double getVolume(); //Returns the volume of the box
   double getSurfaceArea(); //Returns the surface area of the box

private:
   //Member Variables
   double newHeight; //Define variable newHeight
   double newWidth; //Define variable newWidth
   double newLength;//Define variable newLength
};
#endif
