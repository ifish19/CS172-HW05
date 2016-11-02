#include"Account.h"

Account::Account()
{
	id = 0;
	balance = 0 ;
	annualInterestRate = 0;
}

Account::Account(string newName, int newId, double newBal)
{
	name = newName;
	id = newId;
	balance = newBal;
}

int Account::getId()
{
	return id;
}

void Account::setId(int newID)
{
	id = newID;
}

double Account::getBalance()
{
	return balance;
}

void Account::setBalance(double newBal)
{
	balance = newBal;
}

double Account::getAnnInterestRate()
{
	return annualInterestRate;
}

void Account::setAnnInterestRate(double newIR)
{
	annualInterestRate = newIR;
}

double Account::getMonthlyInterestRate()
{
	return annualInterestRate / 12;
}

double Account::withdraw(double amount)
{
	Transaction trans("W", amount, balance, "Desired Withdrawl");
	balance -= amount;
	transactions.push_back(trans);

	return amount;
}

void Account::deposit(double amount)
{
	Transaction trans("D", amount, balance, "Desired Deposit");
	balance += amount;
	transactions.push_back(trans);

}