// Problem11_OddOrEven.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, number,oddPositions = 1, evenPositions = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> number;
		if (i % 2 == 0)
		{
			evenPositions *= number;
		}
		else oddPositions *= number;
	}
	if (evenPositions == oddPositions)
	{
		cout << "Yes " << evenPositions << endl;
	}
	else
		cout << "No " << evenPositions <<" "<< oddPositions << endl;
    return 0;
}

