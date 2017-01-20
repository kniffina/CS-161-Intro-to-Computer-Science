/*************************
**Author: Adam Kniffin
**Date: 10/1/2015
**Description: This program allows a user to input 5 numbers and then averages
**them and displays the information.
*****************************/

#include<iostream>

using namespace std;

//int main - prompts user to input 5 numbers
//Averages the numbers and displays the value.
int main() 
{
   double  num1, num2, num3, num4, num5, average;

   cout <<"Please enter five numbers." << endl;
   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
   cin >> num5;

   average = (num1 + num2 + num3 + num4 + num5)/ 5;

   cout << "The average of those numbers is:" << endl  << average << endl;

  return 0;
}
