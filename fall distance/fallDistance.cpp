/*********************************************************************************
** Author: Adam Kniffin
** Date: 10/18/2015
** Description: This program uses a function named fallDistance that takes
** in a variable double  as a parameter. The time variable is the amount of time it takes
** an object to hit the ground. Once the fallDistance function is called it returns the 
** amount the object has fallen in meters.
******************************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

double fallDistance(double); //Function declaration @ param double. Returns a double

/*int main()
{
   double time = 3; 
   cout << time << endl << endl;
   cout << fallDistance(time) << endl;
   return 0;
}
*/
/* ***************************************************************
 * This function takes a double as its parameter. The function then 
 * calculcates the distance that the object has fallen in meters. 
 * It then returns the distance fallen in maeters
 * ***************************************************************/
double fallDistance(double time)
{
   double distanceFallen;//variable to hold the end result of the distance fallen
   
   distanceFallen = (.5 * 9.8) * (pow(time, 2));

   return distanceFallen;//return the variable distanceFallen
}
