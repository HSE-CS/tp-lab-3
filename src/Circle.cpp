#define _USE_MATH_DEFINES


#include"Circle.h"
#include<math.h>
#include<cmath>
Circle::Circle(double x)
{
	this->setRadius(x);
}

void Circle::setRadius(double x)
{

	r = x;
	f = 2 * M_PI * r;
	a = M_PI * pow(r, 2);

}
void Circle::setFerence(double x)
{


	f = f;
	r = f / (2 * M_PI);
	a = 2 * M_PI * pow(r, 2);


}
void Circle::setArea(double x)
{

	a = a;
	r = sqrt(a / M_PI);
	f = 2 * M_PI * r;

}
double Circle::getRadius()
{

	return this->r;

}
double Circle::getFerence()
{


	return this->f;


}
double Circle::getArea()
{

	return this->a;

}
