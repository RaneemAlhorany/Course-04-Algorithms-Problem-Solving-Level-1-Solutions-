#include <iostream>
#include <string>
#include <cmath>


using namespace std;

enum e_days 
{ 
	SUNDAY = 1, 
	MONDAY = 2, 
	TUESDAY = 3, 
	WEDNESDAY = 4, 
	THURSDAY = 5, 
	FRIDAY = 6, 
	SATURDAY = 7,
	WrongDay = 0
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

e_days dayOfWeek()
{
	return (e_days)ReadNumberFromTo(1, 7, "the day number");
}


//e_days dayOfWeek(int day)
//{
//	switch (day)
//	{
//	case 1:
//		return e_days::SUNDAY;
//	case 2:
//		return e_days::MONDAY;
//	case 3:
//		return e_days::TUESDAY;
//	case 4:
//		return e_days::WEDNESDAY;
//	case 5:
//		return e_days::THURSDAY;
//	case 6:
//		return e_days::FRIDAY;
//	case 7:
//		return e_days::SATURDAY;
//	default:
//		return e_days::WrongDay;
//	}
//}

string getDay(e_days day)
{
	switch (day)
	{
	case e_days::SUNDAY:
		return "Sunday";
	case e_days::MONDAY:
		return "Monday";
	case e_days::TUESDAY:
		return "Tuesday";
	case e_days::WEDNESDAY:
		return "Wednesday";
	case e_days::THURSDAY:
		return "Thursday";
	case e_days::FRIDAY:
		return "Friday";
	case e_days::SATURDAY:
		return "Saturday";
	default:
		return "Invalid day";
	}
	cout << endl;
}

//void printDay(e_days day)
//{
//	switch (day)
//	{
//	case e_days::SUNDAY:
//		cout << "Sunday";
//		break;
//	case e_days::MONDAY:
//		cout << "Monday";
//		break;
//	case e_days::TUESDAY:
//		cout << "Tuesday";
//		break;
//	case e_days::WEDNESDAY:
//		cout << "Wednesday";
//		break;
//	case e_days::THURSDAY:
//		cout << "Thursday";
//		break;
//	case e_days::FRIDAY:
//		cout << "Friday";
//		break;
//	case e_days::SATURDAY:
//		cout << "Saturday";
//		break;
//	default:
//		cout << "Invalid day";
//		break;
//	}
//	cout << endl;
//}

int main()
{
	cout << getDay(dayOfWeek()) << endl;
	return 0;
}

//int main()
//{
//	printDay(dayOfWeek(ReadNumberFromTo(1, 7, "the day number")));
//	return 0;
//}


