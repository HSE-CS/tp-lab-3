#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
    DateTime a;
    DateTime b(1, 1, 2021);

    cout << "Today: " << a.getToday() << endl;
    cout << "Yesterday: " << a.getYesterday() << endl;
    cout << "Tommorow: " << a.getTomorrow() << endl;
    cout << "20 days future: " << a.getFuture(20) << endl;
    cout << "20 days past: " << a.getPast(20) << endl;
    cout << "Days to New Year: " << a.getDifference(b) << endl;

    return 0;
}