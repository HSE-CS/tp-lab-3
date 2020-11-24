//
// Created by Данил on 24.11.2020.
//
#pragma once

#include "DateTime.h"

signed main() {

    DateTime a{};
    print(a.repr(&a));
    print(a.getToday());
    return 0;


}