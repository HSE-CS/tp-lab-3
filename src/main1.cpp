#include "Circle.h"
#include "task1.h"

#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main()
{
	Circle Earth(637810.0); // в метрах
	Circle rope(637810.0);
	cout << "Enter the length of the piece of rope added (metres):" << endl;
	double add;
	cin >> add;
	rope.setFerence(rope.getFerence() + add);
	double gap = (rope.getRadius() - Earth.getRadius());
	cout << "Gap = " << gap << " metres" << endl;
	return 0;
}


