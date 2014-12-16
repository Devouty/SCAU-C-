#include "MyPoint.h"
#include<cmath>

MyPoint::MyPoint()
{
	this->x = 0;
	this->y = 0;
}
MyPoint::MyPoint(double x,double y)
{
	this->x = x;
	this->y = y;
}
double MyPoint::getX()
{
	return x;
}
double MyPoint::distance(MyPoint p)
{
	double x1, x2, y1, y2;
	x1 = this->x;
	x2 = p.getX();
	y1 = this->y;
	y2 = p.getY();
	return sqrt(abs(x1 - x2)*abs(x1 - x2) + abs(y1 - y2)*abs(y1 - y2));
}
double MyPoint::getY()
{
	return y;
}
MyPoint::~MyPoint()
{
}
