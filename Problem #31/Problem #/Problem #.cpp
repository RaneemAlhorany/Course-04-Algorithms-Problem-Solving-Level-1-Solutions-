#include <iostream>
#include <string>


using namespace std;


//int ReadNumber(int &number)
//{
//
//	cout << "Enter a number: " << endl;
//	cin >> number;
//
//	return number;
//}


int ReadNumber()
{
	int number;
	cout << "Enter a number: " << endl;
	cin >> number;

	return number;
}


void powerNumber_2_3_4(int number)
{
	int temp;

	temp = number * number;
	cout << "Power of 2: " << temp << endl;

	temp = temp  * number;
	cout << "Power of 3: " << temp << endl;

	temp = temp * number;
	cout << "Power of 4: " << temp << endl;

}

//
//int powerNumber(int number , int base)
//{
//	return pow(number, base);
//
//}


//void PrintPowerNumber(int number, int base)
//{
//	cout << powerNumber(number, base) << endl;
//}


int main()
{

	powerNumber_2_3_4(ReadNumber());
	return (0);
}

//int main()
//{
//	int number;
//	ReadNumber(number);
//	PrintPowerNumber(number, 2);
//	PrintPowerNumber(number, 3);
//	PrintPowerNumber(number, 4);
//	return (0);
//}
