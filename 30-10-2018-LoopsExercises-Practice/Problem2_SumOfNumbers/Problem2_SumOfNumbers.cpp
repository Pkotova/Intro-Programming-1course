// Problem2_SumOfNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double number, sum = 0;
	int i = 0;
	do
	{		
		cin >> number;
		if (number > 30)
		{

			cout << "Wrong input" << endl;
		}
		else 
		{
			sum += number;
		}

		i++;
	} while (!(sum>=100));

	cout << sum << endl;

    return 0;
}

