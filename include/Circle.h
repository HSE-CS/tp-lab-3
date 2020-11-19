#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
	double radius, ference, area;

public:
	Circle(double);
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;
};

#endif // !CIRCLE_H
