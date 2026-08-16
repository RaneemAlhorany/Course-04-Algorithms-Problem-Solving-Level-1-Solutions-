#include <iostream>
#include <string>


using namespace std;





 
void ReadData(float  &Length_of_the_equal_legs , float &length_of_the_base)
{
	cout << "Enter Length of the equal legs: ";
	cin >> Length_of_the_equal_legs;

	cout << "Enter length of the base: ";
	cin >> length_of_the_base;
}



float calculateArea (float Length_of_the_equal_legs , float length_of_the_base)
{
	const float PI = 3.141592653589793238;
		
	return PI * (pow(length_of_the_base, 2)/4) * ((2 * Length_of_the_equal_legs - length_of_the_base) / (2 * Length_of_the_equal_legs + length_of_the_base));
}



void printArea(float area)
{
	cout << "Circle Area: " << area << endl;
}



int main ()
{
	float Length_of_the_equal_legs, length_of_the_base;
	ReadData(Length_of_the_equal_legs, length_of_the_base);
	printArea(calculateArea(Length_of_the_equal_legs, length_of_the_base));
}


