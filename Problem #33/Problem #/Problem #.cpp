#include <iostream>
#include <string>


using namespace std;



int ReadGrade(int min, int max)
{

	int grade;
	do 
	{
		cout << "Enter a grade (0 - 100): " << endl;
		cin >> grade;

	} while (grade < min || grade > max);


	return grade;

}


char checkGrade(int grade)
{

	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else if (grade >= 50)
		return 'E';
	else
		return 'F';
}



int main()
{
	cout << "The grade is: " << checkGrade(ReadGrade(0, 100)) << endl;
	return (0);
}
