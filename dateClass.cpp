#include <iostream>
using namespace std;

class date
{
	int month;
	int day;
	int year;

public:

	date(int month = 1, int day = 1, int year = 2001)
	{
		date::month = month;
		date::day = day;
		date::year = year;
	};
	void showdate();
};

void date::showdate() 
{

	cout << month << "/" << day << "/" << year << endl;
}

int main()
{
	int month;
	int day;
	int year;

	string monthname[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };

	cout << "enter month " << endl;
	cin >> month;
	if (month > 12)
	{
		cout << " it does not work 1";
		exit(0);
	}

	cout << "enter day " << endl;
	cin >> day;
	if (day > 31)
	{
		cout << " it does not work 2";
		exit(0);
	}

	cout << "enter year " << endl;
	cin >> year;
	cout << endl;

	date newdate(month, day, year);
	newdate.showdate();
	cout << monthname[month - 1] <<" " << day <<", " << year << endl;
	cout << day << " " << monthname[month - 1] << ", " << year << endl;

	return 0;
}
