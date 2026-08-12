#include <iostream>
#include <string>


using namespace std;


 
float ReadSideLength()
{
	float sideLength;
	cout << "Enter side length: ";
	cin >> sideLength;
	return sideLength;
}


float calculateArea (float sideLength)
{
	const float PI = 3.141592653589793238;
		
	return (PI * pow(sideLength	 , 2)) / 4 ;
}



void printArea(float area)
{
	cout << "Circle Area: " << area << endl;
}



int main ()
{
	printArea(calculateArea(ReadSideLength()));
}


