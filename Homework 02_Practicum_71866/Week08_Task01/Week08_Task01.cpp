#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

int Abs(int n)
{
	return n * ((2 * n + 1) % 2);
}

double Pow(double n, int k)
{
	int pow = 1;
	for (int i = 0; i < k; i++)
	{
		pow *= n;
	}

	return pow;
}

double Min(double n, double k)
{
	return (n < k) ? n : k;
	
}

double Max(double n, double k)
{
	return (n < k) ? k : n;
}

double MaxOf3(double a, double b, double c)
{
	return Max(Max(a, b), c);
}

double MinOf3(double a, double b, double c)
{
	return Min(Min(a, b), c);
}

bool isAlpha(char symbol)
{
	return (symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122);
}

bool isDigit(int symbol)
{
	return (symbol >= 48 && symbol <= 57);
}

void Menu()
{
	int choice;
	double number1, number2, number3;
	char character;
	do 
	{
		cout << "     Functions:" << endl;
		cout << "(1). Calculating Absolute value:" << endl;
		cout << "(2). Calculating power:" << endl;
		cout << "(3). Finding min of two" << endl;
		cout << "(4). Finding max of two" << endl;
		cout << "(5). Finding min of three" << endl;
		cout << "(6). Finding max of three" << endl;
		cout << "(7). Check if the input is Alpha" << endl;
		cout << "(8). Chech if the input is Digit" << endl;
		cout << ">> ";
		cin >> choice;
		cout << endl;
		cout << "______________________________" << endl;
		switch (choice)
		{
		case 1: 
		{
			cout << "Calculating absolutely value:" << endl;
			cout << "Number = ";
			cin >> number1;
			cout <<"|"<<number1<<"| = "<< Abs(number1) << endl;
			cout << "______________________________" << endl;
			break;
		}
		case 2:
		{
			cout << "Calculating power:" << endl;
			cout << "Number = ";
			cin >> number1;
			cout << "Power = ";
			cin >> number2;
			cout << number1 <<"^"<<number2<<" = " << Pow(number1,number2) << endl;
			cout << "______________________________" << endl;
			break;
		}
		case 3:
		{
			cout << "Finding min of two:" << endl;
			cout << "Number1 = ";
			cin >> number1;
			cout << "Number2 = ";
			cin >> number2;
			cout << "Min value of "<<number1<<", "<<number2<< " = " << Min(number1, number2) << endl;
			cout << "______________________________" << endl;
			break;
		}
		case 4:
		{
			cout << "Finding max of two:" << endl;
			cout << "Number1 = ";
			cin >> number1;
			cout << "Number2 = ";
			cin >> number2;
			cout << "Max value of " << number1 << ", " << number2 << " = " << Max(number1, number2) << endl;
			cout << "______________________________" << endl;
			break;
		}
		case 5:
		{
			cout << "Finding min of three:" << endl;
			cout << "Number1 = ";
			cin >> number1;
			cout << "Number2 = ";
			cin >> number2;
			cout << "Number3 = ";
			cin >> number3;
			cout << "Min value of " << number1 << ", " << number2<<", "<<number3 << " = " << MinOf3(number1, number2,number3) << endl;
			cout << "______________________________" << endl;
			break;
		}
		case 6:
		{
			cout << "Finding max of three:" << endl;
			cout << "Number1 = ";
			cin >> number1;
			cout << "Number2 = ";
			cin >> number2;
			cout << "Number3 = ";
			cin >> number3;
			cout << "Max value of " << number1 << ", " << number2 << ", " << number3 << " = " << MaxOf3(number1, number2, number3) << endl;
			cout << "______________________________" << endl;
			break;
		}
		case 7:
		{
			cout << "Check if the input is an Alpha" << endl;
			cout << "Character: ";
			cin >> character;
			cout << "The input is an alpha: " <<boolalpha<< isAlpha(character) << endl;
			cout << "______________________________" << endl;
			break;
		}
		case 8:
		{
			cout << "Check if the input is a Digit" << endl;
			cout << "Character: ";
			cin >> character;
			cout << "The input is a digit: " <<boolalpha <<isDigit(character) << endl;
			cout << "______________________________" << endl;
			break;
		}
		default:
			cout << "Invalid input!" << endl;
			break;
		}

	} while (true);
}

int main()
{
	Menu();	
	return 0;
}

