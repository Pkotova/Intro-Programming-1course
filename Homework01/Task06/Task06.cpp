// Task06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int number, fact = 1;
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		fact *= i;
	}
	cout << fact << endl;
    return 0;
}

