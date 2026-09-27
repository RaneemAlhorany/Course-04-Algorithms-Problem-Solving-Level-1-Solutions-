#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string message)
{
	int number = 0;

	do {
		cout << "Enter " << message << ": \n";
		cin >> number;
	} while (number <= 0);

	return number;
}


float hoursToDays(int hours)
{
	return hours/24.0;
}


float DaystoWeeks(int days)
{
	return days/7.0;
}


//void printResult(int hours)
//{
//	float days = hoursToDays(hours);
//	float weeks = DaystoWeeks(days);
//
//	cout << "The number of days in " << hours << " hours is: " << days << endl;
//	cout << "The number of weeks in " << hours << " hours is: " << weeks << endl;
//}
//
// 


//float HoursToWeeks(int hours)
//{
//	return DaystoWeeks(hoursToDays(hours));
//}


float HoursToWeeks(int hours)
{
	return hours / 24.0 / 7.0;
}


int main()
{
	float hours = ReadPositiveNumber("Enter the number of hours");
	float NumberOfDays = hoursToDays(hours);
	float NumberOfWeeks = DaystoWeeks(NumberOfDays);

	cout<<"Total hours: "<<hours<<endl;
	cout<<"Total days: "<<NumberOfDays<<endl;
	cout<<"Total weeks: "<<HoursToWeeks(hours)<<endl;

	return 0;
}

//int main()
//{
//	printResult(ReadPositiveNumber("the number of hours"));
//	return 0;
//}
