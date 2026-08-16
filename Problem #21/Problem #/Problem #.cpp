#include <iostream>
#include <string>


using namespace std;


 
float ReadCircumference()
{
	float circumf;
	cout << "Enter circumference: ";
	cin >> circumf;
	return circumf;
}


float calculateArea (float circumference)
{
	const float PI = 3.141592653589793238;
		
	return pow(circumference, 2) / (4 * PI) ;
}



void printArea(float area)
{
	cout << "Circle Area: " << area << endl;
}



int main ()
{
	printArea(calculateArea(ReadCircumference()));
}


