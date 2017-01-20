/***************************************************************
* Author: Adam Kniffin
* Date: 10/30/15
* Description: This is the declaration file that has all of the
* constructors, accessor functions, and mutator functions. Each 
* individual function will be described in more detail below.
* ************************************************************/
#include<cmath>
#include"Point.hpp"

//Default constructor. Setting both member variables to 0 
Point::Point()
{
   xCoord = 0.0;//Set xCoord to 0.0
   yCoord = 0.0;//Set yCoord to 0.0
}

//Overload constructor. Allows for 2 member variables (x and y) to be passed
//into the point class creating 2 different coordinates using the set function
//which will be described below.
Point::Point(double x, double y)
{
   setXCoord(x);
   setYCoord(y);
}

//Mutator Function setXCoord sets member variable xCoord = to x
void Point::setXCoord(double x)
{
   xCoord = x;
}

//Mutator function setYCoord sets member variable yCoord = to y
void Point::setYCoord(double y)
{
   yCoord = y;
}

//Accessir function getXCoord returns the member variable xCoord
double Point::getXCoord()
{
   return xCoord;
}

//Accessor function getYCoord returns the member variable yCoord
double Point::getYCoord()
{
   return yCoord;
}

/***********************************************************************************************
 * function distanceTo takes in a point class by reference and returns a double.
 * The function does this by subtracting the first xCoord from the first point passed
 * into the function by reference and then subtracts that from the second xCoord. It is
 * then repeated for the yCoord and then the difference between the 2 x and y coordinates are 
 * multiplied by themselves, and then added together to get the distance between the two points.
 * *******************************************************************************************/
double Point::distanceTo(const Point& point2)
{
   double differenceOfX = xCoord - point2.xCoord;
   double differenceOfY = yCoord - point2.yCoord;
   return sqrt(differenceOfX * differenceOfX + differenceOfY * differenceOfY);
}
   
