#include <iostream>
#include <string>
using namespace std;


void  ReadNumber(int &Num , int index)
{
	cout << "Enter Number: "<< index << endl;
	cin >> Num;
}


void ReadMultipleNumbers(int& num1, int& num2 , int& num3)
{
	ReadNumber(num1 , 1);
	ReadNumber(num2 , 2);
	ReadNumber(num3 , 3);
}


int returnMax(int num1, int num2 , int num3)
{
	if (num1 > num2)
	{
		if (num1 > num3)
			return num1;
		return num3;
	}
	else
	{
		if (num2 > num3)
			return num2;
		return num3;
	}
}


void printResult(int max)
{
	cout << "the maximum number is: " << max << endl;
}

//int main()
//{
//	int num1, num2 , num3;
//	ReadMultipleNumbers(num1 ,num2 , num3);
//	printResult(returnMax(returnMax(num1 , num2), num3));
//}
int main()
{
	int num1, num2, num3;
	ReadMultipleNumbers(num1, num2, num3);
	printResult(returnMax(num1, num2, num3));
}






