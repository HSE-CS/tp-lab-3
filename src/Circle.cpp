#include "Circle.h"

using namespace std;

Circle::Circle(double radius)
{
	this->radius = radius;
	this->ference = (2 * PI) * radius;
	this->area = (PI) * radius * radius;
}
Circle::Circle()
{
}
void Circle::setRadius(double radius)
{
	this->radius = radius;
	this->ference = (2 * PI);
	this->area = (PI) * radius * radius;
}

void Circle::setFerence(double ference)
{
	this->ference = ference;
	this->radius = (ference / (2 * (PI)));
	this->area = ((PI) * this->radius * this->radius);
}

void Circle::setArea(double area)
{
	this->area = area;
	this->radius = (sqrt(area / (PI)));
	this->ference = (2 * (PI) * this->radius);
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getFerence()
{
	return ference;
}

double Circle::getArea()
{
	return area;
}

