//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>

#include "DateTime.h"

#include <iostream>
#include <cstdlib>


//using namespace std;


int main(){
    DateTime dt1(20,11,2018);
    std::cout  << "TD: " << dt1.getToday() << "\n";
    std::cout  << "YTD: " << dt1.getYesterday() << "\n";
    std::cout  << "TM: " << dt1.getTomorrow() << "\n";


    DateTime dt2(21,11,2018);
    std::cout  << "DIF: " << dt1.getDifference(dt2)<< "\n";
    std::cout  << "DIF: " << dt2.getDifference(dt1)<< "\n";
}


