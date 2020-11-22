#ifndef CIRCHE_H
#define CIRCHE_H

class Circle {
	public:
		void setRadius(double radius);
		void setFerence(double ference);
		void setArea(double area);
		double getRadius();
		double getFerence();
		double getArea();
		Circle(double radius);
	private:
		double radius;
		double ference;
		double area;
};

#endif CIRCHE_H