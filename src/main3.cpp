#include <iostream>
#include "DateTime.h"
#include <ctime>
using namespace std;

int main()
{
    DateTime dt1,dt2(20,11,2020);
    cout<<dt1.getToday();

    return 0;
}

