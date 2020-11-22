#include "Circle.h"
#include "task1.h"

using namespace std;

double calcDelta()
{
	Circle Earth(637810.0); // в метрах
	Circle rope(637810.0);
	cout << "Enter the length of the piece of rope added (metres):" << endl;
	double add;
	cin >> add;
	rope.setFerence(rope.getFerence() + add);
	return (rope.getRadius() - Earth.getRadius());
}

// расчёт стоимости бассейна
double calcCost()
{
	return 0;
}