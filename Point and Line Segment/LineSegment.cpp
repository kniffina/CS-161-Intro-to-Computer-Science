/***************************************************************************************
 * Author:Adam Kniffin
 * Date: 11/2/15
 * Description: This is the cpp file for the LineSegment class which contains
 * the Point class as well. The function definitionis and their purposes
 * are composed in this file and individual function notes are addressed below. 
 * ************************************************************************************/
#include "LineSegment.hpp"

//Overload Constructor taking in 2 point variables and using the set
//functions to initialize them
LineSegment::LineSegment(Point p1, Point p2)
{
   setEnd1(p1);
   setEnd2(p2);
}

//Mutator Function setEnd1 takes in a Point variable and sets end1 to p1
void LineSegment::setEnd1(Point p1)
{
   end1 = p1;
}

//Mutator function setEnd2 takes in a Point variable and sets end2 to p2
void LineSegment::setEnd2(Point p2)
{
   end2 = p2;
}

//Accessor function getEnd1 takes in no parameters and returns a Point variable end1
Point LineSegment::getEnd1()
{
   return end1;
}

//Accessor function getEnd2 takes in no parameters and returns a Point variable end2
Point LineSegment::getEnd2()
{
   return end2;
}

/*****************************************************************************************
 * function length uses the two member variables from the LineSegment class and the 
 * distanceTo function from the Point class to determine how far each point is from eachother.
 * ****************************************************************************************/
double LineSegment::length()
{
   return end1.distanceTo(end2);//Returns the length between end1 and end2 Point variables.
}

/*************************************************************************************
 * function slope uses the two variables end1 and end2 and the get functions from the 
 * Point class to retrieve each x and y respectively, and subtract them from the corresponding
 * endpoints. The y and x coordinate differences are then divided by eachother to get the slope of the
 * line.
 * ********************************************************************************/
double LineSegment::slope()
{
   double xDifference = end1.getXCoord() - end2.getXCoord();
   double yDifference = end1.getYCoord() - end2.getYCoord();
   return yDifference / xDifference;
}


