#include <iostream>
#include "DateTime.h"

using namespace std; 

int main()
{
	DateTime datetime(22, 11, 2020);
	DateTime datetime1(31, 12, 2020);

	std::cout << datetime.getDifference(datetime1);
}