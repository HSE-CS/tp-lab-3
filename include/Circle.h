#include <cmath>

class Circle {
private:
    double radius, ference, area;
public:
    void setRadius(double radius_val);

    void setFerence(double ference_val);

    void setArea(double area_val);

    double getRadius() const;

    double getFerence() const;

    double getArea() const;

    Circle(double radius_val)
    {
        double pi = 2 * acos(0.0);
        radius = radius_val;
        ference = 2 * pi * radius;
        area = pi * pow(radius, 2);
    }
};