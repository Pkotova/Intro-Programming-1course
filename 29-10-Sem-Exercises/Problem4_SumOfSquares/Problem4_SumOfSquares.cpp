// Problem4_SumOfSquares.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i*i;
	}
	cout << sum <<endl;
    return 0;
}

