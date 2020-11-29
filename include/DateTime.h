#pragma once

#include <ctime>
#include <string>

class DateTime
{
public:
	DateTime();
	DateTime(const int day, const int month, const int year);
	DateTime(const DateTime& other);

	std::string getToday() const;
	std::string getYesterday() const;
	std::string getTomorrow() const;
	DateTime getFuture(unsigned int N) const;
	DateTime getPast(unsigned int N) const;
	int getDifference(const DateTime &other) const;

private:
	std::time_t dateTime;
};
