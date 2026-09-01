#include <iostream>
#include <string>


using namespace std;


//int ReadNumber()
//{
//	int number;
//
//	cout << "enter your number \n";
//	cin >> number;
//
//	return number;
//}



int ReadPositiveNumber(string message)
{
	int number;

	do
	{
		cout << message << endl;
		cin >> number;

	} while (number < 0);


	return number;
}


int factorialNumbers(int number)
{
	int factorial = 1;
	for (int i = 1; i <= number; i++)
		factorial *= i;

	return factorial;
}







int main()
{
	cout << factorialNumbers(ReadPositiveNumber("Enter a positive number: ")) << endl;

	return (0);
}


//int main()
//{
//	int number = ReadNumber();
//	
//
//	cout << "The factorial of  "
//		<< number << " is: " << factorialNumbers(number) << endl;
//
//	return (0);
//}
