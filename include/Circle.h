//
// Created by Алексей Трутнев on 16.11.2020.
//

#ifndef LAB3TEST_CIRCLE_H
#define LAB3TEST_CIRCLE_H


class Circle {
public:
    void setRadius(double x);
    void setFerence(double x);
    void setArea(double x);
    double getRadius();
    double getFerence();
    double getArea();
    Circle() = default;
    explicit Circle(double R) {
        setRadius(R);
    }
private:
    double radius{};
    double ference{};
    double area{};
};


#endif //LAB3TEST_CIRCLE_H
