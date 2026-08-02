#include <iostream>
#include <string>
using namespace std;


//my solution
//void readName(string& name)
//{
//    cout << "Enter your name: ";
//    cin >> name;
//}


string ReadName() 
{
    string name;

    cout << "Enter your name: ";
	//cin >> name;
    getline(cin , name);

    return name;
}



void printYourName(string name)
{
    cout << "your name : " << name << endl;
}




int main()
{
    //! this is 
    //string name;
	//readName(name);
    //printYourName(name);

	printYourName(ReadName());
    return (0);
}
