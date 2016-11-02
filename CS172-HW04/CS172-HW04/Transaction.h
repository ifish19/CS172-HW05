#ifndef TRANSACTION_H
#define TRANSACTION_H
#include"Date.h"
#include<string>
using namespace std;

class Transaction
{
private:
	Date date;
	string type;
	double amount;
	double balance;
	string description;

public:
	Transaction(string typeN, double amountN, double balanceN, string descriptionN);
};

#endif