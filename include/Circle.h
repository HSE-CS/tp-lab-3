#ifndef LAB_3_CIRCLE_H
#define LAB_3_CIRCLE_H
#include <cmath>

class Circle {
public:
    Circle(double rad);

    void setRadius(double rad);

    void setFerence(double fer);

    void setArea(double ar);

    double getRadius();

    double getFerence();

    double getArea();

private:
    double radius = 0.0;
    double ference = 0.0;
    double area = 0.0;
    const double pi = M_PI;
};



#endif //LAB_3_CIRCLE_H
