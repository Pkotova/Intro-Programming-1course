// Week09_Pointer_Task06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.
const int SIZE = 100;

double avr(double x, double y)
{
	return (x + y) / 2;
}
double ends(double x)
{
	return x / 2;
}
void input(double collection[SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> collection[i];
	}
}

double existElement(double collection[SIZE], int size)
{
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			if (ends(collection[1]) == collection[0])
			{
				index = i;
			}
		}
		else if (avr(collection[i - 1], collection[i + 1]) == collection[i])
		{
			index = i;
		}
		if (i == size - 1)
		{
			if (ends(collection[size - 2]) == collection[size-1])
			{
				index = i;
			}
		}

	}
	return index;
}

int main()
{
	double collection[SIZE], size = 5;
	input(collection, size);
	cout << existElement(collection, size);


    return 0;
}

