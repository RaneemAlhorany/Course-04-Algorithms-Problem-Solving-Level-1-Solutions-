#include <iostream>
#include <string>

using namespace std;

enum e_months {
	JANUARY = 1,
	FEBRUARY = 2,
	MARCH = 3,
	APRIL = 4,
	MAY = 5,
	JUNE = 6,
	JULY = 7,
	AUGUST = 8,
	SEPTEMBER = 9,
	OCTOBER = 10,
	NOVEMBER = 11,
	DECEMBER = 12
};

int ReadNumberFromTo(int from ,int to , string message)
{
	int number = 0;

	do {
		cout << "Enter " << message << " (" << from << " to " << to << "): \n";
		cin >> number;
	} while (number < from || number > to);

	return number;
}



e_months months()
{
	return (e_months)ReadNumberFromTo(1, 12, "the month number");
}


string getMonth(e_months month)
{
	switch (month)
	{
		case e_months::JANUARY:
			return "January";
		case e_months::FEBRUARY:
			return "February";
		case e_months::MARCH:
			return "March";
		case e_months::APRIL:
			return "April";
		case e_months::MAY:
			return "May";
		case e_months::JUNE:
			return "June";
		case e_months::JULY:
			return "July";
		case e_months::AUGUST:
			return "August";
		case e_months::SEPTEMBER:
			return "September";
		case e_months::OCTOBER:
			return "October";
		case e_months::NOVEMBER:
			return "November";
		case e_months::DECEMBER:
			return "December";
		default:
			return "Invalid month";
	}
}


int main()
{
	cout << getMonth(months()) << endl;
	return 0;
}




