#include <iostream>
#include <string>
using namespace std;


//enum e_operation
//{
//	ADD = '+',
//	SUBTRACT = '-',
//	MULTIPLY = '*',
//	DIVIDE = '/' ,
//	Error = '?'
//};


enum e_operation
{
	ADD = '+',
	SUBTRACT = '-',
	MULTIPLY = '*',
	DIVIDE = '/'
};


//struct s_Numbers
//{
//	float firstNumber;
//	float secondNumber;
//};

//s_Numbers ReadNumbers()
//{
//	s_Numbers number;
//
//	cout << "Enter the first number: ";
//	cin >> number.firstNumber;
//	cout << "Enter the second number: ";
//	cin >> number.secondNumber;
//	return number;
//}

//float ReadNumbers(string message)
//{
//	float number;
//
//	cout << "Enter " << message ;
//	cin >> number;
//	return number;
//}
//
//e_operation ReadOperation()
//{
//	char op;
//
//	cout << "Enter the operation (+, -, *, /): ";
//	cin >> op;
//
//	switch (op)
//	{
//	case '+':
//		return ADD;
//	case '-':
//		return SUBTRACT;
//	case '*':
//		return MULTIPLY;
//	case '/':
//		return DIVIDE;
//	default:
//		cout << "Error: Invalid operation!" << endl;
//	}
//	return Error;
//}


float ReadNumbers(string message)
{
	float number;

	cout << "Enter " << message;
	cin >> number;
	return number;
}

e_operation ReadOperation()
{
	char op = '+';

	cout << "Enter the operation (+, -, *, /): ";
	cin >> op;

	return (e_operation)op;
}

//float calculatevalues(e_operation operation , s_Numbers number)
//{
//	float result = 0.0;
//
//	switch (operation)
//	{
//	case ADD:
//		result = number.firstNumber + number.secondNumber;
//		break;
//	case SUBTRACT:
//		result = number.firstNumber - number.secondNumber;
//		break;
//	case MULTIPLY:
//		result = number.firstNumber * number.secondNumber;
//		break;
//	case DIVIDE:
//		if (number.secondNumber != 0)
//			result = number.firstNumber / number.secondNumber;
//		else
//			cout << "Error: Division by zero!" << endl;
//		break;
//	default:
//		cout << "Error: Invalid operation!" << endl;
//		break;
//	}
//	return result ;
//}


float calculatevalues(float firstNumber, float secondNumber, e_operation operation)
{

	switch (operation)
	{
	case e_operation::ADD:
		return (firstNumber + secondNumber);
	case e_operation::SUBTRACT:
		return (firstNumber - secondNumber);
	case e_operation::MULTIPLY:
		return (firstNumber * secondNumber);
	case e_operation::DIVIDE:
			return (firstNumber / secondNumber);
	default:
		return (firstNumber + secondNumber);
	}
}

int main()
{
	float firstNumber = ReadNumbers("the first number: ");
	float secondNumber = ReadNumbers("the second number: ");
	
	e_operation operation = ReadOperation();

	cout << "the result is: " << calculatevalues(firstNumber, secondNumber, operation) << endl;

	return 0;
}

//
//int main()
//{
//	cout << "the result is: " << calculatevalues(ReadOperation(), ReadNumbers()) << endl;
//
//	return 0;
//}