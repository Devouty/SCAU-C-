// Cpp5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Circle.h"
#include <iostream>
using namespace::std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "����Բ�ĸ�����" << endl;
	int n;
	cin >> n;
	Circle * c = new Circle[n];
	double *d = new double[n];
	for (int i = 0; i < n; i++)
	{
		cout << "�����" <<i+1<< "��Բ�İ뾶��";
		double l;
		cin >> l;
		d[i] = l;
		c[i].setRadius(l);
	}
	/*Circle c[5];
	c[0].setRadius(5);
	c[1].setRadius(6);
	c[2].setRadius(4);
	c[3].setRadius(8);
	c[4].setRadius(7);*/
	Circle  temp;
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i; j < n; j++)
		{
			if (c[i] < c[j])
			{
				temp = c[j];
				c[j] = c[i];
				c[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		double t = c[i].getRadius();
		int num = -2;
		for (int i = 0; i < n; i++)
		{
			if (d[i] == t)
			{
				num = i;
				d[i] = -1;
				break;
			}
		}
		cout <<"��"<<num+1<<"������뾶Ϊ��"<< t << endl;
	}
	
	system("pause");
	return 0;
}

