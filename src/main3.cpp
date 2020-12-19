#include <iostream>
#include "DateTime.h"

int main() {
    DateTime a(31, 10, 2018);
    cout << a.getToday();
    return 0;
}