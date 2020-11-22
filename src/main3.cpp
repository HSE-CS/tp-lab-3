#include "DateTime.h"
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	DateTime b(24, 07, 2000);
	cout << b.getPast(2) << endl;
	return;
}