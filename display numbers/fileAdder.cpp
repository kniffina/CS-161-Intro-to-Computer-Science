/*********************************************
 * Author: Adam Kniffin
 * Date: 10/13/2015
 * Description: This program prompts the user for the name of a document
 * filled with integers. It then opens the program and adds all of the integers
 * to a sum variable. It then creates a new file named "sum.txt" where it 
 * shows the total sum of all the integers. 
 * **********************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   ifstream inputFile; //initializes the ifstream class to inputFile
   ofstream outputFile;  //initializses the ofstream class to outputFile
   string fileName; //stores the variable fileName
   int number; //used as a variable to filter through number in users txt doc 
   int sum = 0; // variable that counts the total of the integers

   cout << "Please enter the name of your file: " << endl;
   cin >> fileName;
   
   inputFile.open(fileName.c_str());

   if (inputFile)//If the txt document is found and able to open.
   {
	while(inputFile >> number)
	{
		sum += number; //adds all the numbers to the sum variable
	}
	inputFile.close(); //closes the input file
   }
   else //File could not be found.
   {
	cout << "could not access file." << endl;
   }

   outputFile.open("sum.txt"); //Creats output file named "sum.txt"
   outputFile << sum; //Adds the variable sum to the output file.
   outputFile.close(); //closes the outputfile.

   return 0;
}
