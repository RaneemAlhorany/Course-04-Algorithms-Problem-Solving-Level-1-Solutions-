#include <iostream>
#include <string>
using namespace std;


enum e_NumberType
{
	EVEN,
	ODD
};


int  ReadNumber() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    return number;
}

e_NumberType checkNumberType(int number)
{
	if (number % 2 == 0)
		return e_NumberType::EVEN;
	else
		return e_NumberType::ODD;
}


//void printTypeOfNumber(int number)
//{
//	if (number % 2 == 0)
//	{
//		cout << number << " is even" << endl;
//	}
//	else
//	{
//		cout << number << " is odd" << endl;
//	}
//}

void printTypeOfNumber(e_NumberType Type)
{
	if (Type == e_NumberType::EVEN)
		cout << "The number is even" << endl;
	else
		cout << "The number is odd" << endl;
}




int main()
{
	//printEvenOdd(ReadNumber());
	printTypeOfNumber(checkNumberType(ReadNumber()));

    return (0);
}
