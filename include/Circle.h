#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
public:
	Circle();
	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;
private:
	double radius;
	double ference;
	double	area;

};

#endif

