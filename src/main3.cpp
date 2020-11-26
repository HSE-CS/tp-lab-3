//
// Created by Данил on 24.11.2020.
//

#include "DateTime.h"

signed main() {

    DateTime a{};
    DateTime b{1, 11, 2020};

    print(a.repr(&a));
    print(a.getToday());

    print(a.getDifference(b));
    return 0;
}