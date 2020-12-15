#include <cmath>
using namespace std;
class Circle
{
private:
    double radius, ference , area;
public:
    void setRadius(double radiusValue);

    void setFerence(double ferenceValue);

    void setArea(double areaValue);

    double getRadius() const;

    double getFerence() const;

    double getArea() const;

    Circle() = default;
    explicit Circle(double radiusValue) {
        radius = radiusValue;
        ference = 2 * M_PI * radiusValue;
        area = M_PI * radiusValue * radiusValue;
    }
};