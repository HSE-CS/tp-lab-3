#include <iostream>
#include <iomanip>
#include "task1.h"
#include "Circle.h"

using namespace std;

int main() {
	Circle c(0.0);
	cout << "Area " << c.getArea() << endl;
	cout << "Ference " << c.getFerence() << endl;
	c.setRadius(10.0);
	cout << (c.getArea() == 314.15926535897933) << endl;
	cout << "Area " << fixed << setprecision(10) << c.getArea() << endl;
	cout << "Ference " << c.getFerence() << endl;
	cout << ( c.getFerence() == 62.831853071795862 ) << endl;
	cout << "Delta " << calcDelta() << endl;
	cout << (calcDelta() == 0.15915494309228961) << endl;
	return 0;
}