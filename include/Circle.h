//
// Created by freeb on 16.11.2020.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H


#include <cmath>

class Circle {
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


#endif //TASK1_CIRCLE_H
