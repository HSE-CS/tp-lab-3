#ifndef Circle_H
#define Circle_H
class Circle
{
	private:
		double radius;
		double ference;
		double area;
	public:
		Circle(double radius);
		void setRadius(double radius);
		void setFerence(double ference);
		void setArea(double area);
		double getRadius();
		double getFerence();
		double getArea();
};
#endif
