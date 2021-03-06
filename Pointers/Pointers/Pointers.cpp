// Task02.cpp : Defines the entry point for the console application.
//
//71866_Petya Kotova 1gr.
#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	const int MAX_COLS = 100;
	const int MAX_ROWS = 100;
	int matrix[MAX_COLS][MAX_ROWS], sumRows[MAX_ROWS], n, m, certainRow, maxSum, sumSecondDiagonal = 0;
	//a) calculating max sum 
	//cheching for correct input
	cin >> n;
	if (!cin)
	{
		cout << "Wrong input!" << endl;
		return 1;
	}
	cin >> m;

	if (!cin)
	{
		cout << "Wrong input!" << endl;
		return 1;
	}

	if (n != m)
	{
		cout << "N SHOULD BE EQUALS TO M" << endl;
		return 1;
	}
	else
	{
		for (int i = 0; i <n; i++) // zeroed array 
		{
			sumRows[i] = 0;
		}

		for (int i = 0; i <n; i++) //collecting numbers in matrix 
		{
			for (int j = 0; j < m; j++)
			{
				cin >> matrix[i][j];
			}
		}

	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sumRows[i] = sumRows[i] + matrix[i][j]; // calculatin the sum of each row and save it in the array sumRows
		}
	}

	maxSum = sumRows[0];
	for (int i = 0;  i < n; i++)
	{
		if (maxSum <= sumRows[i]) //searching for the biggest sum in the array
		{
			maxSum = sumRows[i];
			certainRow = i; // saving its index
		}
	}
	cout << "Max sum is on row: " << certainRow << endl;

	//b) calculatin the sum over second diagonal

	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j + i < n - 1) // searching the numbers oved second diagonal
			{
				sumSecondDiagonal += matrix[i][j]; // calculating the sum
			}
		}
	}
	cout << "Sum over second diagonal: " << sumSecondDiagonal << endl;
	return 0;
}

