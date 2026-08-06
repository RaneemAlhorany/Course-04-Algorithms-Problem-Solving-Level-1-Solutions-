#include <iostream>
#include <string>
using namespace std;


int  ReadNunber()
{
	int number;

	cout << "Enter Number: " << endl;
	cin >> number;

	return number;
}

//int returnHalfNumber(int number)
//{
//	return number / 2;
//}

float returnHalfNumber(int number)
{
	return number / 2.0;
}

void printHalfNumber(int halfNumber)
{
	string result;


	result = " Half of "  + 
		to_string(halfNumber) + " is : " +
		to_string(returnHalfNumber(halfNumber));
	
	cout << result << endl;
}




int main()
{
	
	//printHalfNumber(returnHalfNumber(ReadNunber()));
	printHalfNumber(ReadNunber());

    return (0);
}
