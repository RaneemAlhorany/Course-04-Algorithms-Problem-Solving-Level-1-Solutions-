#include <iostream>
#include <string>


using namespace std;


//
//void ReadNumber(int &number , int &base)
//{
//	cout << "Enter a number: " << endl;
//	cin >> number;
//
//	cout << "Enter a base: " << endl;
//	cin >> base;
//
//}

int ReadNumber()
{
	int number;
	cout << "Enter a number: " << endl;
	cin >> number;

	return number;

}


int ReadPower( )
{
	int power;

	cout << "Enter a power: " << endl;
	cin >> power;

	return power;

}


int power_numberof(int number, int power)
{
	if (power == 0)
		return 1;
	else if (power < 0)
	{
		cout << "Power cannot be negative." << endl;
		return -1; // Return an error value
	}

	int result = 1;
	for (int i = 1; i <= power; i++)
	{
		result *= number;
	}
	return result;
}

//
//void powerNumber_of_m(int number , int base)
//{
//
//	cout << number <<  " ^ " << base << " = " << power_numberof(number, base) << endl;
//
//}


int main()
{

	//ReadNumber(number, base);
	cout  << power_numberof(ReadNumber(), ReadPower()) << endl;

	//powerNumber_of_m(number, base);
	return (0);
}
