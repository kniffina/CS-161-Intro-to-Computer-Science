#include "BankAccount.hpp"

int main()
{
   string name;
   string ID;
   double balance;
   double withdraw;
   double deposit;

   cout << "Please enter your name: " << endl;
   cin >> name;
   cout << "Please enter your ID number: " << endl;
   cin >> ID;
   cout << "Enter how much you would like to deposit: " << endl;
   cin >> balance;

   BankAccount myBank(name, ID, balance);

   cout << "You currently have " << myBank.getCustomerBalance() << " dollars in  your account."
	<< endl << "Hit 0 for withdraw, and 1 for deposit." << endl;

   string  decision;
   cin >> decision;

   while (decision != "2")
   {
	if (decision == "0")
	{
		cout << "Enter how much money you would like to withdraw: " << endl;
        	cin >> withdraw;

		myBank.withdraw(withdraw);
	}
	else if (decision == "1")
	{
		cout << "Enter how much money you would like to deposit: " << endl;
		cin >> deposit;

		myBank.deposit(deposit);
	}
   	cout << "Your balance is now: " << endl << myBank.getCustomerBalance() << endl << endl;
	cout << "Would you like to make any more transactions?" << endl
		<< "O for withdraw, 1 for deposit, 2 to exit." << endl << endl;
 	cin >> decision;
   }
   cout << "Thank you for your service, and have a great day!" << endl << endl;

   return 0;
}
   
