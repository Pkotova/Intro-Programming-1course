// Problem5_Power.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, power = 2 ;
	cin >> n;
	cout << pow(2, n) << endl; //option 1

	for (int i = 1; i < n; i++)
	{
		power *= 2;
	}
	cout << power << endl;
    return 0;
}

