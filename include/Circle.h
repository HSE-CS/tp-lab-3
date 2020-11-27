#ifndef Circle_h
#define Circle_h

class Circle {
private:
    double radius;
    double ference;
    double area;
public:
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};

#endif
