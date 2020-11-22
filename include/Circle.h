#define _USE_MATH_DEFINES 
#include <cmath>

class Circle{
private:
	double radius; //- радиус
	double ference; //- длина окружности
	double area; //- площадь круга
public:
	void setRadius(double r);
	void setFerence(double x);
	void setArea(double x);
	double getRadius();
	double getFerence();
	double getArea();
	Circle(double r=1);
};