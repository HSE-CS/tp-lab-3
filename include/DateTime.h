#include <cmath>
#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>

class DateTime
{
private:
	struct tm time_string;
public:
	DateTime(int, int, int);
	DateTime();
	DateTime(const DateTime&);
	std::string getToday();
	std::string  getYesterday();
	std::string  getTomorrow();
	std::string  getFuture(unsigned int);
	std::string  getPast(unsigned int);
	int getDifference(DateTime&);

};