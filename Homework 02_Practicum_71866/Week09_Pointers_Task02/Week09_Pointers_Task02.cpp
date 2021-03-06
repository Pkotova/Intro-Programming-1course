// Week09_Pointers_Task02.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

const int SIZE = 100;

void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void InputArray(int arr[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void PrintArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void ReverseArray(int *arr, int size)
{
	int temp;
	for (int i = 0; i < size / 2; i++)
	{
		Swap(&arr[i], &arr[size - i - 1]);
	}

	PrintArray(arr, size);
}

int main()
{
	int arr[SIZE], size ;
	cout << "Input array size: ";
	cin >> size;
	InputArray(arr, size);
	cout << endl;
	ReverseArray(arr, size);

	cout << endl;
	return 0;
}


