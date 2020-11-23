#include<iostream>
#include<string>
#include"DateTime.h"
int main()
{
	DateTime dt(31,10,2018);
	std::cout<<dt.getTomorrow()<<std::endl;
	
}
