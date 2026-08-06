#include <iostream>
#include <string>
using namespace std;

enum  e_result
{
	Pass = 1,
	Fail = 0
};


int  ReadMark()
{
	int number;

	cout << "Enter Mark: " << endl;
	cin >> number;
	return number;
}

e_result checkMark(int mark)
{
	if (mark >= 50)
		return e_result::Pass;
	else
		return e_result::Fail;
}

void printResult(int mark)
{
	if (checkMark(mark) == e_result::Pass)
		cout << "Pass" << endl;
	else
		cout << "Fail" << endl;
}



int main()
{
	printResult(ReadMark());
    return (0);
}
