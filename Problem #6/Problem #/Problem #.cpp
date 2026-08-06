#include <iostream>
#include <string>
using namespace std;


struct S_User_info
{
	string firstName;
	string lastName;
};


S_User_info ReadInfo()
{
	S_User_info info;

	cout << "Enter your first name: " << endl;
	cin >> info.firstName;

	cout << "Enter your last name: " << endl;
	cin >> info.lastName;

	return info;
}

string GetFullName(S_User_info info)
{
	return (info.firstName + " " + info.lastName);
}

void printFullName(string fullName)
{
	cout << "Your full name is: " << fullName << endl;
}


//
//void printUserData(S_User_info info)
//{
//	cout << info.firstName << " " << info.lastName << endl;
//}



int main()
{
	printFullName(GetFullName(ReadInfo()));
	//printUserData(ReadInfo());
    return (0);
}
