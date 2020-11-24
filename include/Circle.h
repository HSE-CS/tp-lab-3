#ifndef TEST_CIRCLE_H
#define TEST_CIRCLE_H

class Circle {
private:
    double radius;
    double ference;
    double area;
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

