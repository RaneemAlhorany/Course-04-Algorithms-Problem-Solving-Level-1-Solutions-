#include <iostream>
#include <string>


using namespace std;


void ReadData(float  &a , float &b , float &c)
{
	cout << "Enter Length of the first side: ";
	cin >> a;

	cout << "Enter length of the second side: ";
	cin >> b;

	cout << "Enter length of the third side: ";
	cin >> c;
}


//float calculat_Semi_perimeter(float a , float b , float c)
//{
//	return  (a + b + c) / 2;
//}


//float calculateArea (float a , float b , float c , float p)
//{
//	const float PI = 3.14159;
//
//	float Numerator = (a * b* c);
//	float denominator = 4 * sqrt(p * (p - a) * (p - b) * (p - c));
//
//	return PI * pow( Numerator / denominator, 2);
//}

float calculateArea(float a, float b, float c)
{
	const float PI = 3.14159;

	float p = (a + b + c) / 2; // Calculate semi-perimeter

	float temp = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));

	return PI * pow(temp , 2);
}

void printArea(float area)
{
	cout << "Circle Area: " << area << endl;
}



int main ()
{
	float a , b , c , p ;
	ReadData(a, b, c);

	//printArea(calculateArea(a , b , c, calculat_Semi_perimeter(a , b , c)));
	printArea(calculateArea(a, b, c));
}


