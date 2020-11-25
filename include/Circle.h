#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {

private:

	double radius;             // радиус
	double ference;            // длина окружности
	double area;               // площадь круга

public:

	Circle ();
	Circle (double rad);
	void setRadius(double rad);
	void setFerence(double rad);
	void setArea(double rad);
	double getRadius();
	double getFerence();
	double getArea();

};

#endif