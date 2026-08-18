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


bool validateNumberInRange(int number , int from , int to)
{
	return (number >= from && number <= to);
}

int ReadUntilAgeBetween(int from, int to)
{
	int age = 0;
	do
	{
		age = ReadAge();

	}while (!validateNumberInRange(age, from, to));

	return age;
}



void printResult(int age)
{
	cout << age << " : Valid Age" << endl;
}


//void printResult(int age)
//{
//	while (!validateNumberInRange(age, 18, 45))
//	{
//		cout <<age  << " : Invalid Age please enter a valid age" << endl;
//		age = ReadAge();
//	}
//
//	cout << age << " : Valid Age" << endl;
//		
//}

//int main()
//{
//	printResult(ReadAge());
//
//	return (0);
//}

int main()
{
	printResult(ReadUntilAgeBetween(18, 45));

	return (0);
}


