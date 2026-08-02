#include <iostream>
#include <string>
using namespace std;


struct S_Applicant
{
	int age;
	bool hasLicense;
};


S_Applicant ReadInfo()
{
	S_Applicant info;

	cout << "Enter your age: " << endl;
	cin >> info.age;

	cout << "Do you have a driving license? (1/0): ";
	cin >> info.hasLicense;

	return info;
}


//int  ReadAge() 
//{
//    int age;
//
//    cout << "Enter your age: ";
//    cin >> age;
//
//    return age;
//}


//bool ReadHasLicense()
//{
//	string answer;
//	cout << "Do you have a driving license? (yes/no): ";
//	cin >> answer;
//	return (answer == "yes" || answer == "Yes");
//}


//bool CheckEligibility(int age, bool hasLicense)
//{
//	return (age > 21 && hasLicense);
//}
//
//
//
//void printResult(bool result)
//{
//	if (result)
//		cout << "Hired." << endl;
//	else
//		cout << "Rejected." << endl;
//}

bool CheckEligibility(S_Applicant info)
{
	return (info.age > 21 && info.hasLicense);
}


void printResult(S_Applicant info)
{
	if (CheckEligibility(info))
		cout << "Hired." << endl;
	else
		cout << "Rejected." << endl;
}


int main()
{
	//printResult(CheckEligibility(ReadAge(), ReadHasLicense()));
	printResult(ReadInfo());
    return (0);
}
