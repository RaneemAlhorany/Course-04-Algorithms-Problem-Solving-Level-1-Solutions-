#include <iostream>
#include <string>


using namespace std;

//const float PI = 3.141592653589793238;

//void  ReadRadius(float& r)
//{
//	cout << "Enter radius: ";
//	cin >> r;
//}
 
float ReadRadius()
{
	float radius;
	cout << "Enter radius: ";
	cin >> radius;
	return radius;
}


float calculateArea (float radius)
{
	const float PI = 3.141592653589793238;

	return PI * pow(radius, 2);
}



void printArea(float area)
{
	cout << "Circle Area: " << area << endl;
}



//int main()
//{
//	float radius;
//	ReadRadius(radius);
//	printArea(calculateArea(radius));
//}

int main ()
{
	printArea(calculateArea(ReadRadius()));
}


