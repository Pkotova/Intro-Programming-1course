// 6digits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int number, a, b;

	cout << "Enter six digits number: ";
	cin >> number;

	a = number / 1000;
	b = number % 1000;
	
	if (a < b)
	{
		cout << a <<" Is less than " << b << endl;
	}
	else
		cout << a << " Is grater than " << b << endl;
	
    return 0;
}

