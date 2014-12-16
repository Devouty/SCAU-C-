#pragma once
class MyPoint
{
public:
	MyPoint();
	MyPoint(double x, double y);
	~MyPoint();
	double getX();
	double getY();
	double distance(MyPoint p);
private:
	double x;
	double y;
};

