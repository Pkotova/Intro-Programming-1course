// 3digitnumberACR.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int number, a, b, c;
	cout << "number: ";
	cin >> number;

	a = number / 100;
	b = number / 10 % 10;
	c = number % 10;

	if ((a < b) && (b < c) && (a < c))
	{
		cout << "Yess" << endl;
	}
	else
		cout << "No" << endl;

	system("pause");
    return 0;
}

