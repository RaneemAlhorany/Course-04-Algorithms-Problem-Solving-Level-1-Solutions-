#include <iostream>
#include <string>
#include <cmath>


using namespace std;

struct s_time {
	int days ,hours ,minutes ,seconds;
};


int ReadPositiveNumber(string message)
{
	int number = 0;

	do {
		cout << "Enter " << message << ": \n";
		cin >> number;
	} while (number <= 0);

	return number;
}



//int secondstoDays(int seconds)
//{
//	return seconds / 24 / 60 / 60;
//}
//
//int secondsToHours(int seconds)
//{
//	return seconds / 60/ 60;
//}
//
//int secondsToMinutes(int seconds)
//{
//	return seconds / 60;
//}

//s_time returnTime(int seconds)
//{
//	s_time time;
//	int temp;
//
//	temp = seconds;
//
//	time.days = secondstoDays(temp);
//	temp -= floor(time.days * 24 * 60 * 60);
//
//	time.hours = secondsToHours(temp);
//	temp -= floor(time.hours * 60 * 60);
//
//	time.minutes = secondsToMinutes(temp);
//	temp -= floor(time.minutes * 60);
//
//	time.seconds = temp;
//
//	return time;
//}


s_time returnTime(int seconds)
{
	const int secondPerDay = 24 * 60 * 60;
	const int secondPerHour = 60 * 60;
	const int secondPerMinute = 60;

	s_time time;
	int temp = 0;

	time.days = floor(seconds / secondPerDay);	
	temp = seconds % secondPerDay;

	time.hours = floor(temp / secondPerHour);
	temp = temp % secondPerHour;

	time.minutes = floor(temp / secondPerMinute);
	temp = temp % secondPerMinute;

	time.seconds = temp;

	return time;
}


void printTime(s_time time)
{
	cout << "The time is: " << time.days << " days, " << time.hours << " hours, " << time.minutes << " minutes, and " << time.seconds << " seconds." << endl;
}



int main()
{
	int seconds = ReadPositiveNumber("the number of seconds");
	printTime(returnTime(seconds));

	return 0;
}


//int main()
//{
//	printTime(returnTime(ReadPositiveNumber("the number of seconds")));
//
//	return 0;
//}
