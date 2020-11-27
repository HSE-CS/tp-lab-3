//
// Created by Данил on 24.11.2020.
//

#pragma once

#include "DateTime.h"

signed main() {

    DateTime a{};
    DateTime b{31, 10, 2018};

//    print__(a.repr(&a));
//    print__(a.getToday());

    print__(b.getFuture(0).getToday());
    print__(b.getFuture(1).getToday());
    print__(b.getFuture(2).getToday());

//
//    print__(a.getDifference(b));
    return 0;
}
