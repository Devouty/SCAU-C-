// Cpp6.cpp : 定义控制台应用程序的入口点。
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

