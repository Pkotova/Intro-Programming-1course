// Problem3_SortNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	float arr[10];
	int n = 2;
	// cout << "Enter a number" ; cin>>n;
	for (int i = 0; i <= n; i++)
	{
		cout << "Enter number " << i + 1 <<" : ";
		cin >> arr[i];
	}
	for (int  i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
			
		}
	}

	cout << "Your numbers sorted: " << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << arr[i] << endl;
	}
	
    return 0;
}

