/*
 * @author Stanislav Stoianov
 */

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

#include <cmath>

class Circle {
private:
    double radius;
    double ference;
    double area;
public:

    explicit Circle(double radius) {
        this->radius = radius;
        this->ference = 2 * M_PI * radius;
        this->area = M_PI * radius * radius;
    }

    void setRadius(double radius);

    void setFerence(double ference);

    void setArea(double area);

    double getRadius() const { return radius; }

    double getFerence() const { return ference; }

    double getArea() const { return area; }
};

#endif
