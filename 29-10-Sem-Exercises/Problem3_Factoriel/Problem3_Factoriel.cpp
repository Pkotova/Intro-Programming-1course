// Problem3_Factoriel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n,fact = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	cout << fact << endl;
    return 0;
}

