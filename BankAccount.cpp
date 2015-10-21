#include "BankAccount.h"

BankAccount::BankAccount(string name, string number, double b)
{
	Name = name;
	accountNumber = number;
	balance = b;
}
void BankAccount::deposite(double amount)
{
	balance += amount;
}
void BankAccount::withdraw(double amount)
{
	if (amount <= balance)
	{
		balance -= amount;
	}
	else
	{
		cout<<"error" ;
	}
}
void BankAccount::Display()
{
  cout<<Name <<endl <<balance;
}
