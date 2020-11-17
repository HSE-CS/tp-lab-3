//
// Created by sharg on 17.11.2020.
//
#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

#include <cmath>

class Circle {
private:
    double radius, ference, area;
public:
    void setRadius(double radiusValue);

    void setFerence(double ferenceValue);

    void setArea(double areaValue);

    double getRadius() const;

    double getFerence() const;

    double getArea() const;

    Circle() = default;

    explicit Circle(double radiusValue) {
        radius = radiusValue;
        ference = 2 * M_PI * radiusValue;
        area = M_PI * radiusValue * radiusValue;
    }
};

#endif //TASK1_CIRCLE_H
