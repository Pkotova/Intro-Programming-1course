// CompareNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int arr[3],br = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == arr[i+1] || arr[i] == arr[i + 2])
		{
			br +=2;
		}
		else if (arr[i] == arr[i + 1] == arr[i + 2])
		{
			br += 3;
		}
		else br = 0;
	}
	cout << br << endl;
    return 0;
}

