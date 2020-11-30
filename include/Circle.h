#ifndef TEST_CIRCLE_H
#define TEST_CIRCLE_H

class Circle {
private:
    double radius = 0.0;
    double ference = 0.0;
    double area = 0.0;
public:
    Circle(double input_radius);
    void setRadius(double input_radius);
    void setFerence(double input_ference);
    void setArea(double input_area);
    double getRadius();
    double getFerence();
    double getArea();
};


#endif //TEST_CIRCLE_H

