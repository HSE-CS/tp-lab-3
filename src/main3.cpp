#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {
    DateTime DATA(22, 11, 2020);
    cout << "Today: " << DATA.getToday() << endl;
    cout << "Tomorrow: " << DATA.getTomorrow() << endl;
    cout << "Yesterday: " << DATA.getYesterday() << endl;
    int n_days = 2;
    cout << "2 days ago: " << DATA.getPast(n_days) << endl;
    cout << "2 days will: " << DATA.getFuture(n_days) << endl;
    DateTime Data1(17, 11, 2020);
    DateTime Data2(22, 11, 2020);
    cout << "Difference: " << Data1.getDifference(Data2) << " day" << endl;
    return 0;
}
