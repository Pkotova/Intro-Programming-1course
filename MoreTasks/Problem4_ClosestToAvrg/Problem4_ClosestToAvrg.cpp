// Problem4_ClosestToAvrg.cpp : Defines the entry point for the console application.
//
//TODO
#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int collection[7], closest;
	double sum = 0, avrg;
	for (int i = 0; i < 7; i++)
	{
		cin >> collection[i];
		sum += collection[i];
	}

	//avrg = collection[1];
	for (int i = 0; i < 7; i++)
	{ 

		if (avrg - collection[i] < avrg - collection[i++])
		{
			closest = collection[i++];
		}
	}
	cout << closest << endl;
	return 0;
}

