// Task04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

bool isEven(int number)
{
	if (number % 2 == 0)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	int number;
	cout << "Input number: ";
	cin >> number;
	cout << "Is the number is even : " << isEven(number);
	cout << endl;
    return 0;
}

