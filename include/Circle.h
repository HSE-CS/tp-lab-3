//
// Created by vladimir on 20.12.2020.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

class Circle {
private:
    double radius{};
    double ference{};
    double area{};

public:
    Circle(double);
    void setRadius(double);
    void setFerence(double);
    void setArea(double);
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};

#endif //TASK1_CIRCLE_H
