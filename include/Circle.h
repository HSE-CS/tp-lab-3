#define _USE_MATH_DEFINES
#include <math.h>

class Circle {
    private:
        double radius;
        double ference;
        double area;
    public:
        Circle(double radius = 0) {
            setRadius(radius);
        }

        void setRadius(double radius);

        void setFerence(double ference);

        void setArea(double area);

        double getRadius();

        double getFerence();

        double getArea();
};