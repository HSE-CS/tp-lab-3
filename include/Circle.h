//
// Created by Алексей Трутнев on 16.11.2020.
//

#ifndef LAB3TEST_CIRCLE_H
#define LAB3TEST_CIRCLE_H


class Circle {
private:
    double radius = 0;
    double ference = 0;
    double area = 0;
public:
    void setRadius(double);
    void setFerence(double);
    void setArea(double);
    double getRadius();
    double getFerence();
    double getArea();
//  Constructors
    Circle() = default;
    explicit Circle(double R) {
        setRadius(R);
    }
};


#endif //LAB3TEST_CIRCLE_H
