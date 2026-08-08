#include <iostream>
#include <string>
using namespace std;


void  ReadMark(int &Mark , int index)
{

	cout << "Enter Mark: " << endl;
	cin >> Mark;
}

void ReadMultipleMarks(int& num1, int& num2, int& num3)
{
	ReadMark(num1 , 1);
	ReadMark(num2 , 2);
	ReadMark(num3 , 3);
}

int sumOfThree(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}



float clculateAVG(int mark1 , int mark2 , int mark3)
{
	return (sumOfThree(mark1 , mark2 , mark3) / 3.0);
}




void printResult(int avg)
{
		cout << "the avg is: " << avg << endl;
}

int main()
{
	int mark1, mark2, mark3;
	ReadMultipleMarks(mark1 ,mark2 , mark3);
	printResult(clculateAVG(mark1 , mark2 , mark3));

}







