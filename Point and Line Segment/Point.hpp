/*****************************************************************
*Author: Adam Kniffin
*Date: 10/31/2015
* Description: This is the header file for class Point. 
* There is variables and member function prototypes.
********************************************************************/

// Point.hpp

#ifndef POINT_HPP  //include directive'if not defined'- checks if
                   // header file has been entered
#define POINT_HPP  //include directive - checks existence of 
                   // POINT_HPP file when compiling
#include<string>
#include<cmath>

class Point
{
public: 
   //Constructors   
   Point();//Default constructor
   Point(double, double);//Overload Constructor    
  
   //Mutator Functions
   void setXCoord(double); //sets xCoordinate with a double as a param
   void setYCoord(double); //sets yCoordinate with a double as a param
   
   //Accessor Functions
   double getXCoord();//No param, returns a double    
   double getYCoord();//NO param, returns a double

   //Other Functions
   double distanceTo(const Point&);//Passes in a Point by reference, and 
				      //returns a double
private:
    //Member variables
    double xCoord;//Declare variable x
    double yCoord;//declare variable y
};

#endif
