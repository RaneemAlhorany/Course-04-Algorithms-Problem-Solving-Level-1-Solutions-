#include <iostream>
#include <string>


using namespace std;


int ReadAge()
{
	int age;

	cout << "enter your age \n";
	cin >> age;

	return age;
}


//bool checkAge(int age)
//{
//	if (age > 17 && age < 46)
//		return true;
//	return false;
//}

bool validateNumberInRange(int number , int from , int to)
{
	return (number >= from && number <= to);
}



void printResult(int age)
{
	if (validateNumberInRange(age , 18 , 45))
		cout << "Valid Age" << endl;
	else
		cout << "Invalid Age" << endl;
}

//
//void printResult(bool result)
//{
//	if (result)
//		cout << "Valid Age" << endl;
//	else
//		cout << "Invalid Age" << endl;
//}


//
//int main ()
//{
//	printResult(checkAge(ReadAge()));
//}


int main()
{
	printResult(ReadAge());

	return (0);
}


