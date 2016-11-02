#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
#include"Vector.h"
#include"Transaction.h"
using namespace std;

class Account
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<Transaction> transactions;

public:
	// Default account: id 0, balance 0, annualInterestRate 0
	Account(); 
	// Account with specified name, id, balance
	Account(string newName, int newId, double newBal);

	int getId();
	void setId(int newId);

	double getBalance();
	void setBalance(double newBal);

	double getAnnInterestRate();
	void setAnnInterestRate(double newIR);

	double getMonthlyInterestRate();

	// Withdraw specified amount
	double withdraw(double amount);
	// Deposit specified amount
	void deposit(double amount);

};

#endif