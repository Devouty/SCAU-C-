// Cpp6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "StackOfIntegers.h"
#include "EmptyStackException.h"
#include <iostream>
int _tmain(int argc, _TCHAR* argv[])
{
	StackOfIntegers s;
	s.push(5);
	try
	{
		int i = s.pop();
		int j = s.pop();
	}
	catch (EmptyStackException e)
	{ 
		std::cout << "Pop error!" << std::endl;
	}
	system("pause");
	return 0;
}

