#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>

class Circle {
private:
    double radius;  
    double area;
    double ference;

public:
    explicit Circle(const double r):radius{r} {
        area = M_PI * pow(radius, 2);
	ference = 2 * M_PI * radius;
    }

    void setRadius(double r);
    void setFerence(double f);
    void setArea(double a);
    double getRadius();
    double getFerence();
    double getArea();

};

#endif //TASK1_CIRCLE_H