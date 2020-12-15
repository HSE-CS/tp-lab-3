//
// Created by stoja on 10.12.2020.
//

#include <iostream>
#include "DateTime.h"

int main() {
    DateTime date(01, 01, 2020);
    cout << date.getToday();
    cout << date.getFuture(20);
    cout << date.getFuture(150);
    return 0;
}