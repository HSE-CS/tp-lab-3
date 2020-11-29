#include<iostream>
#include"DateTime.h"

using namespace std;

int main()
{
	DateTime dt1(28, 10, 2020);
	DateTime dt2(23, 10, 2020);
	DateTime dt3(dt1);

	cout << " ( 28 . 11 . 2020) " << endl;
	cout << dt1.getToday() << endl;
	cout << dt1.getTomorrow() << endl;
	cout << dt1.getYesterday() << endl;
	cout << dt1.getFuture(3) << endl;
	cout << dt1.getPast(3) << endl;

	cout << " ( 23 . 11 . 2020) " << endl;
	cout << dt2.getToday() << endl;
	cout << dt2.getTomorrow() << endl;
	cout << dt2.getYesterday() << endl;
	cout << dt2.getFuture(3) << endl;
	cout << dt2.getPast(3) << endl;


	cout << " dt3 prisvoit dt1 " << endl;
	cout << dt3.getToday() << endl;
	cout << dt3.getTomorrow() << endl;
	cout << dt3.getYesterday() << endl;
	cout << dt3.getFuture(3) << endl;
	cout << dt3.getPast(3) << endl;


	cout << "Differences : dt1 and dt2 " << endl;
	cout << dt1.getDifference(dt2) << endl;





}
