#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

class DateTime
{
public:
	DateTime(int day, int month, int year);
	DateTime();
	DateTime(DateTime &dt);

	std::string getToday();						//- ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wedensday);
	std::string getYesterday();					// -����������� ���� ���������� ��� � ���� ������.
	std::string getTomorrow();					// -����������� ���� ����������� ��� � ���� ������.
	std::string getFuture(unsigned int N);		// -����������� ���� ����� N ���� � �������;
	std::string getPast(unsigned int N);		// -����������� ���� ����� N ���� � �������;
	int getDifference(DateTime& dt);		// -��� ������� �������(� ����) ����� ����� ������
	
private:
	int day = 0;
	int month = 0;
	int year = 0;
};
