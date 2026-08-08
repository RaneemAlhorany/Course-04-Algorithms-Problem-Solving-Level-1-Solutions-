#include <iostream>
#include <string>
using namespace std;

enum e_result
{
	Fail ,
	Pass  
};

void ReadMark(int &Mark , int index)
{

	cout << "Enter Mark: "<< index << endl;
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

e_result checkResult(int avg)
{
	if (avg >= 50)
		return e_result::Pass;
	else
		return e_result::Fail;
}



void printResult(int avg)
{
	cout << "the avg is: " << avg << endl;

	if (checkResult(avg) == e_result::Pass)
		cout << "the result is: Pass" << endl;
	else
		cout << "the result is: Fail" << endl;
}

int main()
{
	int mark1, mark2, mark3;
	ReadMultipleMarks(mark1 ,mark2 , mark3);
	printResult(clculateAVG(mark1 , mark2 , mark3));

}







