#pragma once
#define CIRCLE_H
#ifdef CIRCLE_H
class Circle {
public:
	Circle();
	Circle(double);
	void setRadius(double new_r);
	void setFerence(double new_f);
	void setArea(double new_area);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;
private:
	double radius;
	double ference;
	double area;
	;
};
#endif // CIRCLE_H
