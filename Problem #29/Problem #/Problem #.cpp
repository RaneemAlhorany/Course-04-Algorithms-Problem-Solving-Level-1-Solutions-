#include <iostream>
#include <string>


using namespace std;

enum en_evenOdd
{
	Even = 0,
	Odd = 1
};

int ReadNumber()
{
	int number;

	cout << "enter your number \n";
	cin >> number;

	return number;
}

en_evenOdd CheckEvenOdd(int number)
{
	if (number % 2 == 0)
		return en_evenOdd::Even;
	else
		return en_evenOdd::Odd;
}



int SumEvenNumbersUsingFor(int number)
{
	int sumEven = 0;
	for (int i = 1; i <= number; i ++)
		if (CheckEvenOdd(i) == en_evenOdd::Even)
			sumEven += i;

	return sumEven;
}



int SumEvenNumbersUsingWhile(int number)
{
	int sumEven = 0;
	int i = 1;

	while (i <= number)
	{
		if (CheckEvenOdd(i) == en_evenOdd::Even)
			sumEven += i;
		i ++;
	}

	return sumEven;
}




int SumEvenNumbersUsingDoWhile(int number)
{
	int sumEven = 0;
	int i = 1;
	do
	{
		if (CheckEvenOdd(i) == en_evenOdd::Even)
			sumEven += i;
		i ++;
	} while (i <= number);

	return sumEven;
}


int main()
{
	int number = ReadNumber();
	
	cout << "The sum of even numbers from 1 to "
		<< number << " using For loop is: " << SumEvenNumbersUsingFor(number) << endl;

	cout << "The sum of even numbers from 1 to "
		<< number << " using While loop is: " << SumEvenNumbersUsingWhile(number) << endl;

	cout << "The sum of even numbers from 1 to "
		<< number << " using Do-While loop is: " << SumEvenNumbersUsingDoWhile(number) << endl;

	return (0);
}
