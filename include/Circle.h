#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H
#include <math.h>
class Circle{
private:
    double radius;
    double ference;
    double area;
    double pi = M_PI;
public:
    void setRadius(double);
    void setFerence(double);
    void setArea(double);
    double getRadius();
    double getFerence();
    double getArea();
};

#endif //TASK1_CIRCLE_H
