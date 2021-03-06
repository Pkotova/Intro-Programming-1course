// Week08_Task03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

const int ROWS = 50;
const int COLS = 50;

void Diagonal(int i, int j, int element)
{
	if (i == j)
	{
		element = i;
		cout << element << " ";
	}
}
void AboveDiagonal(int i, int j, int element)
{
	if (j > i)
	{
		element = j - i;
		cout << element << " ";
	}
}
void BelowDiagonal(int i, int j, int element)
{
	if (i > j)
	{
		element = i * j;
		cout << element << " ";

	}
}
void FillInTheMatrix(int n, int m, int matrix[ROWS][COLS])
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Diagonal(i, j, matrix[i][j]);
			AboveDiagonal(i, j, matrix[i][j]);
			BelowDiagonal(i, j, matrix[i][j]);
		}
		cout << endl;
	}
}

int main()
{
	int matrix[ROWS][COLS], n, m;
	cout << "Rows: ";
	cin >> n;
	cout << "Cols: ";
	cin >> m;
	FillInTheMatrix(n, m, matrix);
    return 0;
}

