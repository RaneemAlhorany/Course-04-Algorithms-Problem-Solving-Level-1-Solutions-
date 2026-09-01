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

//int SumOddNumbersUsingFor(int number)
//{
//	int sumOdd = 0;
//	for (int i = 1; i <= number; i+=2)
//			sumOdd += i;
//
//	return sumOdd;
//}


int SumOddNumbersUsingFor(int number)
{
	int sumOdd = 0;
	for (int i = 1; i <= number; i ++)
		if (CheckEvenOdd(i) == en_evenOdd::Odd)
			sumOdd += i;

	return sumOdd;
}

//int SumOddNumbersUsingWhile(int number)
//{
//	int sumOdd = 0;
//	int i = 1;
//	while (i <= number)
//	{
//		sumOdd += i;
//		i += 2;
//	}
//
//	return sumOdd;
//}

int SumOddNumbersUsingWhile(int number)
{
	int sumOdd = 0;
	int i = 1;

	while (i <= number)
	{
		if (CheckEvenOdd(i) == en_evenOdd::Odd)
			sumOdd += i;
		i ++;
	}

	return sumOdd;
}

//int SumOddNumbersUsingDoWhile(int number)
//{
//	int sumOdd = 0;
//	int i = 1;
//	do
//	{
//		sumOdd += i;
//		i += 2;
//	} while (i <= number);
//
//	return sumOdd;
//}	


int SumOddNumbersUsingDoWhile(int number)
{
	int sumOdd = 0;
	int i = 1;
	do
	{
		if (CheckEvenOdd(i) == en_evenOdd::Odd)
			sumOdd += i;
		i ++;
	} while (i <= number);

	return sumOdd;
}

//void printResult(int number)
//{
//	cout << "The sum of odd numbers from 1 to " 
//		<< number << " using For loop is: " << SumOddNumbersUsingFor(number) << endl;
//	cout << "The sum of odd numbers from 1 to " 
//		<< number << " using While loop is: " << SumOddNumbersUsingWhile(number) << endl;
//	cout << "The sum of odd numbers from 1 to " 
//		<< number << " using Do-While loop is: " << SumOddNumbersUsingDoWhile(number) << endl;
//
//}

int main()
{
	int number = ReadNumber();
	
	cout << "The sum of odd numbers from 1 to "
		<< number << " using For loop is: " << SumOddNumbersUsingFor(number) << endl;

	cout << "The sum of odd numbers from 1 to "
		<< number << " using While loop is: " << SumOddNumbersUsingWhile(number) << endl;

	cout << "The sum of odd numbers from 1 to "
		<< number << " using Do-While loop is: " << SumOddNumbersUsingDoWhile(number) << endl;

	return (0);
}


//
//int main()
//{
//	
//	printResult(ReadNumber());
//
//	return (0);
//}


