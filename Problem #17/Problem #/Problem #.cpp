#include <iostream>
#include <string>


using namespace std;


void  ReadNumber(float& Num, string name)
{
	cout << "Enter " << name << ": ";
	cin >> Num;
}
 


void ReadMultipleNumbers(float& HalfTheBase, float& height)
{
	ReadNumber(HalfTheBase, "half the base");
	ReadNumber(height, "height");
}


float calculateArea (float HalfTheBase, float height)
{
	return 0.5 * HalfTheBase * height	;
}



void printArea(float area)
{
	cout << "Triangle Area: " << area << endl;
}



int main()
{
	float HalfTheBase, height;
	ReadMultipleNumbers(HalfTheBase, height);
	printArea(calculateArea(HalfTheBase, height));
}




