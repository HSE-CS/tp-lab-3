//
// Created by victor on 25.11.2020.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H
#define _USE_MATH_DEFINES
#include <math.h>
class Circle
{
private:
    double radius;
    double ference;
    double area;

public:
    Circle(double radius_)
    {
        radius = radius_;
        ference = calcFerence(radius_);
        area = calcArea(radius_);
    }

    void setRadius(double radius_);
    void setFerence(double ference_);
    void setArea(double area_);
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
    static double calcRadius(double ference_,
                             double area_);
    static double calcFerence(double radius_);
    static double calcArea(double radius_);
};
#endif //TASK1_CIRCLE_H
