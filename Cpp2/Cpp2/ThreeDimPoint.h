#pragma once
#include "MyPoint.h"
class ThreeDimPoint :
	public MyPoint
{
public:
	ThreeDimPoint();
	ThreeDimPoint(double x,double y,double z);
	~ThreeDimPoint();
	double getZ();
	double distance(ThreeDimPoint p);
private:
	double z;
};

