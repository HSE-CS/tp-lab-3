#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

class Circle
{
private:
    double radius;
    double ference; // длина окружности
    double area; // площадь круга

public:
    Circle();
    Circle(double radius);
    void setRadius(double);
    void setFerence(double);
    void setArea(double);
    double getRadius();
    double getFerence();
    double getArea();
};

#endif //TASK1_CIRCLE_H