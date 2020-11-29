#include<iostream>
#include"DateTime.h"

using namespace std;

int main()
{
	DateTime date_time_1(29, 11, 2020);
	DateTime date_time_2(30, 11, 2020);
	DateTime date_time_3(date_time_1);

	cout << " (29. 11. 2020) " << endl;
	cout << date_time_1.getToday() << endl;
	cout << date_time_1.getTomorrow() << endl;
	cout << date_time_1.getYesterday() << endl;
	cout << date_time_1.getFuture(3) << endl;
	cout << date_time_1.getPast(3) << endl;

	cout << " (30.11.2020) " << endl;
	cout << date_time_2.getToday() << endl;
	cout << date_time_2.getTomorrow() << endl;
	cout << date_time_2.getYesterday() << endl;
	cout << date_time_2.getFuture(3) << endl;
	cout << date_time_2.getPast(3) << endl;


	cout << " date_time_3 = date_time_1 " << endl;
	cout << date_time_3.getToday() << endl;
	cout << date_time_3.getTomorrow() << endl;
	cout << date_time_3.getYesterday() << endl;
	cout << date_time_3.getFuture(3) << endl;
	cout << date_time_3.getPast(3) << endl;


	cout << "Differences : date_time_1 and date_time_2 " << endl;
	cout << date_time_1.getDifference(date_time_2) << endl;





}