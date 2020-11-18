#ifndef CIRCLE_H
#define CIRCLE_H



class Circle
{
private:
  double radius;
  double ference;
  double area;
public:
  Circle(double);
void    setRadius(double);
 void   setFerence(double);
  void  setArea(double);
double  getRadius() const;
double getFerence() const;
double  getArea() const;

};
#endif
