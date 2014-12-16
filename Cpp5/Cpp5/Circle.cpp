#include "Circle.h"


Circle::Circle()
{
}
Circle::Circle(double radius)
{
	this->radius = radius;
}
double Circle::getRadius(){
	return this->radius;
}
void Circle::setRadius(double radius){
	this->radius = radius;
}
double Circle::getArea(){
	return radius*radius*3.14;
}
bool Circle::operator<(Circle circle)
{
	return this->radius < circle.getRadius();
}
bool Circle::operator<=(Circle circle)
{
	return this->radius <= circle.getRadius();
}
bool Circle::operator==(Circle circle)
{
	return this->radius == circle.getRadius();
}
bool Circle::operator!=(Circle circle)
{
	return this->radius != circle.getRadius();
}
bool Circle::operator>(Circle circle)
{
	return this->radius > circle.getRadius();
}
bool Circle::operator>=(Circle circle)
{
	return this->radius >= circle.getRadius();
}
Circle::~Circle()
{
}
