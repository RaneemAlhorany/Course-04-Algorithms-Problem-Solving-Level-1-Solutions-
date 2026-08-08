#include <iostream>
#include <string>
using namespace std;


void  ReadNumber(int &Num , int index)
{
	cout << "Enter Number: "<< index << endl;
	cin >> Num;
}


void ReadMultipleNumbers(int& num1, int& num2)
{
	ReadNumber(num1 , 1);
	ReadNumber(num2 , 2);
}


int returnMax(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	return num2;
}


void printResult(int max)
{
	cout << "the maximum number is: " << max << endl;
}

int main()
{
	int num1, num2;
	ReadMultipleNumbers(num1 ,num2);
	printResult(returnMax(num1 , num2));
}







