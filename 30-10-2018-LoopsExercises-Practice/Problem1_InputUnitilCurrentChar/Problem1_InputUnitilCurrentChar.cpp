// Problem1_InputUnitilCurrentChar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	char s,symbol;
	cout << "Choose a symbol: ";
	cin >> symbol;

	do
	{
		cout << "Input symbol: ";
		cin >> s;
	} while (symbol != s);

    return 0;
}

