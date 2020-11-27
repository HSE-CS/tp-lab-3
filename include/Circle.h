//
// Created by arkly on 24.11.2020.
//

#ifndef LAB3_CIRCLE_H
#define LAB3_CIRCLE_H
const double pi = 3.14;

class Circle{
private:
    double radius;
    double ference{};
    double area{};
public:

    Circle(double _radius);
    Circle();

    void setRadius(double _radius);
    void setFerence(double _ference);
    void setArea(double _area);
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};
#endif //LAB3_CIRCLE_H
