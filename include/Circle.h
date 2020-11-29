#pragma once

class Circle
{
public:
	explicit Circle(const double radius);

	void setRadius(const double radius);
	void setFerence(const double ference);
	void setArea(const double area);

	double getRadius() const;
	double getFerence() const;
	double getArea() const;

private:
	double radius;
	double ference;
	double area;
};
