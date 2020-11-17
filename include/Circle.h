#ifndef CIRCLE_H
#define CIRCLE_H
#include <string.h>
#include <math.h>
#define M_PI 3.1415926535897933

class Circle
{
private:
	double radius = 0.0; //- радиус
	double ference = 0.0; //- длина окружности
	double area = 0.0; //- площадь круга
public:
	Circle(const double _radius):radius{_radius}{

		this->ference = (this->radius) * 2 * M_PI;
		this->area = M_PI * pow(this->radius, 2);
	}
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif