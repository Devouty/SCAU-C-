// Cpp2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyPoint.h"
#include "ThreeDimPoint.h"
#include <iostream>
using namespace::std;
int _tmain(int argc, _TCHAR* argv[])
{
	MyPoint a;
	MyPoint b(10,30.5);
	cout << "MyPoint Distance:" << a.distance(b) << endl;
	ThreeDimPoint c;
	ThreeDimPoint d(10, 30, 25.5);
	cout << "ThreeDimPoint Distance:" << c.distance(d) << endl;

	system("pause");
	return 0;
}

