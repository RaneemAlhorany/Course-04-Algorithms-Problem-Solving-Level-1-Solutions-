#include <iostream>
#include <string>
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

s_time readTime()
{
	s_time time;

	time.days = ReadPositiveNumber("the number of days");
	time.hours = ReadPositiveNumber("the number of hours");
	time.minutes = ReadPositiveNumber("the number of minutes");
	time.seconds = ReadPositiveNumber("the number of seconds");
	return time;
}

//void readTime(s_time& time)
//{
//	time.days = ReadPositiveNumber("the number of days");
//	time.hours = ReadPositiveNumber("the number of hours");
//	time.minutes = ReadPositiveNumber("the number of minutes");
//	time.seconds = ReadPositiveNumber("the number of seconds");
//}

int daystoseconds(int days)
{
	return days * 24 * 60 * 60;
}

int hourstoseconds(int hours)
{
	return hours * 60 * 60;
}

int minutestoseconds(int minutes)
{
	return minutes * 60;
}

int totalSeconds(s_time time)
{
	return daystoseconds(time.days) + hourstoseconds(time.hours) + minutestoseconds(time.minutes) + time.seconds;
}

void printTime(s_time time)
{
	cout << "The time is: " << time.days << " days, " << time.hours << " hours, " << time.minutes << " minutes, and " << time.seconds << " seconds." << endl;
	cout << "Total seconds: " << totalSeconds(time) << endl;
}


//int main()
//{
//	s_time time;
//	readTime(time);
//	printTime(time);
//
//	return 0;
//}


int main()
{
	printTime(readTime());

	return 0;
}
