/****************************
** Author: Adam Kniffin
** Date: 10/1/2015
** Description: This program asks a user what the temperature is in celsius and then displays the equivalent temperature in fahrenheit.
*******************************/

#include<iostream>

using namespace std;

//Int Main - user enters celsius temperature and the program converts to 
//fahrenheit.

int main()
{
   double ctemp, ftemp;

   cout <<"Please enter Celsius temperature." << endl;
   cin >> ctemp;
   
   ftemp = (ctemp*1.8)+32;
   
   cout << "The equivalent Fahrenheit temperature is:" << endl 
	 << ftemp << endl;

   return 0;
}
