// Task12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int metres, dayCounter = 0;
	do {
		cin >> metres;
	} while (!(metres >= 10 && metres <= 101));
	
	while (metres > 1)
	{
		dayCounter++;
		metres--;
	}
	cout << dayCounter  << endl;
    return 0;
}

