#include <iostream>
#include <string>


using namespace std;


int ReadNumber()
{
	int number;

	cout << "enter your number \n";
	cin >> number;

	return number;
}



void printResultUsingFor(int number)
{
	cout << "print Result Using For" << endl;
	for ( ;number > 0 ; number--)
		cout << number  << endl;
}

void printResultUsingWhile(int number)
{
	cout << "print Result Using While" << endl;

	while (number)
		cout << number-- << endl;
}

void printResultUsingDoWhile(int number)
{
	cout << "print Result Using Do While" << endl;
	do
	{
		cout << number-- << endl;
	} while (number);
}

int main()
{
	int  number;

	number = ReadNumber();

	printResultUsingFor(number);
	printResultUsingWhile(number);
	printResultUsingDoWhile(number);

	return (0);
}


