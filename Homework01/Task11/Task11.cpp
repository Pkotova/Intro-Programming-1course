// Task11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int counter = 0, sum = 0, number; 
	while (counter == 5 || sum <=234)
	{
		cin >> number;
		if (number >= 10 && number <= 99)
		{
			counter++;
			sum += number;
		}
		else sum = sum;
	}
	cout << counter << " ," << sum << endl;
    return 0;
}

