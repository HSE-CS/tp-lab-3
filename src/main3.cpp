#include "DateTime.h"
int main()
{
	DateTime today1;
	cout <<"Today: "<< today1.getToday() << endl;

	DateTime today2(28, 11, 2020);
	cout <<"Today: "<< today2.getToday() << endl;
	cout << "Prev. day: " << today2.getYesterday() << endl;
	cout << "Two days ago: " << today2.getPast(5) << endl;

	DateTime tomorrow(31, 12, 2020);
	cout<<"Tomorrow: "<< tomorrow.getTomorrow() << endl;	

	DateTime date1(1, 12, 2020);
	DateTime date2(28, 11, 2020);
	cout <<"Difference betwen: "<<date1.getToday() <<" and "<< date2.getToday() <<"=" << date1.getDifference(date2) << endl;

	DateTime date3(25, 11, 2020);
	DateTime date4(date3);
	cout << "Difference betwen: "<< date3.getToday() << " and " << date4.getToday() << "=" << date3.getDifference(date4) << endl;
}