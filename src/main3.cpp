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
    DateTime dt(20,10,2018);
    std::cout  << "TD: " << dt.getToday() << "\n";
    std::cout  << "YTD: " << dt.getYesterday() << "\n";
    std::cout  << "TM: " << dt.getTomorrow() << "\n";
    DateTime dt2(20,10,2018);
    std::cout  << "DIF: " << dt.getDifference(dt2)<< "\n";
    
}


