/******************************************************************************
 * Author: Adam Kniffin
 * Date: 10/27/2015
 * Description: This cpp file contains the formal outline of the functions
 * and how they can be used inside of the main function. More descriptions will be 
 * included in each function that is declared.
 * ***************************************************************************/
#include "BankAccount.hpp"

BankAccount::BankAccount()//Default Constructor
{
   customerBalance = 0;//Since the strings are automatically set to 0 we only need 
					   //to set the variable customerBalance to 0
}

BankAccount::BankAccount(string name, string ID, double balance)//Overload Constructor
{
   //Set the member variables = to the variable they can be used in main
   customerName = name;
   customerID = ID;
   customerBalance = balance;
}

/*************************************************************
 * function getCustomerName is used just to return the member
 * variable getCustomerName
 * *******************************************************/
string BankAccount::getCustomerName()
{
   return customerName; //Returns the customerName
}

/*********************************************************
 * function getCustomerID is used to return the membervariable
 * customerID
 * ******************************************************/
string BankAccount::getCustomerID()
{
   return customerID;//Returns the customerID
}

/************************************************************
 * function getCustomerBalance is used to return the member
 * member variable customerBalance.
 * **********************************************************/
double BankAccount::getCustomerBalance()
{
   return customerBalance;//Returns the customerBalance 
}

/***********************************************************
 * the function withdraw takes in a double variable withdraw
 * as its parameter and decrements it from the customerBalance
 * variable.
 * *********************************************************/
void BankAccount::withdraw(double withdraw)
{
   customerBalance -= withdraw;//Subtracts withdraw from customerBalance
}

/************************************************************
 * the function deposit takes in a double variable deposit as its
 * parameter and increments that to the total of the customerBalance.
 * ***********************************************************/
void BankAccount::deposit(double deposit)
{
   customerBalance += deposit;//Adds deposit to customerBalance
}
