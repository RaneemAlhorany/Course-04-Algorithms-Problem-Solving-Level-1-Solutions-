#include <iostream>
#include <string>
using namespace std;



struct s_money
{
	int pennies, nickels , dimes, quarters , dollars;
};


s_money ReadData()
{
	s_money money;

	cout << "Enter the number of pennies: ";
	cin >> money.pennies;
	cout << "Enter the number of nickels: ";
	cin >> money.nickels;
	cout << "Enter the number of dimes: ";
	cin >> money.dimes;
	cout << "Enter the number of quarters: ";
	cin >> money.quarters;
	cout << "Enter the number of dollars: ";
	cin >> money.dollars;
	return money;
}


	
int  calculateTotalPennies(s_money money)
{
	return money.pennies  + (money.nickels *5) + 
		(money.dimes * 10) + (money.quarters * 25) + 
		(money.dollars * 100);
}



int main()
{

	float totalPennies = calculateTotalPennies(ReadData());
	cout << "Total pennies of the money is: $" << totalPennies << endl;



	cout << "Total dollars of the money is: $" << (float) totalPennies / 100.00 << endl;

	return 0;
}