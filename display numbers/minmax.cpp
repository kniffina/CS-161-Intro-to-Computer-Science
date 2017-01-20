/****************************************************
 * Author: Adam Kniffin
 * Date: 10/8/2015
 * Description: This program asks the user how many integers they would like to  * enter. It then allows the user to enter as many integers as 
 * specified. It then filters through each integer and prints the minimum integer value,
 * and the maximum integer value.
 * ******************************************************/

#include <iostream>

using namespace std;

int main()
{
   int min;//variable to hold minimum integer value
   int max;//variable to hold maximum integer value
   int numOfInts;//variable to hold amount of ints the user wants to enter
   int number;//variable used to store each specific guess in the for loop

   cout << "How many integers would you like to enter?" << endl;
   cin >> numOfInts;
   cout << "Pleae enter " << numOfInts << " integers." << endl;
   cin >> number;
   min = number;//set min equal to the first number entered
   max = number;//set max equal to the first number entered
   
   for(int i = 1; i < numOfInts; i++) // loop is set to 1 to account for the 
 				      //number already inputted.
   {
	cin >> number;
	if(number < min) //If the number is less then the number currently stored in the min variable
	{
		min = number; //set that number equal to the minimum value
	}
	if(number > max) //If the number is greater then the number currently stored in the max variable
	{
		max = number; //Set that number equal to the maximum value
	}
   }
   
   cout << "min: " << min << endl; //prints the minimum integer value
   cout << "max: " << max << endl; //prints the maximum integer value
  
   return 0;
}
