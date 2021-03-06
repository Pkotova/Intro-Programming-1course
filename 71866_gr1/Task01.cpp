// Task01.cpp : Defines the entry point for the console application.
//
// 71866 Petya Kotova 1gr.
#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 50;
	int numbers[SIZE], reversedNumbers[SIZE],sums[SIZE],copyArray[SIZE],copySums[SIZE],n,digit,digitSum,reversedSums[SIZE];
	
	cout << "How many numbers do you have: ";
	cin >> n;
	//chechking for correct input

	if (!cin)
	{
		cout << "Wrong input! " << endl;
		return 1;
	}

	// create array with elements = 0 
	for (int i = 0; i < n; i++) 
	{
		reversedNumbers[i] = 0;
		reversedSums[i] = 0;
	}
	
	for (int  i = 0; i < n; i++)
	{
		cin >> numbers[i]; // collect inputted numbers into array
		copyArray[i] = numbers[i]; //copy the created array
	}

	for (int i = 0; i < n; i++)
	{
		while (numbers[i]) // reverse each number in the first array
		{
			digit = numbers[i] % 10;
			numbers[i] = numbers[i] / 10;
			reversedNumbers[i] = (reversedNumbers[i] * 10) + digit; //collecting each reversed number into a new array
		}

	}
	cout << endl;
	for (int i = 0; i < n; i++) 
	{
		sums[i] = copyArray[i] + reversedNumbers[i]; //calculating sums of numbers and reversed numbers, but using the copy of numbers
		copySums[i] = sums[i]; // copy sum into a new array
	}

	for (int i = 0; i < n; i++)
	{
		while (sums[i]) // reverse each sum
		{
			digitSum = sums[i] % 10;
			sums[i] = sums[i] / 10;
			reversedSums[i] = (reversedSums[i] * 10) + digitSum; // collecting reversed sums into a new array
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (copySums[i] == reversedSums[i]) //checking if each element of sums is equals to the element in the reversed array
		{
			cout << "It is not Lychrel number" << endl;
		}
		else cout << "Lychrel number" << endl;
	}

	return 0;
}

