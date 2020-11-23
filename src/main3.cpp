#include<iostream>
#include<string>
#include"DateTime.h"
int main()
{
	DateTime dt1(20,11,2018);
    	DateTime dt2(20,11,2018);
    	    DateTime dt3(20,11,2018);
    DateTime dt4(21,11,2018);
	std::cout<<dt1.getDifference(dt2)<<std::endl;
	std::cout<<dt4.getDifference(dt3)<<std::endl;
	
}
