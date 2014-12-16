// Cpp4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "loan.h"
#include <fstream>
#include <iostream>
using namespace::std;
int _tmain(int argc, _TCHAR* argv[])
{
	
	fstream fs;
	string filename = "Exercise12_6.dat";
	int choice;
	cout << "����1������д���ļ�������2�������ܴ����" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "5��loan�����ԣ�" << endl;

		double d1, d2, d3;
		cout << "No1:(annualInterestRate,numberOfYears,loanAmount)" << endl;
		cin >> d1 >> d2 >> d3;
		loan l1(d1, d2, d3);

		cout << "No2:(annualInterestRate,numberOfYears,loanAmount)" << endl;
		cin >> d1 >> d2 >> d3;
		loan l2(d1, d2, d3);

		cout << "No3:(annualInterestRate,numberOfYears,loanAmount)" << endl;
		cin >> d1 >> d2 >> d3;
		loan l3(d1, d2, d3);

		cout << "No4:(annualInterestRate,numberOfYears,loanAmount)" << endl;
		cin >> d1 >> d2 >> d3;
		loan l4(d1, d2, d3);

		cout << "No5:(annualInterestRate,numberOfYears,loanAmount)" << endl;
		cin >> d1 >> d2 >> d3;
		loan l5(d1, d2, d3);

		if (!fs.is_open())
		try
		{
			fs.open(filename.c_str(), fstream::in | fstream::out | fstream::app);
		}catch (...){}
		fs.seekp(0, ios::end);
		fs.write(reinterpret_cast<const char*>(&l1), sizeof(loan));
		fs.write(reinterpret_cast<const char*>(&l2), sizeof(loan));
		fs.write(reinterpret_cast<const char*>(&l3), sizeof(loan));
		fs.write(reinterpret_cast<const char*>(&l4), sizeof(loan));
		fs.write(reinterpret_cast<const char*>(&l5), sizeof(loan));
		fs.close();
	}else{
		if (!fs.is_open())
		try
		{
			fs.open(filename.c_str(), fstream::in | fstream::out | fstream::app);
		}
		catch (...){}
		double sum = 0;
		while (true)
		{
			loan l;
			fs.read(reinterpret_cast<char*>(&l), sizeof(loan));
			if (fs.eof())
				break;
			sum += l.getTotalPayment();
		}
		fs.close();
		cout << sum << endl;
	}
	system("pause");
	return 0;
}

