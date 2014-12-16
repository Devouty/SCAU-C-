#include "loan.h"
#include <cmath>

loan::loan()
{
	this->annualInterestRate = 0;
	this->loanAmount = 0;
	this->numberOfYears = 0;

}
loan::loan(double annualInterestRate, int numberOfYears, double loanAmount)
{
	this->annualInterestRate = annualInterestRate;
	this->loanAmount = loanAmount;
	this->numberOfYears = numberOfYears;
}

double loan::getannualInterestRate(){
	return annualInterestRate;
}
int loan::getNumberOfYears(){
	return numberOfYears;
}
double loan::getLoanAmount(){
	return loanAmount;
}
void loan::setannualInterestRate(double annualInterestRate){
	this->annualInterestRate = annualInterestRate;
}
void loan::setNumberOfYears(int numberOfYears){
	this->numberOfYears = numberOfYears;
}
void loan::setLoanAmount(double loanAmount){
	this->loanAmount = loanAmount;
}
double loan::getMonthlyPayment(){
	
	double m = annualInterestRate / 1200;
	return loanAmount*m / (1 - (pow(1 / (1 + m), numberOfYears * 12)));
}
double loan::getTotalPayment(){
	
	return getMonthlyPayment()*numberOfYears * 12;;
}

loan::~loan()
{
}
