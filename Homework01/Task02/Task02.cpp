// Task02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{ 
	int months;
	float loan, rate, loanToReturn;

	cout << "Enter loan: ";
	cin >> loan;

	if (!cin || loan <= 0)
	{
		cout << "Wrong input" << endl;
		return 0;
	}
	cout << "Enter rate: ";
	cin >> rate;

	if (!cin || rate <= 0)
	{
		cout << "Wrong input" << endl;
		return 0;
	}

	cout << "Enter period: ";
	cin	>> months;
	if (!cin || months <= 0)
	{
		cout << "Wrong input" << endl;
		return 0;
	}

	loanToReturn = loan * (1 + (months*rate) / 100);

	cout << "Monthly interest rate is:" << rate / 12 << endl;
	cout << "q = " << 1 + (months*rate) / 100 << endl;
	cout << "Monthly payment:" << loanToReturn / months << endl;
	cout << "The total amount to be returned:" << loanToReturn;

	cout << endl;
    return 0;
}

