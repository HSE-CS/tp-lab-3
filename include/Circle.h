//
// Created by Valera on 27.11.2020.
//

#ifndef UNTITLED1_CIRCLE_H
#define UNTITLED1_CIRCLE_H


class Circle {
private:
    double radius, ference, area;

public:
    Circle(double radius);

    void setRadius(double r);

    void setFerence(double f);

    void setArea(double a);

    double getRadius() const;

    double getFerence() const;

    double getArea() const;
};
#endif //UNTITLED1_CIRCLE_H
