// Task_Diamond.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int height, temp = 1;
	cin >> height;
	char space = ' ', star = '*';
	for (int i = 0; i <= height; i++)
	{
		for (int j = height; j > i; j++)
		{
			cout << space;
		}
		cout << star;

		if (i > 0)
		{
			for (int t = 1; t <= temp; t++)
			{
				cout << space;
			}
			temp += 2;
			cout << star;
		}
		cout << endl;
	}

	temp -= 4;

	for (int i = 0; i <= height - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << space;
		}
		cout << star;

		for (int j = 1; j <= temp; j++)
		{
			cout << space;
		}
		temp -= 2;

		if (i != height - 1)
		{
			cout << star;
		}
		cout << endl;
	}
    return 0;
}

