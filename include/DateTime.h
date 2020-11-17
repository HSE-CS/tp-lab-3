#ifndef _DATETIME_H_
#define _DATETIME_H_

#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <string>
#include "iostream"
class DateTime
{
private:
	tm date;
public:
	DateTime(int day, int month, int year):date{ tm{ 0, 0, 0, day, month-1, year-1900} } { mktime(&date); }
	DateTime()
	{
		time_t rawtime;
		struct tm* timeinfo;

		time(&rawtime);  // �������� ������� ����, ���������� � ��������
		timeinfo = localtime(&rawtime);  // ������� ��������� �����, �������������� � ���������

		date.tm_mday = timeinfo->tm_mday;
		date.tm_mon = timeinfo->tm_mon;
		date.tm_year = timeinfo->tm_year;
		date.tm_wday = timeinfo->tm_wday;
		mktime(&date);  //������� ��������� timeptr � time_t
	}
	DateTime(const DateTime &_date):date{_date.date}{}
	std::string getToday()const; //- ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wedensday);
	std::string getYesterday() const; //- ����������� ���� ���������� ��� � ���� ������.
	std::string getTomorrow() const; //- ����������� ���� ����������� ��� � ���� ������.
	DateTime getFuture(unsigned int N) const; //-����������� ���� ����� N ���� � �������;
	DateTime getPast(unsigned int N) const; //-����������� ���� ����� N ���� � �������;
	int getDifference(DateTime&); //-��� ������� �������(� ����) ����� ����� ������
};
#endif
