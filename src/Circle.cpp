#include"Circle.h"
#include<math.h>

const double pi = 3.14159265358979323846;

Circle::Circle(double r)
{
	setRadius(r);
}

void Circle:: setRadius(double r)
{

	radius = r;
	area = pi * (radius * radius);
	ference = 2 * pi * radius;

}
void Circle::setFerence(double f)
{


	ference = f;
	radius = ference / (2 * pi);
	area = 2 * pi * (radius * radius);


}
void Circle::setArea(double a)
{

	area = a;
	radius = sqrt((area / pi));
	ference = 2 * pi * radius;

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
