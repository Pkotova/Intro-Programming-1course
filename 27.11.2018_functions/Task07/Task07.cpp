// Task07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

bool isPowerOfTwo(int number)
{
	if (number == 0)
		return 0;
	while (number != 1)
	{
		if (number % 2 != 0)
			return 0;
		number = number / 2;
	}
	return 1;
}

int main()
{
	int number;
	cout << "Input number for checking: ";
	cin >> number;
	cout << isPowerOfTwo(number) << endl;
    return 0;
}

