#ifndef CIRCLE_H
#define CIRCLE_H

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <algorithm>
#include <typeinfo>


class Circle
{
private:
    double radius;
    double ference;
    double area;


public:

    Circle (double); // constructor by radius
    void setRadius(double radius);
    void setFerence(double ference); // set lenght of circle
    void setArea(double area); // set area
    double getRadius();
    double getFerence();
    double getArea();

};



#endif