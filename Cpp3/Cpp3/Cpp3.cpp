// Cpp3.cpp : �������̨Ӧ�ó������ڵ㡣
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

int prime_number(int n)  //������������1�����򷵻�0.
{
	int i;
	for (i = 2; i<n; i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}