#include <iostream>
#include <string>
using namespace std;


struct S_Applicant
{
	int age;
	bool hasLicense;
	bool hasRecommendation;
};


S_Applicant ReadInfo()
{
	S_Applicant info;

	cout << "Enter your age: " << endl;
	cin >> info.age;

	cout << "Do you have a driving license? (1/0): ";
	cin >> info.hasLicense;

	cout << "Do you have a recommendation ? (1/0)";
	cin >> info.hasRecommendation;

	return info;
}


bool CheckEligibility(S_Applicant info)
{
	if (info.hasRecommendation)
		return (true);
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
	printResult(ReadInfo());
    return (0);
}
