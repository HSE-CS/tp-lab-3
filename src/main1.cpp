#include "task1.h"
#include "Circle.h"

using namespace std;

int main()
{
	Circle c(0.0), c1(10.0);

	cout << c.getArea() << endl;
	cout << c.getFerence() << endl;
	cout << c1.getArea() << endl;
	cout << c1.getFerence() << endl;

	cout << calcDelta() << endl; // solvation for the task Earth&Rope

	return 0;
}