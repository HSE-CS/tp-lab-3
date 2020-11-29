
#define _CRT_SECURE_NO_WARNINGS

#include"DateTime.h"
#include<string>
#include<iostream>

using namespace std;

DateTime::DateTime( int d, int m, int y)
{
	
	t.tm_mday = d;
	t.tm_mon = m - 1;
	t.tm_year = y - 1900;
	t.tm_sec = 0;
	t.tm_min = 0;
	t.tm_hour = 0;
	mktime(&t);


}
DateTime::DateTime()
{

	time_t ct;
	time_t* c_t = &ct;
	time(c_t);
	tm* t_m = &t;
	t_m = localtime(c_t);
	mktime(t_m);

}

DateTime::DateTime( DateTime* d )
{


	t = d->t;


}



string return_str( int d, int m , int y)
{
{

	tm date_time;
	date_time.tm_mday = d;
	date_time.tm_mon = m;
	date_time.tm_year = y;
	date_time.tm_sec = 0;
	date_time.tm_min = 0;
	date_time.tm_hour = 0;
	//date_time.tm_isdst = -1;
	mktime(&date_time);
	char buff[80] = { 0 };
    tm* dt = &date_time;
	strftime(buff, 80, "%d %B %Y, %A", dt);
	string str = buff;

	for (int i = 0; i < str.size(); i++)
	{
	   str[i] = tolower(str[i]);
	}

	return str;
}





}


string DateTime:: getToday()
{

	return return_str( t.tm_mday , t.tm_mon, t.tm_year );

}
string DateTime::getYesterday()
{
	return return_str(t.tm_mday - 1, t.tm_mon, t.tm_year);

}
string DateTime::getTomorrow()
{

	return return_str(t.tm_mday + 1, t.tm_mon, t.tm_year);

}
string DateTime:: getFuture(unsigned int N)
{

	return return_str(t.tm_mday + N, t.tm_mon, t.tm_year);

}
string DateTime:: getPast(unsigned int N)
{

	return return_str(t.tm_mday - N, t.tm_mon, t.tm_year);

}
int DateTime:: getDifference(DateTime& d)
{
	int sum = 0;

	time_t dt = mktime(&t);
	time_t dt3 = mktime(&d.t);
	sum = abs((dt - dt3));
	return (sum / (60 * 24 * 60));

}