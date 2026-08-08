#include <iostream>
#include <string>
using namespace std;


void  ReadNumber(float &Num , string name )
{
	cout << "Enter " << name << ": ";
	cin >> Num;
}


void ReadMultipleNumbers(float& width, float& height )
{
	ReadNumber(width , "width");
	ReadNumber(height , "height");
}


float calculateArea (float width, float height)
{
	return width * height;
}



void printArea(float area)
{
	cout << "Area: " << area << endl;
}



int main()
{
	float width, height;
	ReadMultipleNumbers(width, height);
	printArea(calculateArea(width, height));
}




