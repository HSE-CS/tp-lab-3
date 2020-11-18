#pragma once

class Circle {
private:
    double radius;
    double ference;
    double area;

public:
    Circle(double);

    void setRadius(double);

    void setFerence(double);

    void setArea(double);

    double getRadius();

    double getFerence();

    double getArea();


};