#pragma once

class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	Circle():radius{ 0.0 }, ference{ 0.0 }, area{ 0.0 } {};
	Circle(double radius):radius{ 0.0 }, ference{ 0.0 }, area{ 0.0 }
	{
		this->setRadius(radius);
	}
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	double getRadius();
	double getFerence();
	double getArea();
};
