#include <string>
#include <ctime>
using namespace std;

class DateTime {
private:
  struct tm* data;
  time_t now;
public:

  DateTime(const int day, const int month, const int year);
  DateTime();
  DateTime(const DateTime &) = default;
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	unsigned int getDifference(DateTime& D);
  time_t getSec();

};

string makeDate(time_t t);
time_t getSec(unsigned int now_day, unsigned int now_month, unsigned int now_year);
