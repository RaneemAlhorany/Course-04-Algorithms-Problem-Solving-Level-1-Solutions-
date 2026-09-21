#include <iostream>
#include <string>
using namespace std;

enum en_isPrime { Prime = 1, NotPrime = 0 };

//int ReadNumber(string message)
//{
//	int number = 0;
//	cout << "Enter " << message << ": \n";
//	cin >> number;
//
//	return number;
//}


float ReadPositiveNumber(string message)
{
	float number = 0;

	do {
		cout << "Enter " << message << ": \n";
		cin >> number;
	} while (number <= 0);


	return number;
}

//bool checkIfPrime(int number)
//{
//
//	int count = 2;
//
//	do {
//
//		if (number % count == 0 && number != count)
//			return false;
//
//		count++;
//
//	} while (count < number / 2);
//
//	return true;
//
//}

en_isPrime checkIfPrime(int number)
{

	int MiddleNumber = round(number / 2);

	for (int counter = 2; counter <= MiddleNumber; counter++)
	{
		if (number % counter == 0)
			return en_isPrime::NotPrime;
	}

	return en_isPrime::Prime;

}



//void PrintIsPrime(bool isPrime)
//{ 
//	if (isPrime)
//		cout << "The number is prime: "  << endl;
//	else
//		cout << "The number is not prime: "  << endl;
//
//}

void PrintIsPrime(int number)
{
	switch (checkIfPrime(number))
	{
		case en_isPrime::Prime:
			cout << "The number is prime: " << endl;
			break;
		case en_isPrime::NotPrime:
			cout << "The number is not prime: " << endl;
			break;
	}
}

//int main()
//{
//	PrintIsPrime(checkIfPrime(ReadNumber("enter a number")));
//	return 0;
//}


int main()
{
	PrintIsPrime(ReadPositiveNumber("enter a positive number"));
	return 0;
}
