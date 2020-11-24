#include "DateTime.h"

int main() {


	DateTime dt1(20, 11, 2018);
	DateTime dt2(21, 11, 2018);

	std::cout << dt1.getDifference(dt2);

	return 0;
}