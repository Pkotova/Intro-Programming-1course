// Task03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

bool isLeap(int year)
{
		if (year % 4 != 0 || year % 100 != 0 || year % 400 == 0)
			return true;
		else
			return false;
}
int main()
{
	int year;
	cout << "Enter year for checking: ";
	cin >> year;
	cout << "The year is leap? :: " << isLeap(year);

	cout << endl;
    return 0;
}

