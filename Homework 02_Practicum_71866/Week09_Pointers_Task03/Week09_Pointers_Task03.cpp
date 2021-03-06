// Week09_Pointer_Task06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.
const int SIZE = 100;
void input(int *collection, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> collection[i];
	}
}
void output(int *collection, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << collection[i] << ",  ";
	}
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void sort(int *collection, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (collection[i] >= collection[i++])
		{
			swap(&collection[i], &collection[i++]);
		}
	}
	output(collection, size);
}

int main()
{
	int collection1[SIZE], collection2[SIZE], collection3[SIZE], size1 = 5, size2 = 5, size3 = 5;

	input(collection1, 5);
	input(collection2, 5);
	sort(collection1, size1);
	sort(collection2, size2);



	return 0;
}

