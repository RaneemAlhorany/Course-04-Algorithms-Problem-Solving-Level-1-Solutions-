#include <iostream>
#include <string>
using namespace std;


void  ReadNumber(int &Num , int index)
{
	cout << "Enter Number: "<< index << endl;
	cin >> Num;
}


void ReadMultipleNumbers(int& num1, int& num2 )
{
	ReadNumber(num1 , 1);
	ReadNumber(num2 , 2);
}


void swapNumbers(int &num1, int &num2)
{
	int temp;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
}


//void printResult(int num1, int num2)
//{
//	cout << "before swapping: " << endl;
//	cout << "Number 1: " << num1 << endl;
//	cout << "Number 2: " << num2 << endl;
//	swapNumbers(num1, num2);
//	cout << "after swapping: " << endl;
//	cout << "Number 1: " << num1 << endl;
//	cout << "Number 2: " << num2 << endl;
//
//}

void printResult(int num1, int num2)
{
	cout << "Number 1: " << num1 << endl;
	cout << "Number 2: " << num2 << endl;
	cout << "-------------------------" << endl;


}

//int main()
//{
//	int num1, num2;
//	ReadMultipleNumbers(num1, num2);
//	printResult(num1, num2);
//}

int main()
{
	int num1, num2;
	ReadMultipleNumbers(num1, num2);
	printResult(num1, num2);
	swapNumbers(num1, num2);
	printResult(num1, num2);
}




