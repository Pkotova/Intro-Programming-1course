// Problem6_GeometricProgression.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n,a,sum = 0;
	cin >> n;
	cin >> a;
	for (int i = 1; i <= n; i++)
	{
		sum += a * i;
	}
	cout << 1 + sum << endl;
    return 0;
}

