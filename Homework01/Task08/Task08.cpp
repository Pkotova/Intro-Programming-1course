// Task08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{
	int temp, number, digit, reversed = 0;

	do {
		cout << "Enter number in the range [10;30000]: ";
		cin >> number;

		if (!cin) //checking for correct input
		{
			cout << "Incorrect input" << endl;
			return 0;
		}
	}while(!(number >= 10 && number <= 30000));
	
	temp = number; //helping variable holding the value of number

	do
	{
		digit = number % 10;
		reversed = (reversed * 10) + digit; // reversed holding number reversed f.e. abcde -> edcba 
		number = number / 10;

	} while (number != 0);

	//cout << " The reverse of the number is: " << reversed << endl;

	if (temp == reversed) // checking if f.e. abcdef = fedcba 
	{
		cout << " The number is a palindrome.";
	}
	else
	{
		cout << " The number is not a palindrome.";
	}
		
	cout << endl;
    return 0;
}

