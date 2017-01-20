/*******************************
** Author: Adam Kniffin
** Date: 7/5/2015
** Description: This program takes the amount of change you have and displays 
** how it would be represented with the fewest  total number of coins.
*******************************/

#include<iostream>

using namespace std;

//int main - User inputs change(less than a dollar) and the program outputs
//the way to give change back with the fewest coins.

int main ()
{
	int change, changeLeft;
	
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> change;

	cout << "Your change will be: " << endl;
	
   	cout << "Q: " << change / 25 << endl;
	changeLeft = change % 25;

	cout << "D: " << changeLeft / 10 << endl;
	changeLeft = changeLeft % 10;

	cout << "N: " << changeLeft / 5 << endl;
	changeLeft = changeLeft % 5;

	cout << "P: " << changeLeft / 1 << endl;
	
	return 0;
}  
   
  
