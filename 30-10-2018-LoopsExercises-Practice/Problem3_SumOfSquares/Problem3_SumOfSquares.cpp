// Problem3_SumOfSquares.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	long long number, sum = 0;
	cout << "Input number: ";
	cin >> number;
	
	for (int i = 0; i < number; i++)
	{
		if (number <= 9999)
		{
			sum += i * i;
		}
		else
			cout << "Wrong input" << endl;
	}
	for (int  i = 0; i < number - 1; i++)
	{
		if (i % 2 != 0)
		{
			
			cout << i <<" is odd number! "<< endl;
		}
	}
	cout <<"Sum of sqares: "  <<sum << endl;
    return 0;
}

