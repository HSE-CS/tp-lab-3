#include<string>
#ifndef DateTime_H
#define DateTime_H
class DateTime
{
	private:
		int year,month,day;
		std::string weekday[7] = { "monday", "tuesday","wednesday", "thursday","friday", "saturday", "sunday"};
		std::string months[12] = { "january","february","march","april","may","june","july","august","september","october","november","december"}; 
		std::string getDay(long N);
	public:
		DateTime();
		DateTime(int day,int moth, int year);
		DateTime(DateTime& dateTime);
		std::string getToday();
		std:: string getYesterday();
		std:: string getTomorrow();
		std :: string getFuture(unsigned int N);
		std :: string getPast(unsigned int N);
		int getDifference(DateTime& dateTime);
};
#endif
