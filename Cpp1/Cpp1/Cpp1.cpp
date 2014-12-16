// Cpp1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Account.h"
#include <iostream>
using namespace::std;

int _tmain(int argc, _TCHAR* argv[])
{
	Account a;
	a.setId(1122);
	a.setBalance(20000);
	a.setAnnualInterestRate(0.045);
	a.withDraw(2500);
	a.deposit(3000);
	string t = a.getTime();
	cout << "Balance: "<< a.getBalance() << endl;
	cout << "MonthlyInterestRate: " << a.getMonthlyInterestRate() << endl;
	cout << "Balance: " << a.getBalance() << endl;
	cout << "Time: " << a.getTime() << endl;
	system("pause");
	return 0;
}

