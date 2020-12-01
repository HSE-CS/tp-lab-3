//
// Created by jmax on 30.11.2020.
//

#ifndef LAB_3_CIRCLE_H
#define LAB_3_CIRCLE_H

class Circle {
private:
    enum Type{RADIUS, FERENCE, AREA};

    double radius;
    double ference;
    double area;

    void recalculateFields(double changedField, Type typeOfField);
public:
    Circle():radius{0}, ference{0}, area{0} {}
    Circle(double radius) {
        recalculateFields(radius, RADIUS);
    }
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};

#endif //LAB_3_CIRCLE_H
