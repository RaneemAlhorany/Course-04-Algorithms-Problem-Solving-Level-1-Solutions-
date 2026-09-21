#include <iostream>
#include <string>
using namespace std;



//int  ReadNumbers(string message)
//{
//	int number = 0;
//	int sum = 0;
//	do {	
//
//		sum += number;
//		cout << "Enter " << message << ": \n";
//		cin >> number;
//		
//
//	} while (number != -99);
//	
//
//	return sum;
//}

float ReadNumber(string message)
{
	float number = 0;
	cout << "Enter " << message << ": \n";
	cin >> number;

	return number;
}

float  sumNumbers()
{
	int number = 0 ,sum = 0 ,  counter = 1;
	do {

		number = ReadNumber("enter number" + to_string(counter));
		if (number != -99)
		{
			sum += number;
			counter++;
		}
	} while (number != -99);


	return sum;
}

void PrintSum(int sum)
{
	cout << "The sum of the numbers is: " << sum << endl;
}


int main()
{
	PrintSum(sumNumbers());
	return 0;
}

