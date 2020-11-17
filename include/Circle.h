#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	double radius, ference, area;
public:
	Circle(double new_radius);
	void setRadius(double new_radius);
	void setFerence(double new_ference);
	void setArea(double new_area);
	double getRadius();
	double getFerence();
	double getArea();
	void calcByRadius();
	void calcByFerence();
	void calcByArea();
};

#endif
