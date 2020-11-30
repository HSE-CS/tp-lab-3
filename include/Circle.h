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

    Circle() : radius{0.0}, ference{0.0}, area{0.0} {};

    Circle(double radius) {
        this->setRadius(radius);
    }

    void setRadius(double radius);

    void setFerence(double ference);

    void setArea(double area);

    double getRadius() const { return radius; }

    double getFerence() const { return ference; }

    double getArea() const { return area; }
};

#endif
