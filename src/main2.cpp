#include "Circle.h"
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main()
{
	Circle swimmingpool;
	Circle road;

	double radius;
	cout << "Enter the radius of the pool (metres):" << endl;
	cin >> radius;
	swimmingpool.setRadius(radius);

	double width;
	cout << "Enter the width of the track (metres):" << endl;
	cin >> width;
	road.setRadius(swimmingpool.getRadius() + width);

	double costcon;
	cout << "Enter the cost of concrete per square meter:" << endl;
	cin >> costcon;

	double costfr;
	cout << "Enter the cost of the fence:" << endl;
	cin >> costfr;

	double allcost = NULL;
	allcost += (road.getArea() - swimmingpool.getArea()) * costcon;
	allcost += (road.getFerence() * costfr);

	cout << "Cost = " << allcost << " rubles" << endl;
	return 0;
}


