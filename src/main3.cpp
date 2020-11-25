#include "DateTime.h"
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

int main()
{
	DateTime time1;
	DateTime time2(10, 11, 2020);
	DateTime time3(time1);
	DateTime dt1(20, 11, 2020);
	DateTime dt2(21, 11, 2020);
	dt2.getDifference(dt1);

	cout << time1.getYesterday() << endl;
	cout << time1.getTomorrow() << endl;
	cout << time1.getFuture(100) << endl;
	cout << time1.getPast(100) << endl;

	return 0;
}


