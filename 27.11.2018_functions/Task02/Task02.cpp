// Task02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int nFact(int n)
{
	int fact = 1;
	for (int i = 1; i <=n ; i++)
	{
		fact *= i;
	}
	return fact;
}

int main()
{
	int n;
	cout << "Input number: ";
	cin >> n;
	cout << "n! = " << nFact(n);

	cout << endl;
    return 0;
}

