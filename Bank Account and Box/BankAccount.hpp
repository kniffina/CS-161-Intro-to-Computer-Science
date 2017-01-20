/************************************************************************
 * Author: Adam Kniffin
 * Date: 10/27/2015
 * Description: This is a header file for the class BankAccount. 
 * Inside of it are all of the declarations of functions and member variables
 * that are public and private.
 * ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount
{
public: 
   //Constructors
   BankAccount();//Default Constructor
   BankAccount(string, string, double);//Overload Constructor

   //Accessor Functions
   string getCustomerName();//Returns a string that is the customer's name
   string getCustomerID();//Returns a string that is the customer ID number
   double getCustomerBalance();//Returns a double that is the customer's total balance

   //Other Functions
   void withdraw(double);//Takes in a double as a parameter and decrements the amount withdrawn 
			 //to the total customer balance
   void deposit(double);//Takes in a double as a parameter and increments the amount deposited 
			//to the total customer balance
private:
   //Member variables
   string customerName;//Declare variable customerName
   string customerID;  //Declare variable customerID
   double customerBalance;//Declare variable customerBalance

};

#endif
