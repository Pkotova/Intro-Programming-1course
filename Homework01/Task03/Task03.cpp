// Task03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int number, digit, sum = 0, counter = 0,digits[100], i = 0;

	cout << "Enter Your Number:";
	cin >> number;
	
	while (number)
	{
		counter++;
		digit = number % 10;
		number = number / 10;	
		digits[i] = digit;
		i++;
	}
			
	for (i = 0; i < counter; i++)
	{
		cout << digits[i] << endl;
		sum += pow(digits[i], counter);
	}
	cout << sum << endl;
	//cout << counter << endl;
	cout << endl;
    return 0;
}

