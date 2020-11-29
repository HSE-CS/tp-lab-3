#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	Circle(double r);
	void setRadius(double r);
	void setFerence(double r);
	void setArea(double r);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif
