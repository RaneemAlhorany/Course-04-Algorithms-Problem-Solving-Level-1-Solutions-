#include <iostream>
#include <string>


using namespace std;


void  ReadNumber(float& Num, string name)
{
	cout << "Enter " << name << ": ";
	cin >> Num;
}



void ReadMultipleNumbers(float& sideLength, float& diagonal)
{
	ReadNumber(sideLength, "side length");
	ReadNumber(diagonal, "diagonal");
}


float calculateArea (float sideLength, float diagonal)
{
	return sideLength * sqrt(pow(diagonal, 2) - pow(sideLength, 2) );
}



void printArea(float area)
{
	cout << "Area: " << area << endl;
}



int main()
{
	float sideLength, diagonal;
	ReadMultipleNumbers(sideLength, diagonal);
	printArea(calculateArea(sideLength, diagonal));
}




