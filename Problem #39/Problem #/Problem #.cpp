#include <iostream>
#include <string>
using namespace std;


float ReadPositiveNumber(string message)
{
	float number = 0;

	do {
		cout << "Enter " << message << ": \n";
		cin >> number;
	} while (number <= 0);

	return number;
}

float calculatePayReminder(float totalBill, float cashPaid)
{
	return cashPaid - totalBill;
}


int main()
{
	float totalBill = ReadPositiveNumber("please enter the total bill");
	float cashPaid = ReadPositiveNumber("please enter the cash paid");

	cout << endl;
	cout << "total bill = " << totalBill << endl;
	cout << "cash paid = " << cashPaid << endl;

	cout << "---------------------------------" << endl;
	cout << "reminder = " << calculatePayReminder(totalBill, cashPaid) << endl;



	return 0;
}
