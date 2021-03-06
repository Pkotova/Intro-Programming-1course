// Week09_Functions_Task02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

const int SIZE = 100;

int CountingOdds(int arr[SIZE], int size)
{
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
		{
			counter++;
		}
	}
	return counter;
}
int CountingEvens(int arr[SIZE], int size)
{
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			counter++;
		}
	}
	return counter;
}
void InputArray(int arr[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	int arr[SIZE], size ;
	cout << "Input array size: ";
	cin >> size;
	InputArray(arr, size);
	cout << "Even: " << CountingEvens(arr, size) << endl;
	cout << "Odd: " << CountingOdds(arr, size) << endl;
    return 0;
}

