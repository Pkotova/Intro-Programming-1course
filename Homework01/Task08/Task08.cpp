// Task08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int temp, number, digit, reversed = 0;

	do {
		cout << "Enter number in the range [10;30000]: ";
		cin >> number;
		if (!cin)
		{
			cout << "Incorrect input" << endl;
			goto brk;
		}
	}while(!(number >= 10 && number <= 30000));
	
	temp = number;

	do
	{
		digit = number % 10;
		reversed = (reversed * 10) + digit;
		number = number / 10;

	} while (number != 0);

	//cout << " The reverse of the number is: " << reversed << endl;

	if (temp == reversed)
		cout << " The number is a palindrome.";
	else
		cout << " The number is not a palindrome.";
	
	brk:
	cout << endl;
    return 0;
}

