#include <iostream>
using namespace std;

class Account
{
public:
	
	// Declare variables
	int id;
	double balance, annual_interest_rate;

	// no-arg constructor that created a default account
	Account()
	{
		id = 0;
		balance = 0;
		annual_interest_rate = 0;
	}
	
	// user-defined constructors
	Account(int id_1, double balance_1, double annual_1)
	{
		id = id_1;
		balance = balance_1;
		annual_interest_rate = annual_1;
	}

	// A function that returns monthly interest rate
	double getMonthlyInterestRate()
	{
		return annual_interest_rate / 12;
	}

	// function that keeps track of withdraws
	void withdraw(double amount)
	{
		balance -= amount;
	}

	// function that keeps track of deposits
	void deposit(double amount)
	{
		balance += amount;
	}
	 
};
int main()
{
	// create and initializing an object for account

	Account account_1 = Account(1122, 20000, 4.5);

	// Cheking for when money is being withdraw and deposit
	account_1.withdraw(2500);
	account_1.deposit(3000);

	// display the results 

	cout << "The balance for the account is " << account_1.balance << endl;
	cout << "The monthly interest rate is " << account_1.getMonthlyInterestRate() << endl;
}