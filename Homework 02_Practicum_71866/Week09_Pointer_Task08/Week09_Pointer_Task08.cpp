// Week09_Pointer_Task08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
//Petya Kotova fn 71866

const int SIZE = 100;

void input(int collection[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> collection[i];
	}
}

int binaryToDecimal(int number)
{
	int num = number;
	int decimalValue = 0;

	// Initializing base value to 1, i.e 2^0 
	int start = 1;

	int temp = num;
	while (temp)
	{
		int lastDigit = temp % 10;
		temp = temp / 10;

		decimalValue += lastDigit * start;

		start = start * 2;
	}

	return decimalValue;
}
int * isThere(int *collection, int size, int element)
{
	int * ptr = nullptr;
	for (int i = 0; i < size ; i++)
	{
		if (binaryToDecimal(element) == collection[i])
		{
			ptr = &collection[i];
			break;
		}
	}
	return (ptr == nullptr) ? NULL : ptr;
}
int main()
{
	int collection[SIZE], size = 5, element = 10;
	input(collection, size);
	cout << isThere(collection, size, element) << endl;
    return 0;
}

