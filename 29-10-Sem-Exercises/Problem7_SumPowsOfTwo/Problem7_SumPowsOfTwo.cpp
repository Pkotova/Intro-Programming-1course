// Problem7_SumPowsOfTwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, power = 2,sum = 0;
	do {
		cout << "Input n:";
		cin >> n;
	} while (!(n <= 30));

	for (int i = 1; i < n; i++)
	{
		power *= 2;
		sum += power;
	}
	cout << 3 + sum << endl;

    return 0;
}

