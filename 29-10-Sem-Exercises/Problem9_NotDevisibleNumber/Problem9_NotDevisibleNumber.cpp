// Problem9_NotDevisibleNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		if (i % 3 != 0 && i % 7 != 0)
		{
			cout << i <<" ";
		}
	}
    return 0;
}

