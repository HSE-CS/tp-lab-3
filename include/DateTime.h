#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <string>
class DateTime
{
private:
	time_t time_in_sec = 0;
	tm timetable{ 0 };
	size_t min(size_t, size_t);
	size_t max(size_t, size_t);
public:
	DateTime(int, int, int);
	DateTime();
	DateTime(const DateTime&);
	std::string getToday(); //- ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wedensday);
	std::string getYesterday(); //- ����������� ���� ���������� ��� � ���� ������.
	std::string getTomorrow(); //- ����������� ���� ����������� ��� � ���� ������.
	std::string getFuture(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	std::string getPast(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	size_t getDifference(DateTime&); //- ��� ������� �������(� ����) ����� ����� ������

};
#endif