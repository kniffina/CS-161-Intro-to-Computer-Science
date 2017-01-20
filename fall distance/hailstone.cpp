/***********************************************************
** Author: Adam Kniffin
** Date: 10/20/15
** Description: This program takes in an integer value as a parameter from int.
** It is then passed to hailstone where it determines if the integer is odd or
** even, and then uses a series of if statements until the integer reaches the
** value of 1. 
************************************************************/

#include <iostream>
using namespace std;

/*int hailstone(int); //Function declaration with int parameter and return an int value

int main()
{
   int startInt = 1;
   
   cout << hailstone(startInt) << endl;
   return 0;
}*/

/***********************************************************************************
 * hailstone function is passed in an integer value startInt. The function starts 
 * by initializing the counter to zero. If the integer that is passed in is divisible
 * by 2(even) then it is divided by 2 and reprocessed through the while loop. If it is 
 * NOT divisible by 2(odd) then the integer is multiplied by 3 and a value of 1 is added
 * to the counter. Once the variable is processed through the loop, each iteration a value 
 * of 1 is added to the counter. Once the variable is equal to 1, the function returns
 * the count value.
 * *********************************************************************************/
int hailstone(int startInt)
{
   int count = 0;//Initialize variable count to 0

   while(startInt != 1) //Loop as long as startInt does not equal 1
   {
	if(startInt % 2 == 0)//If startInt is even (divisible by 2)
	{
		startInt = startInt / 2; //divide that variable by 2
		count++;
	}
	else if(startInt & 2 != 0) //If startInt is NOT divisible by 2 (odd)
	{
		startInt = (startInt * 3) + 1;//multiply the variable by 3 and add 1
		count++;
	}
   }
   if(startInt == 1) // If startInt is equal to the integer 1
   {
	return count; //Return the amount of times it took to reach the integer value 1
   }
}
