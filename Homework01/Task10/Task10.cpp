// Task10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	float number, avrg, counter = 0, sum = 0;

	do {
		cout << "Enter a number: ";
		cin >> number;
		sum += number;
		counter++;

	} while (!(number < 1));

	avrg = (sum - number) / (counter - 1);
	cout << counter - 1 << endl;
	cout << sum - number << endl;
	cout << avrg << endl;
	
	brk:
    return 0;
}

