#pragma once
class loan
{
public:
	loan();
	loan(double annualInterestRate, int numberOfYears, double loanAmount);
	~loan();
	double getannualInterestRate();
	int getNumberOfYears();
	double getLoanAmount();
	void setannualInterestRate(double annualInterestRate);
	void setNumberOfYears(int numberOfYears);
	void setLoanAmount(double loanAmount);
	double getMonthlyPayment();
	double getTotalPayment();
private:
	double annualInterestRate;
	int numberOfYears;
	double loanAmount;
};

