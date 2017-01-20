/*****************************************************
** Author: Adam Kniffin
** Date: 10/19/2015
** Description: This program takes 3 integer values that are passed to the
** function smallSort by reference. The function then sorts each integer
** into ascending order. 
******************************************************************/
#include <iostream>
using namespace std;

void smallSort(int&, int&, int&);//Function declaration with parameters of 3 integers passed in by reference

/*int main()
{
   int a = 200;
   int b = -20;
   int c = 1;

   smallSort(a, b, c);//call the smallSort function passing in the integer values a,b,c

   cout << a << ", " << b << ", " << c << "." << endl;
 
   return 0;
}*/
/*****************************************************************
 * Function smallSort. Three int values are passed in by referenced
 * and they are assorted into ascending order. It is a void statement
 * and nothing is return.
 * ***************************************************************/
void smallSort(int& newNum1, int& newNum2, int& newNum3)
{
   int min;//declare min variable
   int middle; //declare middle variable
   int max;//declare max variable

   min = newNum1;//Initialize the minimum integer value to the first number passed in by reference
   max = newNum1;//Initialize the maximum integer value to the first number passed in by reference.

   //If statements to find minimum integer value
   if(newNum2 < min)
   {
	min = newNum2;
   }
   if(newNum3 < min)
   {
	min = newNum3;
   }
   
   //If statements to find maximum integer value
   if(newNum2 > max)
   {
    	max = newNum2;
   }
   if(newNum3 > max)
   {
	max = newNum3;
   }

   //If statements to find middle integer value
   if((newNum1 != min && newNum1 != max))
   {
	middle = newNum1;
   }
   if((newNum2 != min && newNum2 != max))
   {
	middle = newNum2;
   }
   if((newNum3 != min && newNum3 != max))
   {
	middle = newNum3;
   }
   //Now that we have our min, middle, and max set, we can put them back into ascending order.
   newNum1 = min;
   newNum2 = middle;
   newNum3 = max;
}	
