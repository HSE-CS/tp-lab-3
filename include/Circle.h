#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include <cmath>
const double PI = acos(-1);

class Circle
{
private:
    double radius;
    double ference;
    double area;

public:
    Circle();
    Circle(double radius);
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    const double getRadius() const;
    const double getFerence() const;
    const double getArea() const;
};

#endif // CIRCLE_H_INCLUDED
