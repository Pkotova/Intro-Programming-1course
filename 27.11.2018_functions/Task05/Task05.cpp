// Task05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void isPrime(int number)
{
	bool isPrimeNumber = true;
	for (int i = 2; i <= number/2; i++)
	{
		if (number % i == 0)
		{
			isPrimeNumber = false;
		}
	}
	if (isPrimeNumber)
	{
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
}

int main()
{
	int number;
	cout << "Input number: ";
	cin >> number;
	cout << "Prime number? : ";
	isPrime(number);
    return 0;
}

