#include <iostream>
#include <string>
using namespace std;


void  ReadNumber(int &number)
{

	cout << "Enter Number: " << endl;
	cin >> number;
}

void ReadNumbers(int& num1, int& num2, int& num3)
{
	ReadNumber(num1);
	ReadNumber(num2);
	ReadNumber(num3);
}

//void  ReadMultipleNumber (int Numbers[3])
//{
//
//	for (int index = 0; index < 3; index++)
//	{
//		cout << "Enter Number " << index+1 << " :" << endl;
//		ReadNumber(Numbers[index]);
//	}
//}


//int summation(int numbers[3])
//{
//	int sum = 0;
//	for (int i = 0; i < 3; i++)
//		sum += numbers[i];	
//	return sum;
//}

int sumOfThree(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}


void printResult(int summation)
{
		cout << "the summation is: " << summation << endl;
}


int main()
{
	int num1 , num2 , num3;
	ReadNumbers(num1 , num2 , num3);
	printResult(sumOfThree(num1 ,num2 , num3));
	return (0);
}


//
//int main()
//{
//	int Numbers[3];
//	ReadMultipleNumber(Numbers);
//	printResult(summation(Numbers));
//    return (0);
//}
