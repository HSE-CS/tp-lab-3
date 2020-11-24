//
// Created by Данил on 24.11.2020.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H


class Circle {

private:
    double radius;
    double ference;
    double area;
    const double __math__pi{3.14159265358979323846264338327950288419716939937510};
public:

    explicit Circle(double value);

    void setRadius(double value);

    void setFerence(double value);

    void setArea(double value);

    double getRadius();

    double getFerence();

    double getArea();
};


#endif //TASK1_CIRCLE_H
