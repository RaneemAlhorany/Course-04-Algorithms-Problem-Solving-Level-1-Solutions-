#include <iostream>
#include <string>
using namespace std;



int ReadTotalSales()
{

	int TotalSales;

	cout << "Enter the total sales: \n";

	cin >> TotalSales;
	return TotalSales;

}


//int calculateTotalSales(int TotalSales , int percentage)
//{
//	
//	return (TotalSales * percentage / 100);
//
//}

float getComissionPercentage(int TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}




float calculateTotalComission(float TotalSales)
{
	 
	return getComissionPercentage(TotalSales) * TotalSales;
}

//
//int  checkTotalSales(int TotalSales)
//{
//
//	if (TotalSales > 1000000)
//		return calculateTotalSales(TotalSales, 1);
//	else if (TotalSales > 500000)
//		return calculateTotalSales(TotalSales, 2);
//	else if (TotalSales > 100000)
//		return calculateTotalSales(TotalSales, 3);
//	else if (TotalSales > 50000)
//		return calculateTotalSales(TotalSales, 5);
//	else
//		return 0;
//}


int main()
{
	float TotalSales = ReadTotalSales();

	cout << endl << "Commission Percentage = " << getComissionPercentage(TotalSales) * 100 << "%" << endl;

	cout << endl << "Total Commission = " << calculateTotalComission(TotalSales) << endl;

	return 0;  
}

//
//
//int main()
//{
//	cout << "the total sales is: " << checkTotalSales(ReadTotalSales()) << endl;
//	return (0);
//}
