#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <string>
using namespace std;

class DateTime{
private:
	time_t all_time;
public:
	DateTime(int d, int m, int y);
	DateTime();
	DateTime(DateTime&);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	double getDifference(DateTime& a);
};