// Task numbers 1 to n.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void numbersOneToN(int n)
{
	for (int i = 0; i <=n; i++)
	{
		cout << i << " ";
	}
}

int main()
{
	int n;
	cout << "Input a number: ";
	cin >> n;
	numbersOneToN(n);
    return 0;
}

