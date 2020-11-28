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

        void setRadius(double radius) {
            this->radius = radius;
            this->area = pow(radius, 2) * M_PI;
            this->ference = 2 * M_PI * radius;
        }

        void setFerence(double ference) {
            this->ference = ference;
            this->radius = ference / 2 / M_PI;
            this->area = pow(this->radius, 2) * M_PI;
        }

        void setArea(double area) {
            this->area = area;
            this->radius = sqrt(area / M_PI);
            this->ference = 2 * M_PI * this->radius;
        }

        double getRadius() {
            return this->radius;
        }

        double getFerence() {
            return this->ference;
        }

        double getArea() {
            return this->area;
        }
};