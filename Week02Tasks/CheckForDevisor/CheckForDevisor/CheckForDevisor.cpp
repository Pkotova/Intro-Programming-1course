// CheckForDevisor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int number1, number2;
	cout << "Input number1: ";
	cin >> number1;
	cout << "Input number2: ";
	cin >> number2;
	if (number1 % number2 == 0)
	{
		cout << "Number 1 can be devided by " << number2;
	}
	else
		cout << "Number 1 can not be devided by " << number2 << endl;
	system("pause");
    return 0;
}

