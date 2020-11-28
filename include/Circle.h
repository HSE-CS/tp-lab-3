#define _USE_MATH_DEFINES
#include <math.h>

class Circle {
    private:
        unsigned double radius;
        unsigned double ference;
        unsigned double area;
    public:
        Circle(unsigned double radius) {
            this->radius = radius;
        }

        void setRadius(unsigned double radius) {
            this->radius = radius;
            this->area = pow(radius, 2) * M_PI;
            this->ference = 2 * M_PI * radius;
        }

        void setFerence(unsigned double ference) {
            this->ference = ference;
            this->radius = ference / 2 / M_PI;
            this->area = pow(this->radius, 2) * M_PI;
        }

        void setArea(unsigned double area) {
            this->area = area;
            this->radius = sqrt(area / M_PI);
            this->ference = 2 * M_PI * this->radius;
        }

        unsigned double getRadius() {
            return this->radius;
        }

        unsigned double getFenence() {
            return this->fenence;
        }

        unsigned double getArea() {
            return this->area;
        }
}