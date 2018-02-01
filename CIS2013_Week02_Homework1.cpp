#include <iostream>
using namespace std;

int main()
{
	int firstNumber, secondNumber;
	char op, question;
	bool goAgain = true;
	
	while(goAgain)
	{
		cout << "Hello" << endl;
		cout << "Please enter your first number" << endl;
		cin >> firstNumber;
		
		cout << "Please enter your second number" << endl;
		cin >> secondNumber;
		
		cout << "Would you like to +, -, *, or / " << firstNumber <<
		" and " << secondNumber << endl;
		cin >> op;
		
		switch(op)
		{
			case('+'):
				cout << "Your result is " << firstNumber + secondNumber << endl;
				break;
			case('-'):
				cout << "Your result is " << firstNumber - secondNumber << endl;
				break;
			case('*'):
				cout << "Your result is " << firstNumber * secondNumber << endl;
				break;
			case('/'):
				cout << "Your result is " << firstNumber / secondNumber << endl;	
				break;
			default:
				cout << "That is not a valid math operator" << endl;	
		}	
		cout << "Do you want to go again? Enter y or n" << endl;
		cin >> question;
		if(question != 'y'){goAgain = false;}
	}
	return 0;
}