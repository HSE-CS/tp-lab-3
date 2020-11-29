#ifndef CIRCLE_H
#define CIRCLE_H

typedef unsigned int count_t;

class Circle
{
private:
	double radius, ference, area;

public:
	Circle(double _radius);
	double getRadius() const;
	void setRadius(double _radius);
	double getFerence() const;
	void setFerence(double _ference);
	double getArea() const;
	void setArea(double _area);
};
#endif
