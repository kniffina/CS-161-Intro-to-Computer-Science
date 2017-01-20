/************************************************************************
 * Author: Adam Kniffin
 * Date: 11/1/2015
 * Description: This is the header file for the LineSegment class. 
 * The .hpp file contains the function declarations and member variables
 * as well as the accessor and mutator functions. 
 * **********************************************************************/
#ifndef LINESEGMENT_HPP 
#define LINESEGMENT_HPP
#include"Point.hpp"

class LineSegment
{
public:
   //Overload Constructor
   LineSegment(Point, Point);//Overload constructor taking in 2 point variables
   
   //Accessor Functions
   Point getEnd1();//Takes in no param and returns a Point variable type
   Point getEnd2();//Takes in no param and returns a Point variable type
   
   //Mutator Functions
   void setEnd1(Point);//Takes in a point parameter and does not return anything
   void setEnd2(Point);//Takes in a point parameter and does not return anything
   
   //Other Functions  
   double length(); // function to get length of points
   double slope(); // function to return slope of line

private:
   //Member variables
   Point end1;//Declare member variable end1
   Point end2;//Declare member variable end2
}; 

#endif 
