// Task08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{
	int temp, number, digit, counter = 0;

	do {
		cout << "Enter number in the range [10;30000]: ";
		cin >> number;

		if (!cin) //checking for correct input 
		{
			cout << "Incorrect input" << endl;
			return 1;
		}

	} while (!(number >= 10 && number <= 30000));

	while (number) // split the number into digits 
	{
		counter++; //counting iterationg = counting digits of the number 
		digit = number % 10;
		number = number / 10;
	}

	cout << counter; 
	cout << endl;
	return 0;
}

