// Task01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int powTwo(int x)
{
	return x * x;
}

int main()
{
	int x;
	cout << "Input a number: ";
	cin >> x;
	cout<<powTwo(x);

	cout << endl;
    return 0;
}

