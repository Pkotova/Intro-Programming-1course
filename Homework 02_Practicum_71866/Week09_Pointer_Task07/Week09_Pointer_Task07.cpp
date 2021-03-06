// Week09_Pointer_Task07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

const int SIZE = 100;

void InputArray(int arr[SIZE], int *size)
{
	for (int i = 0; i < *size; i++)
	{
		cin >> arr[i];
	}
}

bool RemoveElement(int *arr, int *size, int *element)
{
	int counter = 0;

	for (int i = 0; i < *size; i++)
	{
		if (arr[i] == *element )
		{
			arr[i] = NULL;
			counter++;
		}
	}

	return counter > 0 ? true : false;
	
}
int main()
{
	int arr[SIZE],size, element;
	cout << "Input array size: ";
	cin >> size;
	cout << "Remove element: ";
	cin >> element;

	InputArray(arr, &size);
	cout << endl;
	cout <<"Did I remove?: "<< boolalpha << RemoveElement(arr, &size, &element) << endl;
	cout << endl;
    return 0;
}

