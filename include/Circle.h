#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

class Circle
{
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double rv);
    void    setRadius(double rv);
    void   setFerence(double fv);
    void  setArea(double av);
    double  getRadius() const;
    double getFerence() const;
    double  getArea() const;

};

#endif //TASK1_CIRCLE_H
