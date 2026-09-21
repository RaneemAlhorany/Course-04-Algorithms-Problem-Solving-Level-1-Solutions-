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

//float calculateServiceFee(float BillValue)
//{
//	return  BillValue *0.1;
//}
//
//
//float calculateSalesTax(float BillValue)
//{
//	return  BillValue * 0.16;
//}


float calculateAllServiceFee(float BillValue)
{
	BillValue  = BillValue * 1.1;
	BillValue = BillValue * 1.16;

	return  BillValue;
}

int main()
{
	float BillValue = ReadPositiveNumber("please enter the total bill");



	//float ServiceFee = calculateServiceFee(BillValue);
	//float SalesTax = calculateSalesTax(BillValue+ServiceFee);

	//float result = BillValue + ServiceFee + SalesTax;

	//cout << "---------------------------------" << endl;
	//cout << "result = " << result << endl;

	cout << "---------------------------------" << endl;
	cout << "result = " << calculateAllServiceFee(BillValue) << endl;


	return 0;
}
