// Cpp3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "StackOfIntegers.h"
#include <iostream>
#include <cmath>

int prime_number(int n);

using namespace::std;

int _tmain(int argc, _TCHAR* argv[])
{
	StackOfIntegers s;
	int n;
	cin >> n;
	int temp =n;
	int i;
	while (temp != 1)
	{
		for (i = 2; i <= temp; i++)
		{
			if (temp%i == 0 && prime_number(i))
			{
				break;
			}
		}
		s.push(i);
		temp = temp / i;
	}
	
	while (!s.empty())
	{
		cout << s.pop() << " ";
	}
	system("pause");
	return 0;
}

int prime_number(int n)  //是素数，返回1，否则返回0.
{
	int i;
	for (i = 2; i<n; i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}