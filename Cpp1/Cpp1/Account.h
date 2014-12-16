#pragma once
#include <time.h>  

class Account
{
public:
	Account();
	~Account();
	double getBalance();
	int getId();
	double getAnnualInterestRate();
	double getMonthlyInterestRate();
	char * getTime();
	void setId(int id);
	void setBalance(double balance);
	void setAnnualInterestRate(double annualInterestRate);

	void withDraw(double money);
	void deposit(double money);

private:
	int id;
	double balance;
	double annualInterestRate;
};