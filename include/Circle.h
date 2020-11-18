#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

class Circle{
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double x);
    void setRadius(double x);
    void setFerence(double x);
    void setArea(double x);
    double getRadius();
    double getFerence();
    double getArea();
};

#endif //TASK1_CIRCLE_H
