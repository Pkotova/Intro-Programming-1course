// Week09_Functions_Task03.cpp : Defines the entry point for the console application.
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
int Factorial(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}
void PrintResults(int arr[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "!=" << Factorial(arr[i]) << endl;
	}
}

int main()
{
	int arr[SIZE], size;
	cout << "Input array size: ";
	cin >> size;
	InputArray(arr, size);
	PrintResults(arr, size);

	return 0;
}

