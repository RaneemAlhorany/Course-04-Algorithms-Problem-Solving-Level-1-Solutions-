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
	for (int i = 1 ; i <= number ; i ++)
		cout << i  << endl;
}

void printResultUsingWhile(int number)
{
	int i = 1;
	cout << "print Result Using While" << endl;

	while ( i <= number)
		cout << i++ << endl;
}

void printResultUsingDoWhile(int number)
{
	int i = 1;
	cout << "print Result Using Do While" << endl;
	do
	{
		cout << i++ << endl;
	} while (i <= number);
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


