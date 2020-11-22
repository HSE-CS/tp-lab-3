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
};