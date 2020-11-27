//
// Created by Данил on 24.11.2020.
//

#pragma once

#include "DateTime.h"

signed main() {

    DateTime a{};
    DateTime b{31, 10, 2018};

//    print(a.repr(&a));
//    print(a.getToday());

    print(b.getTomorrow());
//
//    print(a.getDifference(b));
    return 0;
}
