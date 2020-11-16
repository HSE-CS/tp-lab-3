//
// Created by freeb on 16.11.2020.
//

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H


#include <cmath>

class Circle {
private:
    double radius, ference, area;
public:
    Circle(double _radius) {
        Circle::setRadius(_radius);
    }

    double getRadius() const{
        return radius;
    }

    void setRadius(double _radius) {
        Circle::radius = _radius;
        Circle::ference = 2 * M_PI * radius;
        Circle::area = M_PI * pow(radius, 2);
    }

    double getFerence() const {
        return ference;
    }

    void setFerence(double _ference) {
        Circle::ference = _ference;
        Circle::radius = ference / (2 * M_PI);
        Circle::area = M_PI * pow(Circle::radius, 2);
    }

    double getArea() const {
        return area;
    }

    void setArea(double _area){
        Circle::area = _area;
        Circle::radius = pow(area / M_PI, 0.5);
        Circle::ference = 2 * M_PI * Circle::radius;
    }
};


#endif //TASK1_CIRCLE_H
