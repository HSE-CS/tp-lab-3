#include "DateTime.h"
#include <iostream>
using namespace std;
int main()
{
    DateTime now;
    cout << now.getToday() << endl;
    cout << now.getYesterday() << endl;
    cout << now.getTomorrow() << endl;
    cout << now.getFuture(4000) << endl;
    cout << now.getPast(78) << endl;
    DateTime birthday(26, 12, 2001);
    cout << birthday.getToday() << endl;
    cout << "Days have passed since my birthday ";
    cout << now.getDifference(birthday) << endl;
}