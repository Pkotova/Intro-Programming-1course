// Task_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int height;
	cin >> height;

	int temp = 1;
	for (int i = 0; i <= height; i++)
	{
		for (int j = height; j>i; j--)
		{
			cout << " "; 
		}

		cout << "*";  

		if (i>0)
		{
			for (int k = 1; k <= temp; k++)
			{
				cout << " ";
			}
			temp += 2;
			cout << "*";
		}
		cout << endl;
	}

	temp -= 4;

	for (int i = 0; i <= height - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}

		cout << "*";

		for (int k = 1; k <= temp; k++)
		{
			cout << " ";
		}
		temp -= 2;

		if (i != height - 1)
		{
			cout << "*";
		}
		cout << endl;
	}
    return 0;
}

