// Task01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int number;

	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

