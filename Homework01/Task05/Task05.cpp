// Task05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int SumOfDevidors(int number) // function calculating the sum of the devidors, return sum of the devidors
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

int PrimeNumbers(int sums[100],int m, int n) // calculating prime numbers (sums calculated in the function above) returns count of prime sums
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
	int n, m, counter = 0, sums[100], j = 0;

	cout << "Input numbers to define the interval [n;m]: " << endl;
	cout << "Input n: ";
	cin >> n;
	
	if (!cin) //checking for correct input
	{
		cout << "Wrong input" << endl;
		return 0;
	}

	cout << "Input m: ";
	cin >> m;

	if (!cin || m < n) //cheking for correct input
	{
		cout << "Wrong input" << endl;
		return 0;
	}

	for (int  i = n; i <= m; i++)
	{
		sums[j] = SumOfDevidors(i); //collecting sums in array 
		j++;
	}
	cout<<PrimeNumbers(sums,m,n); //checking the amount of prime sums 

	cout << endl;
    return 0;
}

