//
// Created by stoja on 10.12.2020.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

class Circle{
public:
    Circle(double radius);

    double getRadius();

    void setRadius(double radius);

    double getFerence();

    void setFerence(double ference);

    double getArea();

    void setArea(double area);
private:
    double radius, ference, area;
};

#endif //TASK1_CIRCLE_H
