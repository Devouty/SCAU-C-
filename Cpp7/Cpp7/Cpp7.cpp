// Cpp7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
using namespace::std;

int _tmain(int argc, _TCHAR* argv[])
{
	Stack<int> s;
	int n;
	cout << "���������" << endl;
	cin >> n;
	int t;
	for (int i = 0; i < n; i++)
	{
		cout << "��" << i+1 << "������";
		cin >> t;
		s.push(t);
	}
	cout << "������ϣ�"<< endl;
	s.printStack();
	cout << endl << endl << "��������һ���������Ƿ�������ڣ�"<<endl;
	cin >> t;
	if (s.contains(t))
	{
		cout << "���ջ���� " << t << "!" << endl;
	}
	else{
		cout << "���ջ������ " << t << "!" << endl;
	}
	
	system("pause");
	return 0;
}

