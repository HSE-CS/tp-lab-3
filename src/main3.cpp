#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
    DateTime Good_Day;
    DateTime BD(10, 05, 2001);

    cout << "Today is : " << Good_Day.getToday() << endl;
    cout << "Yesterday was : " << Good_Day.getYesterday() << endl;
    cout << "Tommorow will be : " << Good_Day.getTomorrow() << endl;
    cout << "15 days later : " << Good_Day.getFuture(15) << endl;
    cout << "15 days ago : " << Good_Day.getPast(15) << endl;
    cout << "Days from my birthday : " << Good_Day.getDifference(BD) << endl;

    DateTime Day(01, 11, 2018);
    cout << "Today is : " << Day.getToday() << endl;
    cout << "Tommorow will be : " << Day.getYesterday() << endl;
    cout << "Tommorow will be : " << Day.getTomorrow() << endl;
    return 0;
}