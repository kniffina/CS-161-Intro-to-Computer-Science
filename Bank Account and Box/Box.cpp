/********************************************************************
 * Author: Adam Kniffin
 * Date: 10/26/15
 * Description: This program has numerous different functions
 * that were declared in the hpp file "Box.hpp". Each individual function
 * is defined in more detail below. 
 * ******************************************************************/
#include "Box.hpp"

Box::Box() //Default Constructor
{
   //Set member variables to 1
   newHeight = 1;
   newWidth = 1;
   newLength = 1;
}

Box::Box(double height, double width, double length) //Overload Constructor
{
   //Define our member variables to be the variables that 
   //will be passed in, in our main function
   newHeight = height;
   newWidth = width;
   newLength = length;
}

//Mutator function to set our member variable newHeight
void Box::setHeight(double height)
{
   newHeight = height;
}

//Mutator function to set our member variable newWidth
void Box::setWidth(double width)
{
   newWidth = width;
}

//Mutator function to set our member variable newLength
void Box::setLength(double length)
{
   newLength = length;
}

/********************************************************************
 * getArea function takes in no parameters and returns the volume
 * of the box by multiplying the member variables newHeight, newWidth, 
 * and newLength by one another.
 * ******************************************************************/
double Box::getVolume()
{
   return newHeight * newWidth * newLength;
}

/*********************************************************************
 * getSurfaceArea function takes in no parameters and returns the surface
 * area of the box by multiplying the member variables as shown below.
 * ********************************************************************/
double Box::getSurfaceArea()
{
   return (2* ( newWidth * newLength)) + (2 * (newLength * newHeight)) + (2 * (newHeight * newWidth));
}


