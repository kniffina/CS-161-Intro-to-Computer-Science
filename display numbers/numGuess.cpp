/**********************************************
 * Author: Adam Kniffin
 * Date: 10/12/15
 * Description: This program prompts the user for a number to guess. It then 
 * asks another user to guess the number. It takes each guess into account
 * and tells the user if they are too high, or too low. It then displays
 * how many guesses it took to get the number correct.
 * ************************************************/
#include <iostream>

using namespace std;

int main()
{
   int answer;//variable to hold the integer answer
   int guess; //variable to hold the integer guess
   int counter = 0;//set counter to 0 so it can be incremented correctly

   cout << "Enter a number for the player to guess." << endl;
   cin >> answer;
   cout << "Enter your guess." << endl;
   cin >> guess;

   while (guess != answer) //set the loop to iterate as long as the guess
			   //does not equal the answer
   {
	if(guess > answer)//guess is too high
	{
		cout << "Too high - try again." << endl;
		counter++; //increment the counter by one
		cin >> guess;//enter a new guess
	}
	else if(guess < answer) // guess is too low
	{
		cout << "Too low - try again." << endl;
		counter++; //increment the counter one
		cin >> guess; //enter a new guess
	}
   }
   if(guess == answer) //If you guess the number correctly.
   {
	cout << "You guessed it in " << counter+1 << " tries." << endl;
        //add 1 to the counter to take into account for the guess at the beginning of the program
   }


   return 0;
}
