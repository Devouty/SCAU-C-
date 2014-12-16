#pragma once
class Circle
{
public:
	Circle();
	Circle(double radius);
	~Circle();
	double getRadius();
	void setRadius(double radius);
	double getArea();
	bool operator<(Circle circle);
	bool operator<=(Circle circle);
	bool operator==(Circle circle);
	bool operator>(Circle circle);
	bool operator>=(Circle circle);
	bool operator!=(Circle circle);
private:
	double radius;
};

