// Problem1_Squares.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (i * i < n)
		{
			cout << i * i << " " << endl;
		}
	}
    return 0;
}

