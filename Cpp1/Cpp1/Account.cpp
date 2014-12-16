#include "Account.h"
#include<time.h>
#include <string>

Account::Account()
{
	this->id = 0;
	this->balance = 0;
	this->annualInterestRate = 0;
	
}
double Account::getBalance()
{
	return balance;
}
char * Account::getTime()
{
	char *t;
	const time_t tt = time(NULL);
	t = ctime(&tt);
	return t;
}
int Account::getId()
{
	return id;
}
double Account::getAnnualInterestRate(){
	return annualInterestRate;
}
double Account::getMonthlyInterestRate(){
	return annualInterestRate / 12;
}
void Account::setId(int id){
	this->id = id;
}
void Account::setBalance(double balance){
	this->balance = balance;
}
void Account::setAnnualInterestRate(double annualInterestRate){
	this->annualInterestRate = annualInterestRate;
}

void Account::withDraw(double money){
	balance -= money;
	
}
void Account::deposit(double money){
	balance += money;
}


Account::~Account()
{
}
