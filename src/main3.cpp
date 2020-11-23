#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
    DateTime t;
    DateTime t1(t);
    DateTime t2 (20,11,2020);
    cout << t2.getToday() << endl << t1.getDifference(t2);
}