// transponirana.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double arr[100][100], rows, cols, sum = 0;

	cout << "How many rows: ";
	cin >> rows;
	cout << "How many cols: ";
	cin >> cols;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
			sum += arr[i][j];
		}
	}

	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << " SUM: " << sum << endl;
	cout << " AVRG: " << sum / (rows * cols) << endl;

    return 0;
}

