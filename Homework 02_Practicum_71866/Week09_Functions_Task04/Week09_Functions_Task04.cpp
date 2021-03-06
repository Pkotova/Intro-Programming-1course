// Week09_Functions_Task04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

const int SIZE = 100;

void InputArray(int arr[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
int ToBinary(int number)
{
	long long binaryNumber = 0;
	int remainder, i = 1;

	while (number != 0)
	{
		remainder = number % 2;
		number /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}
void PrintResults(int arr[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "(2) ->" << ToBinary(arr[i]) << endl;
	}
}

int main()
{
	int arr[SIZE], size ;
	cout << "Input array size: ";
	cin >> size;
	InputArray(arr, size);
	PrintResults(arr, size);

	return 0;
}

