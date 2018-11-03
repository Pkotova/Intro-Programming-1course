// Task05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int SumOfDevidors(int number)
{
	int sum = 0, countPrimers = 0;
	for (int i = 1; i <= number; i++) // number % number = 0 this means number is a devidor as well but ... ;(
	{
		if (number % i == 0) 
		{
			sum += i;
		}
	}
	return sum;
}

int PrimeNumbers(int sums[100],int m, int n)
{
	int counter = 0;

	for (int i = 2; i <= (m - n); ++i)
	{
		if (sums[i] % i != 0)
		{ 
			counter++;
		}
	}
	return counter;
}

int main()
{
	int n, m, counter = 0, sums[100];

	cin >> n;
	cin >> m;

	int j = 0;

	for (int  i = n; i <= m; i++)
	{
		sums[j] = SumOfDevidors(i);
		j++;
	}
	cout<<PrimeNumbers(sums,m,n);

	cout << endl;
    return 0;
}

