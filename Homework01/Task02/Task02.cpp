// Task02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{ 
	float loan, months, interestRate, monthlyPayment;
	cin >> loan;
	cin >> months;
	cin >> interestRate;
	cout << interestRate / months;
	cout << endl;
    return 0;
}

