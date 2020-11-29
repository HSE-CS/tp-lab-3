#include <string>
#include <ctime>

using namespace std;

class DateTime
{
private:
	tm dt;
public:
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(const DateTime&);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int);
	string getPast(unsigned int);
	int getDifference(DateTime&);
};