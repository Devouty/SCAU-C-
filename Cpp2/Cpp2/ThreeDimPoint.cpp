#include "ThreeDimPoint.h"
#include<cmath>

ThreeDimPoint::ThreeDimPoint(double x, double y, double z) : MyPoint(x, y)
{
	this->z = z;
}
ThreeDimPoint::ThreeDimPoint()
{
	this->z = 0;
}
double ThreeDimPoint::getZ()
{
	return this->z;
}
ThreeDimPoint::~ThreeDimPoint()
{
}
double ThreeDimPoint::distance(ThreeDimPoint p)
{
	int x1, x2, y1, y2, z1, z2;
	x1 = getX();
	y1 = getY();
	z1 = getZ();
	x2 = p.getX();
	y2 = p.getY();
	z2 = p.getZ();
	return sqrt(abs(x1 - x2)*abs(x1 - x2) + abs(y1 - y2)*abs(y1 - y2) + abs(z1 - z2)*abs(z1 - z2));
}