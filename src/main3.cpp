#include "DateTime.h"

int main()
{
	DateTime d(20, 9, 2001), da(24, 9, 2001);
	cout << d.getToday() << endl << d.getTomorrow() << endl << d.getYesterday() << endl;
	cout << d.getFuture(4) << endl << d.getPast(6) << endl << d.getDifference(da);
	return 0;
};
