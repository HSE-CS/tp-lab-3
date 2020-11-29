#define _CRT_SECURE_NO_WARNINGS
#include "../include/Circle.h"
#include "../include/task1.h"
#include <iostream>

using namespace std;

int main()
{
	Circle earth(6378100);
	cout << "The delta is: " << getDelta(earth, 1) << endl;

	return 0;
}