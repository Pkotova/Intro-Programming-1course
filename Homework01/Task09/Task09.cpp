// Task08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int temp, number, digit, counter = 0;

	do {
		cout << "Enter number in the range [10;30000]: ";
		cin >> number;
		if (!cin)
		{
			cout << "Incorrect input" << endl;
			goto brk;
		}
	} while (!(number >= 10 && number <= 30000));

		while (number)
	{
		counter++;
		digit = number % 10;
		number = number / 10;
	}

	cout << counter;
	brk:
	cout << endl;
	return 0;
}

