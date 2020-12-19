#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

#include <cmath>

class Circle {
private:
    double radius, ference, area, pi = M_PI;
public:
    Circle(double radius);

    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);

    double getRadius();
    double getFerence();
    double getArea();
};

#endif //TASK1_CIRCLE_H
