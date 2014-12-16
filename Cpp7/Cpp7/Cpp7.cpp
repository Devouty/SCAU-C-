// Cpp7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
using namespace::std;

int _tmain(int argc, _TCHAR* argv[])
{
	Stack<int> s;
	int n;
	cout << "输入个数：" << endl;
	cin >> n;
	int t;
	for (int i = 0; i < n; i++)
	{
		cout << "第" << i+1 << "个数：";
		cin >> t;
		s.push(t);
	}
	cout << "输入完毕！"<< endl;
	s.printStack();
	cout << endl << endl << "现在输入一个数，看是否包含在内："<<endl;
	cin >> t;
	if (s.contains(t))
	{
		cout << "这个栈包含 " << t << "!" << endl;
	}
	else{
		cout << "这个栈不包含 " << t << "!" << endl;
	}
	
	system("pause");
	return 0;
}

