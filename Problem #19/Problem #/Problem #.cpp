#include <iostream>
#include <string>


using namespace std;


 
float ReadDiagonal()
{
	float diagonal;
	cout << "Enter diagonal: ";
	cin >> diagonal;
	return diagonal;
}


float calculateArea (float diagonal)
{
	const float PI = 3.141592653589793238;
		
	return (PI * pow(diagonal , 2)) / 4 ;
}



void printArea(float area)
{
	cout << "Circle Area: " << area << endl;
}



int main ()
{
	printArea(calculateArea(ReadDiagonal()));
}


