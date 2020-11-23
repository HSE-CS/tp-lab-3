#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
    DateTime Data(15, 12, 2500);
    cout << Data.getToday() << endl;
    cout << Data.getTomorrow() << endl;
    cout << Data.getYesterday() << endl;
    cout << Data.getPast(10) << endl;
    cout << Data.getFuture(10) << endl;
    DateTime Data2(31, 12, 2020);
    cout<<Data.getDifference(Data2)<<endl;

    return 0;
};

